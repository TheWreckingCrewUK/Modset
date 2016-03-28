/*
* Details
*
* Gives a 75% chance of spawning a squad around the marker and set them to cba defend.
*
* example ["Gospandi"] call twc_smallTown;
*/

params["_marker", "_civnum", "_civradius"];
_random = random 100;
if (_random < 75) then {
	if (isServer) then {
		_groupSpawn = [getMarkerPos _marker, East, smallTownSquad,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn] call CBA_fnc_TaskDefend;
		{
			_x addMPEventHandler ["MPKilled",{
				if (side (_this select 1) == WEST) then{
					InsP_enemyMorale = InsP_enemyMorale + 0.03; publicVariable "InsP_enemyMorale";
				};
			}];
		}forEach units _groupSpawn;
	};
};

_group = createGroup civilian;
params["_marker", "_civnum", "_civradius"];

for "_i" from 1 to _civnum do {

		_individualCiv = _group createUnit [civilianType, (getMarkerPos _marker), [], _civradius, "NONE"];
		_civHeading = (random 360);
		_individualCiv setFormDir _civHeading;
		_individualCiv setDir _civHeading;
		_westKilled = _individualCiv addMPEventHandler ["MPKilled", {[_this select 0, _this select 1, _intelCache] call InsP_fnc_civKill;}];
		_individualCiv disableAI "AUTOCOMBAT";
		_individualCiv allowFleeing 0;
		_individualCiv forceSpeed 1;
		[_individualCiv] call CBA_fnc_TaskDefend;
		_clothes = 
		[
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_redwhite",
			"U_C_Commoner1_1",
			"U_C_Commoner1_2",
			"U_C_Commoner1_3",
			"U_Rangemaster",
			"U_NikosBody"
		] call BIS_fnc_selectRandom;
		_individualCiv forceadduniform _clothes;
		
};