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

/*
Side Mission List:
twc_fnc_arty
twc_fnc_mortar
twc_fnc_armour
*/

//if there is more than 8 players it spawns the third bunker + radar tower + side mission
if((count allPlayers) > 8) then{

	parseText format["<t align='center'><t size='2' color='#ff0000'>AO created at </t><br/><t align='center'><t size='1.5' color='#ffffff'> %1</t><br/><t align='center'>---------------------<br/></t><t align='left'><t size='1' shadow='1.1' shadowColor='#000000' color='#CC4D00'>Capture the bunkers and Destroy the radio tower quickly to stop enemy reinforcements. </t>", _name] remoteExec ["hint"];

	[West,[_name],["To capture the AO you must capture the three bunkers, Destroy the Radio tower and then eliminate the remaining enemies from the area. While the radio tower is alive the enemy will be able to call for reinforcements.",format["%1 AO",_name],""],objNull,True,1,True,"",False] call BIS_fnc_taskCreate;

	_sideMission = selectRandom [twc_fnc_arty, twc_fnc_mortar, twc_fnc_armour];
	[_pos]spawn{sleep 10;[(_this select 0)] call _sideMission;};
	
	for "_i" from 1 to 1 do {
		if isServer then {
			_spawnPos = [_pos,[100,300],random 360,0,[1,100]] call SHK_pos;
			_tower = radioTower createVehicle _spawnPos;
			_tower setDamage 0.99;
			_tower addEventHandler ["Killed",{"Radio Tower Destroyed. The enemies can no longer call in Reinforcements" remoteExec ["hint"]; "radioMarker" setMarkerColor "colorWEST"; towerCount = 1}];

			_spawnPos = [(_spawnPos select 0) + 5,(_spawnPos select 1), (_spawnPos select 2)];
			_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 50] call twc_fnc_patrol;
		
			_markerstr = createMarker ["radioMarker",_spawnPos];
			_markerstr setMarkerShape "ICON";
			_markerstr setMarkerType "loc_Transmitter";
			_markerstr setMarkerColor "colorEAST";
			_markerstr setMarkerSize [0.75,0.75];
		};
	};
	
	if isServer then {
		_spawnPos = [_pos,[200,300],[250,350],0,[1,100]] call SHK_pos;
		bunker3 = "land_BagBunker_Large_F" createVehicle _spawnPos;
		_dir = [_spawnPos, _pos] call BIS_fnc_dirTo;
		bunker3 setDir _dir;
	
		_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
		[_unit, _spawnPos, 50] call twc_fnc_defend;
	
		_markerstr = createMarker ["aobunkerthree",_spawnPos];
		_markerstr setMarkerShape "ICON";
		_markerstr setMarkerType "n_unknown";
		_markerstr setMarkerColor "colorEAST";
		_markerstr setMarkerSize [0.5,0.5];
		
		_trg = createTrigger ["EmptyDetector", _spawnPos];
		_trg setTriggerArea [10,10,_dir,True];
		_trg setTriggerTimeout [5,5,5,True];
		_trg setTriggerActivation ["WEST", "Present", False];
		_trg setTriggerStatements ["this","'Bunker Captured' remoteExec ['hint']; bunkerCount = bunkerCount + 1; 'aobunkerthree' setMarkerColor 'colorWEST'",""];
		
	};
}else{

	parseText format["<t align='center'><t size='2' color='#ff0000'>AO created at </t><br/><t align='center'><t size='1.5' color='#ffffff'> %1</t><br/><t align='center'>---------------------<br/></t><t align='left'><t size='1' shadow='1.1' shadowColor='#000000' color='#CC4D00'>Capture the bunkers To complete the AO </t>", _name] remoteExec ["hint"];

	[West,[_name],["To capture the AO you must capture the two bunkers, and eliminate the remaining enemies from the area.",format["%1 AO",_name],""],objNull,True,1,True,"",False] call BIS_fnc_taskCreate;

	towerCount = 1;
	bunkerCount = bunkerCount + 1;
};

if isServer then {
	_trg = createTrigger ["EmptyDetector", _pos];
	_trg setTriggerArea [800, 800, 0, false];
	_trg setTriggerActivation ["EAST", "PRESENT", false];
	_trg setTriggerTimeout [10,10,10,True];
	_trg setTriggerStatements ["((EAST countSide thisList) < 6 && ({_x isKindOf 'landVehicle' && side _x == EAST} count thisList == 0))","areaCleared = 1", ""];
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
	_markerstr setMarkerType "n_unknown";
	_markerstr setMarkerColor "colorEAST";
	_markerstr setMarkerSize [0.5,0.5];
	
	_trg = createTrigger ["EmptyDetector", _spawnPos];
	_trg setTriggerArea [10,10,_dir,True];
	_trg setTriggerTimeout [5,5,5,True];
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
	_markerstr setMarkerType "n_unknown";
	_markerstr setMarkerColor "colorEAST";
	_markerstr setMarkerSize [0.5,0.5];
	
		
	_trg = createTrigger ["EmptyDetector", _spawnPos];
	_trg setTriggerArea [10,10,_dir,True];
	_trg setTriggerTimeout [5,5,5,True];
	_trg setTriggerActivation ["WEST", "Present", False];
	_trg setTriggerStatements ["this","'Bunker Captured' remoteExec ['hint']; bunkerCount = bunkerCount + 1; 'aobunkertwo' setMarkerColor 'colorWEST'",""];
		
};
//PlayerCount of < 5
if((count allPlayers) <= 5)then{
	for "_i" from 1 to 1 do {
		if isServer then {
			_spawnPos = [_pos,[100,200],random 360,0] call SHK_pos;
			_unit = [_spawnPos, EAST, squadAA] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 200] call twc_fnc_patrol;
		};
	};
	for "_i" from 1 to 1 do {
		if isServer then {
			_spawnPos = [_pos,[0,150],random 360,0] call SHK_pos;
			_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 150] call twc_fnc_defend;
		};
	};
	for "_i" from 1 to 1 do {
		if isServer then {
			_spawnPos = [_pos,[100,300],random 360,0] call SHK_pos;
			_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 200] call twc_fnc_patrol;
		};
	};
	/*
	for "_i" from 1 to 1 do {
		if isServer then {
			_spawnPos = [_pos,[400,500],random 360,0,[1,100]] call SHK_pos;
			_unit = [_spawnPos, EAST, tank] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 200] call twc_fnc_patrol;
		};
	};
	for "_i" from 1 to 1 do {
		if isServer then {
			_spawnPos = [_pos,[400,500],random 360,0,[1,100]] call SHK_pos;
			_unit = [_spawnPos, EAST, ifv] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 300] call twc_fnc_patrol;
		};
	};
	*/
	for "_i" from 1 to 1 do {
		if isServer then {
			_spawnPos = [_pos,[100,300],random 360,0,[1,100]] call SHK_pos;
			_unit = [_spawnPos, EAST, apc] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 300] call twc_fnc_patrol;
		};
	};
	for "_i" from 1 to 1 do {
		if isServer then {
			_spawnPos = [_pos,[100,300],random 360,0,[1,100]] call SHK_pos;
			_unit = [_spawnPos, EAST, aa] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 200] call twc_fnc_patrol;
		};
	};
};

//PlayerCount of 6 - 14
if((count allPlayers) > 5 && (count allPlayers) < 15)then{
	for "_i" from 1 to 3 do {
		if isServer then {
			_spawnPos = [_pos,[200,500],random 360,0] call SHK_pos;
			_unit = [_spawnPos, EAST, squadAA] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 200] call twc_fnc_patrol;
		};
	};
	for "_i" from 1 to 2 do {
		if isServer then {
			_spawnPos = [_pos,[0,250],random 360,0] call SHK_pos;
			_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 150] call twc_fnc_defend;
		};
	};
	for "_i" from 1 to 2 do {
		if isServer then {
			_spawnPos = [_pos,[200,600],random 360,0] call SHK_pos;
			_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 200] call twc_fnc_patrol;
		};
	};
	for "_i" from 1 to 1 do {
		if isServer then {
			_spawnPos = [_pos,[400,500],random 360,0,[1,100]] call SHK_pos;
			_unit = [_spawnPos, EAST, tank] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 200] call twc_fnc_patrol;
		};
	};
	for "_i" from 1 to 1 do {
		if isServer then {
			_spawnPos = [_pos,[400,500],random 360,0,[1,100]] call SHK_pos;
			_unit = [_spawnPos, EAST, ifv] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 300] call twc_fnc_patrol;
		};
	};
	for "_i" from 1 to 2 do {
		if isServer then {
			_spawnPos = [_pos,[400,700],random 360,0,[1,100]] call SHK_pos;
			_unit = [_spawnPos, EAST, apc] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 300] call twc_fnc_patrol;
		};
	};
	for "_i" from 1 to 1 do {
		if isServer then {
			_spawnPos = [_pos,[400,500],random 360,0,[1,100]] call SHK_pos;
			_unit = [_spawnPos, EAST, aa] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 200] call twc_fnc_patrol;
		};
	};
};

//PlayerCount of >= 15
if((count allPlayers) >= 15)then{
	for "_i" from 1 to 3 do {
		if isServer then {
			_spawnPos = [_pos,[200,500],random 360,0] call SHK_pos;
			_unit = [_spawnPos, EAST, squadAA] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 200] call twc_fnc_patrol;
		};
	};
	for "_i" from 1 to 3 do {
		if isServer then {
			_spawnPos = [_pos,[0,250],random 360,0] call SHK_pos;
			_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 150] call twc_fnc_defend;
		};
	};
	for "_i" from 1 to 5 do {
		if isServer then {
			_spawnPos = [_pos,[200,600],random 360,0] call SHK_pos;
			_unit = [_spawnPos, EAST, squad] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 200] call twc_fnc_patrol;
		};
	};
	for "_i" from 1 to 1 do {
		if isServer then {
			_spawnPos = [_pos,[400,500],random 360,0,[1,100]] call SHK_pos;
			_unit = [_spawnPos, EAST, tank] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 200] call twc_fnc_patrol;
		};
	};
	for "_i" from 1 to 1 do {
		if isServer then {
			_spawnPos = [_pos,[400,500],random 360,0,[1,100]] call SHK_pos;
			_unit = [_spawnPos, EAST, ifv] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 300] call twc_fnc_patrol;
		};
	};
	for "_i" from 1 to 3 do {
		if isServer then {
			_spawnPos = [_pos,[400,700],random 360,0,[1,100]] call SHK_pos;
			_unit = [_spawnPos, EAST, apc] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 300] call twc_fnc_patrol;
		};
	};
	for "_i" from 1 to 2 do {
		if isServer then {
			_spawnPos = [_pos,[400,500],random 360,0,[1,100]] call SHK_pos;
			_unit = [_spawnPos, EAST, aa] call BIS_fnc_spawnGroup;
			[_unit, _spawnPos, 200] call twc_fnc_patrol;
		};
	};
};

waitUntil {bunkerCount == 3 && towerCount == 1};
hint "Bunkers captured and Radio Tower Destroyed. Now eleminate the remaning enemies";
waitUntil {areaCleared == 1};
isSideMissionComplete = 1;
[_name, "Succeeded",true] spawn BIS_fnc_taskSetState;
hint "AO captured";
deleteMarker "aobunkerone";
deleteMarker "aobunkertwo";
deleteMarker "aobunkerthree";
deleteMarker "aoCenterMarker";
deleteVehicle bunker1;
deleteVehicle bunker2;
deleteVehicle bunker3;
_wreck = (getMarkerPos "radioMarker") nearestObject "Land_TTowerBig_2_ruins_F";
deleteVehicle _wreck;
deleteMarker "radioMarker";
lastAO = _name;

{
	deleteVehicle _x
}forEach allDead;
_enemy = nearestObjects [_pos, ["LandVehicle","Air"], 2000];
{
	if (side _x != WEST)then{
		deleteVehicle _x;
	};
}forEach _enemy;
_enemy = nearestObjects [_pos, ["Man","WeaponHolder","GroundWeaponHolder"], 2000];
{
	deleteVehicle _x
}forEach _enemy;
{
	deleteGroup _x
}forEach allGroups;

execVM "server\ao\getAO.sqf";