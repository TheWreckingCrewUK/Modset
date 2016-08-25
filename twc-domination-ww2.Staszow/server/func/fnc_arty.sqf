params["_pos"];

/*
*This block finds the start position for the mortar. 
*It gets the nearestLocations then randomly picks one as long as it exists and isn't the last AO
*/
sideMissionLocationArray = nearestLocations [_pos, ["NameVillage","NameCity","NameCityCapital"], 10000];

if(str sideMissionLocationArray == "[]") exitWith{
	isSideMissionComplete = 1;
};
_rand = round (random(count sideMissionLocationArray));
while {_rand < 10} do {_rand = round (random(count sideMissionLocationArray));};
_pos = getPos (sideMissionLocationArray select _rand);
_name = text (sideMissionLocationArray select _rand);
if(_name == lastAO)exitWith {isSideMissionComplete = 1;};

//side Mission hint
parseText format["<t align='center'><t size='2' color='#008080'>Artillary At </t><br/><t align='center'><t size='1.5' color='#ffffff'> %1</t><br/><t align='center'>---------------------<br/></t><t align='left'><t size='1' shadow='1.1' shadowColor='#000000' color='#d8c08d'>The enemy has artillary that will assist in defending the AO. Destroy them.</t>", _name] remoteExec ["hint"];

//creates the task
[West,[_name],["Hostiles are reinforcing their objective with artilary. Destroy it before it fires on the AO",format["Destroy Artillary in %1",_name],""],objNull,True,1,True,"",False] call BIS_fnc_taskCreate;

//side Mission variable
isSideMissionComplete = 0;

//side mission marker. 
_markerstr = createMarker ["sideMissionCenterMarker",_pos];
_markerstr setMarkerShape "ICON";
_markerstr setMarkerType "o_art";

//trigger that checks if artillary are alive.
if isServer then {
	_trg = createTrigger ["EmptyDetector", _pos];
	_trg setTriggerArea [400, 400, 0, false];
	_trg setTriggerActivation ["EAST", "PRESENT", false];
	_trg setTriggerTimeout [10,10,10,True];
	_trg setTriggerStatements ["((EAST countSide thisList) < 4 && ({_x isKindOf 'landVehicle' && side _x == EAST} count thisList == 0))","isSideMissionComplete = 1; deleteMarker 'sideMissionCenterMarker'", ""];
};

//spawns 2 artyillary units and has them face the AO. Also spawns 2 defend sections.
for "_i" from 1 to 1 do {
	if isServer then {
		_pos = [_pos,[200,300],random 360,0,[1,100]] call SHK_pos;
		{
			_spawnPos = [_pos,[0,10],random 360,0,[0]] call SHK_pos;
			_unit = [_spawnPos, EAST, arty] call BIS_fnc_spawnGroup;
			_unit = leader _unit;
			_dir = [getPos _unit, getMarkerPos "aoCenterMarker"] call BIS_fnc_dirTo;
			_unit setDir _dir;
		}forEach[1,2];
		
		for "_i" from 1 to 2 do {
			_unit = [_pos, EAST, squad] call BIS_fnc_spawnGroup;
			[_unit, _pos, 150] call twc_fnc_patrol;
		};
		
	};
};

waitUntil {isSideMissionComplete == 1};
if(bunkerCount != 3 || towerCount != 1 || areaCleared != 1) then{
	[_name, "Succeeded",true] spawn BIS_fnc_taskSetState;
	parseText format["<t align='center'><t size='2' color='#008080'>Side Mission</t><br/><t align='center'><t size='1.5' color='#00FF00'> Completed</t><br/><t align='center'>---------------------<br/></t><t align='left'><t size='1' shadow='1.1' shadowColor='#000000' color='#d8c08d'>The enemy artilary in %1 have been destroyed. Good Job!</t>", _name] remoteExec ["hint"];
}else{
	
	[_name, "Canceled",true] spawn BIS_fnc_taskSetState;
	deleteMarker "sideMissionCenterMarker";
};

//deletes any remaining enemies or vehicles as the AO cleanup is too far away.
_enemy = nearestObjects [_pos, ["LandVehicle","Air"], 500];
{
	if (side _x != WEST)then{
		deleteVehicle _x;
	};
}forEach _enemy;
_enemy = nearestObjects [_pos, ["Man","WeaponHolder","GroundWeaponHolder"], 500];
{
	deleteVehicle _x
}forEach _enemy;