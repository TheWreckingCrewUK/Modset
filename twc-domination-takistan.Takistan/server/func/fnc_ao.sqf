/*
* Function to spawn an AO
*
* params["_pos","_name"];
*
* returns nothing, but creates the AO
*/

params["_pos","_name"];

//Creates ao marker:
_markerstr = createMarker ["aoCenterMarker",_pos];
_markerstr setMarkerShape "ICON";
_markerstr setMarkerType enemyFlag;

//Defines variable for bunkers.
_bunker1 = "aobunkerone";
_bunker2 = "aobunkertwo";
_bunker3 = "aobunkerthree";

//Defines/Resets variables for capturing the AO
bunkerCount = 0;
areaCleared = 0;
towerCount = 0;
lowPlayerCount = 0;


/*
Side Mission List:
twc_fnc_arty
twc_fnc_mortar
twc_fnc_armour
*/

//if there is more than 8 players it spawns the third bunker + radar tower + side mission
if((count allPlayers) > 8) then{

	[_pos,_name] spawn twc_fnc_highPlayers;
}else{

	[_pos,_name] spawn twc_fnc_lowPlayers;
};

if isServer then {
	_trg = createTrigger ["EmptyDetector", _pos];
	_trg setTriggerArea [800, 800, 0, false];
	_trg setTriggerActivation ["EAST", "PRESENT", false];
	_trg setTriggerTimeout [10,10,10,True];
	_trg setTriggerStatements ["((EAST countSide thisList) < 12 && ({_x isKindOf 'landVehicle' && side _x == EAST} count thisList == 0))","areaCleared = 1", ""];
};

if isServer then {
	_spawnPos = [_pos,[200,300],[10,110],0,[1,100]] call SHK_pos;
	bunker1 = "land_BagBunker_Large_F" createVehicle _spawnPos;
	_dir = [_spawnPos, _pos] call BIS_fnc_dirTo;
	bunker1 setDir _dir;
	
	_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
	[_unit, _spawnPos, 50] call twc_fnc_defend;
	
	_markerstr = createMarker ["aobunkerone",_spawnPos];
	_markerstr setMarkerShape "ICON";
	_markerstr setMarkerType bunkerMarkerClass;
	_markerstr setMarkerColor "colorEAST";
	_markerstr setMarkerSize [0.5,0.5];
	
	_trg = createTrigger ["EmptyDetector", _spawnPos];
	_trg setTriggerArea [10,10,_dir,True];
	_trg setTriggerTimeout [30,30,30,True];
	_trg setTriggerActivation ["WEST", "Present", False];
	_trg setTriggerStatements ["this","'Bunker Captured' remoteExec ['hint']; bunkerCount = bunkerCount + 1; 'aobunkerone' setMarkerColor 'colorWEST'",""];
		
};

if isServer then {
	_spawnPos = [_pos,[200,300],[130,230],0,[1,100]] call SHK_pos;
	bunker2 = "land_BagBunker_Large_F" createVehicle _spawnPos;
	_dir = [_spawnPos, _pos] call BIS_fnc_dirTo;
	bunker2 setDir _dir;
	
	_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
	[_unit, _spawnPos, 50] call twc_fnc_defend;
		
	_markerstr = createMarker ["aobunkertwo",_spawnPos];
	_markerstr setMarkerShape "ICON";
	_markerstr setMarkerType bunkerMarkerClass;
	_markerstr setMarkerColor "colorEAST";
	_markerstr setMarkerSize [0.5,0.5];
	
		
	_trg = createTrigger ["EmptyDetector", _spawnPos];
	_trg setTriggerArea [10,10,_dir,True];
	_trg setTriggerTimeout [30,30,30,True];
	_trg setTriggerActivation ["WEST", "Present", False];
	_trg setTriggerStatements ["this","'Bunker Captured' remoteExec ['hint']; bunkerCount = bunkerCount + 1; 'aobunkertwo' setMarkerColor 'colorWEST'",""];
		
};

waitUntil {bunkerCount == 3 && towerCount == 1};

if(areaCleared != 1)then{
	"Area captured. Now just eliminate the remaining enemies" remoteExec ["hint"];
};

waitUntil {areaCleared == 1};
[_name, "Succeeded",true] spawn BIS_fnc_taskSetState;
hint "AO captured";
deleteMarker "aobunkerone";
deleteMarker "aobunkertwo";
deleteMarker "aoCenterMarker";
deleteVehicle bunker1;
deleteVehicle bunker2;
if (lowPlayerCount == 0)then{
	deleteMarker "aobunkerthree";
	deleteVehicle bunker3;
	
	_wreck = (getMarkerPos "radioMarker") nearestObject "Land_TTowerBig_2_ruins_F";
	deleteVehicle _wreck;
	deleteMarker "radioMarker";
};
lastAO = _name;

{
	deleteVehicle _x
}forEach allDeadMen;
{
	deleteVehicle _x
}forEach allDead;

{
	deleteGroup _x
}forEach allGroups;

execVM "server\ao\getAO.sqf";