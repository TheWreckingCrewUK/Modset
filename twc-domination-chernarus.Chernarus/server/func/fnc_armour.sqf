/*
*
* Function to create an armour reinforcement for an AO
*
*/

params["_pos"];
/*
*This block finds the start position for the armour. 
*It gets the nearestLocations then randomly picks one as long as it exists, isn't the lastAO, and isn't closer to the airbase in order to stop the enemy from driving through it.
*/
sideMissionLocationArray = nearestLocations [_pos, ["NameVillage","NameCity","NameCityCapital"], 5000];
_rand = random 100;
if(str sideMissionLocationArray == "[]" || (_pos distance2D getMarkerPos "aoCenterMarker") > (_pos distance2D getMarkerPos "respawn_west")) exitWith{
	systemChat "side mission is closer to base than AO OR it returned no bases";
	isSideMissionComplete = 1;
};
_rand = round (random(count sideMissionLocationArray));
while {_rand <= 4} do {_rand = round (random(count sideMissionLocationArray));};
_pos = getPos (sideMissionLocationArray select _rand);
_name = text (sideMissionLocationArray select _rand);
if(_name == lastAO || _name in badAOs)exitWith {isSideMissionComplete = 1;};

//ParseText hint for side mission spawn
parseText format["<t align='center'><t size='2' color='#008080'>Armour coming from </t><br/><t align='center'><t size='1.5' color='#ffffff'> %1</t><br/><t align='center'>---------------------<br/></t><t align='left'><t size='1' shadow='1.1' shadowColor='#000000' color='#d8c08d'>An enemy armoured Unit has left and is heading to reinforce the AO. Stop them!</t>", _name] remoteExec ["hint"];

//creates the task
[West,[_name],["Hostiles are reinforcing their objective with armour. Destroy it before it reaches the AO",format["Destroy Armour from %1",_name],""],objNull,True,1,True,"",False] call BIS_fnc_taskCreate;

//side Mission variable
isSideMissionComplete = 0;

//side mission marker.
_markerstr = createMarker ["sideMissionCenterMarker",_pos];
_markerstr setMarkerShape "ICON";
_markerstr setMarkerType "o_armor";

//This spawns the armoured units. If they arive at the first move waypoint it fails the armour sidemission.
_spawnPos = [_pos,[400,600],random 360,0,[1,100]] call SHK_pos;
_group = [_spawnPos, EAST, tankaaCombined] call BIS_fnc_spawnGroup;
_wp = _group addWaypoint [getMarkerPos "aoCenterMarker",0];
_wp setWaypointType "MOVE";
_wp setWaypointSpeed "FULL";
_wp setWaypointStatements ["true","
	[(group this), getMarkerPos 'aoCenterMarker', 600] call twc_fnc_patrol;
	isSideMissionComplete = 1;
	deleteMarker 'sideMissionCenterMarker';
"];

waitUntil {{West knowsAbout _x > 2} forEach units _group || ({alive _x} count units _group == 0) || isSideMissionComplete == 1};

parseText format["<t align='center'><t size='2' color='#008080'>Tanks Spotted</t><br/><t align='center'>---------------------<br/></t><t align='left'><t size='1' shadow='1.1' shadowColor='#000000' color='#d8c08d'>The enemy armour that left from %1 has been Spotted. Destroy them!</t>", _name] remoteExec ["hint"];

//As long as the tanks are alive and not at their first objective it moves the marker.
while {({alive _x} count units _group > 0)} do {
	if(isSideMissionComplete == 1)exitWith{};
	if({WEST knowsAbout _x > 2} forEach units _group) then{
		"sideMissionCenterMarker" setMarkerPos (getPos (leader _group));
	};
	sleep 10;
};

//decides if fail or complete message.
if (isSideMissionComplete == 0) then{
	[_name, "Succeeded",true] spawn BIS_fnc_taskSetState;
	isSideMissionComplete = 1;
	deleteMarker "sideMissionCenterMarker";

	parseText format["<t align='center'><t size='2' color='#008080'>Side Mission</t><br/><t align='center'><t size='1.5' color='#00FF00'> Completed</t><br/><t align='center'>---------------------<br/></t><t align='left'><t size='1' shadow='1.1' shadowColor='#000000' color='#d8c08d'>The enemy armour that left from %1 has been destroyed. Good Job!</t>", _name] remoteExec ["hint"];
}else{
	parseText format["<t align='center'><t size='2' color='#008080'>Side Mission</t><br/><t align='center'><t size='1.5' color='#FF0000'> Failed</t><br/><t align='center'>---------------------<br/></t><t align='left'><t size='1' shadow='1.1' shadowColor='#000000' color='#d8c08d'>The enemy armour that left from %1 have reinforced the AO</t>", _name] remoteExec ["hint"];
	[_name, "Failed",true] spawn BIS_fnc_taskSetState;
};

/* It is not needed to delete the dead tanks as the AO will clean them up when it deletes allDead
*/