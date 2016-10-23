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

_waves = _waves - floor InsP_enemyMorale;
_sleep = 10;
if (_waves < 1) then {
	_waves = 0;
};
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

//If the playercount is high adds a chance of a technical
if ((count PlayableUnits) > 5) then{
	_rand = (random 100);
	if(_rand < 50)then{
		_spawnPos = [_pos, _groupradius,[_dir1,_dir2],0,[2,200]] call shk_pos;
		_groupSpawn =  [_spawnPos, East, enemyTechnical] call BIS_fnc_spawnGroup;
		[_groupSpawn, (_pos), 40] call CBA_fnc_taskAttack;
		{
			_x addMPEventHandler ["MPKilled",{
				if (side (_this select 1) == WEST) then{
					InsP_enemyMorale = InsP_enemyMorale + 0.1; publicVariable "InsP_enemyMorale";
				};
			}];
		}forEach units _groupSpawn;
	};
};

_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [400, 400, 0, false];
_trg setTriggerActivation ["EAST", "PRESENT", False];
_trg setTriggerStatements ["count thisList < 3","[(getpos thisTrigger)] call twc_deadCleanup",""];