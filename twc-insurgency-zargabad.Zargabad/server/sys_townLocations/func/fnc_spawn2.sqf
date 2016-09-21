/*
* Created by [TWC] jayman Using code form [TWC] WiredTiger
*
* Pre-Compiled as twc_spawnAIUnits
*
* Description:
* twc_townSetup passes along the marker waves and group radius which then has the morale
* added to the waves before spawning in the group. Unfortunently waves are predefined here.
*/

//Recieved Parameters
params ["_pos","_waves","_groupradius","_thisList"];
//Initial defines for number of waves and static time between them

//Creates a trigger to save\delete hostile units at the end.
_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["ANY", "PRESENT", false];
_trg setTriggerTimeout [45,45,45,True];
_trg setTriggerStatements ["((EAST countSide thisList) < 4) OR (West countSide thisList) == 0",format["[thisTrigger, thisList, str %1] call twc_fnc_townReset",_pos], ""];

[_pos] call twc_spawnDefend2;

_waves = _waves - 2;
_sleep = 10;
//Spawn for each wave
[_waves,_sleep,_pos,_groupradius,_thisList]spawn{
	//Back to variables for ease
	_waves = (_this select 0);
	_sleep = (_this select 1);
	_pos = (_this select 2);
	_groupradius = (_this select 3);
	_thisList = ((_this select 4) select 0);
	
	//Pre Calculations:
	_dir = _thisList getDir _pos;
	_dir1 = _dir - 30;
	_dir2 = _dir + 30;
	
	//Start of function
	for "_i" from 1 to _waves do {
		sleep _sleep;
		_spawnPos = [_pos,_groupradius,[_dir1,_dir2]] call SHK_pos;
		
	//Once it passed it spawns the units + adds event handler
		_groupSpawn = [_spawnPos, East, townSquadWave] call BIS_fnc_spawnGroup;	
		_buildings = nearestObjects[_pos,["house","buildings"],400];
		_spawnPos = _buildings call BIS_fnc_selectRandom;
		_spawnPos = getPos _spawnPos;
		[_groupSpawn, _spawnPos, 40] call CBA_fnc_taskAttack;	
		{
			_x addMPEventHandler ["MPKilled",{
				if (side (_this select 1) == WEST) then{
					InsP_enemyMorale = InsP_enemyMorale + 0.06; publicVariable "InsP_enemyMorale";
				};
			}];
			_x addMagazines ["handGrenade",2];
			_x setVariable ["location",str _pos,false];
		}forEach units _groupSpawn;
	};
};

