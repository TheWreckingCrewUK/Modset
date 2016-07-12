/*
* Created by [TWC] Jayman
*
* spawned a set number of AA teams based on definition in server\defines.sqf
*/

for "_i" from 1 to AATeams do {
	_pos = [getMarkerPos "vehicleWatter",[0,3500],[0,360],0] call SHK_pos;
	_groupSpawned = [_pos, East, AATeam] call BIS_fnc_spawnGroup;
    [_groupSpawned, (_groupSpawned), 300, 5, "MOVE","SAFE","GREEN","LIMITED", "COLUMN","",[3,6,9]] call CBA_fnc_taskPatrol;	
	_leader = leader _groupSpawned; 
	_leader addMPEventHandler ["MPKilled",{
		if (side (_this select 1) == WEST) then{
			InsP_enemyMorale = InsP_enemyMorale + 0.1; publicVariable "InsP_enemyMorale";
			InsP_civTrust = InsP_civTrust + 0.1; publicVariable "InsP_civTrust";
			InsP_aatDestroyed = InsP_aatDestroyed + 1; publicVariable "InsP_aatDestroyed";
			_marker = createMarker [str random 10000, _this select 0];
			_marker setMarkerType "mil_triangle";
			_marker setMarkerColor "ColorBlue";
			_marker setMarkerText ("AA Team Destroyed");
			_marker setMarkerSize [0.6, 0.6];
			[_marker, true] call CBA_fnc_setMarkerPersistent;
		};
	}];
};