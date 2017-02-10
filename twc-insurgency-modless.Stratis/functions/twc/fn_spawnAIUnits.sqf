/*
* Created by [TWC] jayman Using code form [TWC] WiredTiger
*
* Pre-Compiled as twc_spawnAIUnits
*
* Description:
* twc_townSetup passes along the marker waves and spawnAI Info which has some additions for morale then spawns the untis
*
* ARGUMENTS:
* 0: POS <ARRAY> -- [0,0,0]
* 1: SPAWNAiINFO <ARRAY> -- [NUMADDED,SPAWNRADIUS]
* 2: THISLIST <ARRAY> -- OF BLUFOR UNITS ACTIVATED BY FUNCTION CALLING TRIGGER
*/

//Recieved Parameters
params ["_pos","_spawnAiInfo","_thisList"];

//Takes morale and bonus units to decide amount of hostiles and breaks them into waves
_morale = -InsP_enemyMorale;
_total = floor (_morale * 3);
_total = _total + (_spawnAiInfo select 0);
_waves = floor (_total / 10);
_lastWave = (_total % 10);
_waveSize = if(_waves > 0)then{10}else{_lastWave};

//Begin spawning
_num = 0;
_waveNum = 0;
for "_i" from 0 to _waves do{
	_group = createGroup East;
	_dir = (_thisList select 0) getDir _pos;
	_dir1 = _dir - 30;
	_dir2 = _dir + 30;
	_spawnPos = [_pos,(_spawnAiInfo select 1),[_dir1,_dir2]] call SHK_pos;
	for "_i" from 1 to _waveSize do{
		_unit = _group createUnit [(townSpawn select _num), _spawnPos,[], 5,"NONE"];
		_unit addEventHandler ["Killed",{
			[(_this select 0)] call twc_fnc_deleteDead;
			if (side (_this select 1) == WEST) then{
				InsP_enemyMorale = InsP_enemyMorale + 0.06; publicVariable "InsP_enemyMorale";
			};
		}];
		_unit setVariable ["unitsHome",_pos,false];
		_num = _num + 1;
		sleep 0.2;
	};
	[_group, (_pos), 40] call CBA_fnc_taskAttack;
	sleep 3;
	_num = 0;
	_waveNum = _waveNum + 1;
	_waveSize = if(_waveNum == _waves)then{_lastWave};
};

_rand = random 100;
if(_rand > 50)then{
	_group = createGroup East;
	_dir = (_thisList select 0) getDir _pos;
	_dir1 = _dir - 30;
	_dir2 = _dir + 30;
	_spawnPos = [_pos,(_spawnAiInfo select 1),[_dir1,_dir2]] call SHK_pos;
	_group = [_spawnPos, EAST, aaTeam] call BIS_fnc_spawnGroup;
	{
		_x addMagazine "Titan_AA";
		_x addWeapon "launch_O_Titan_F";
		
		_x addEventHandler ["Killed",{
		[(_this select 0)] call twc_fnc_deleteDead;
			if (side (_this select 1) == WEST) then{
				InsP_enemyMorale = InsP_enemyMorale + 0.12; publicVariable "InsP_enemyMorale";
			};
		}];
		_x setVariable ["unitsHome",_pos,false];
	}forEach units _group;
	[_group, (_pos), 40] call CBA_fnc_taskAttack;
};