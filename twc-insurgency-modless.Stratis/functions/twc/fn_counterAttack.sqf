params["_killer"];

_random = random 100;
if (_random < 25) exitWith {};

if(_random < 50) then{
	_pos = [getPos _killer, [300,400],[0,360],0,[2,200]] call shk_pos;
	_groupSpawned =  [_pos, East, enemyTechnical] call BIS_fnc_spawnGroup;
	[_groupSpawned, (_killer), 0] call CBA_fnc_taskAttack;
	{
		_x addMPEventHandler ["MPKilled",{
			if (side (_this select 1) == WEST) then{
				InsP_enemyMorale = InsP_enemyMorale + 0.5; publicVariable "InsP_enemyMorale";
			};
		}];
	}forEach units _groupSpawn;
};

if(_random > 50) then{
	_pos = [getPos _killer,[400,500]] call SHK_pos;
	_groupSpawned = [_pos, East, townSquadWave] call BIS_fnc_spawnGroup;
    [_groupSpawned, (_killer), 0] call CBA_fnc_taskAttack;	
	{
		_x addMPEventHandler ["MPKilled",{
			if (side (_this select 1) == WEST) then{
				InsP_enemyMorale = InsP_enemyMorale + 0.1; publicVariable "InsP_enemyMorale";
			};
		}];
	}forEach units _groupSpawn;
};