/*
* Details:
* 
* Creates a enemy squad to defend around a given marker
*
* Required parameters:
*
* 0 - String     Marker name
*
* Example:
*
*["bastam"] spawn twc_SpawnDefend
*
* Author: [TWC] Fakematty / [TWC] Jayman
*/

params["_pos"];
_random = random 100;
if (_random < 75) then {
	if (isServer) then {
		_buildings = nearestObjects[_pos,["house","buildings"],200];
		_spawnPos = _buildings call BIS_fnc_selectRandom;
		_spawnPos = getPos _spawnPos;
		_groupSpawn = [_spawnPos, East, townSpawn,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn, _spawnPos, 200, 3, False] call CBA_fnc_TaskDefend;
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

if (_random < 50) then {
	if (isServer) then {
		_buildings = nearestObjects[_pos,["house","buildings"],200];
		_spawnPos = _buildings call BIS_fnc_selectRandom;
		_spawnPos = getPos _spawnPos;
		_groupSpawn = [_spawnPos, East, townSpawn,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn, _spawnPos, 200, 3, False] call CBA_fnc_TaskDefend;
		{
			_x addMPEventHandler ["MPKilled",{
				if (side (_this select 1) == WEST) then{
					InsP_enemyMorale = InsP_enemyMorale + 0.06; publicVariable "InsP_enemyMorale";
				};
			}];
			_x addMagazines ["handGrenade",2];
		}forEach units _groupSpawn;
	};
	
};

