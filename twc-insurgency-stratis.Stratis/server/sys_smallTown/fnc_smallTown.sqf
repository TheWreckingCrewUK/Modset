/*
* Details
*
* Gives a 75% chance of spawning a squad around the marker and set them to cba defend.
*
* example ["Gospandi"] call twc_smallTown;
*/

params["_marker"];
_random = random 100;
if (_random < 75) then {
	if (isServer) then {
		_groupSpawn = [getMarkerPos _marker, East, smallTownSquad,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn] call CBA_fnc_TaskDefend;
		{
			_x addMPEventHandler ["MPKilled",{
				if (side (_this select 1) == WEST) then{
					InsP_enemyMorale = InsP_enemyMorale + 0.1; publicVariable "InsP_enemyMorale";
				};
			}];
		}forEach units _groupSpawn;
	};
};