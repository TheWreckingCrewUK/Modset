params["_unit"];

if((getPos _unit) distance2D (getMarkerPos "crate") < 500)exitWith{};
_position = getPos _unit;
_pos = [_position, [100,150]] call SHK_pos;
_groupSpawned = [_pos, East, townSquadWave] call BIS_fnc_spawnGroup;
[_groupSpawned, (_position), 0] call CBA_fnc_taskAttack;	
{
	_x addMPEventHandler ["MPKilled",{
		if (side (_this select 1) == WEST) then{
			InsP_enemyMorale = InsP_enemyMorale + 0.1; publicVariable "InsP_enemyMorale";
		};
	}];
}forEach units _groupSpawn;