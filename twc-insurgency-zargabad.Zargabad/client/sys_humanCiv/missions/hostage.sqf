_marker = townMarkerArray call BIS_fnc_selectRandom;
_house = nearestObjects [getMarkerPos _marker, ["house"],500];
_house = _house call BIS_fnc_selectRandom;
_unit = [getPos _house, civilian, ["C_man_hunter_1_F"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
_unit = leader _unit;
_markerstr = createMarker [str random 10000,position _unit];
_markerstr setMarkerShape "ICON";
_markerstr setMarkerType "hd_unknown";
_markerstr setMarkerText "Captured Father";
[_unit, _unit] call ACE_captives_fnc_doApplyHandcuffs;
if (isServer) then {
	_groupSpawn = [getMarkerPos _markerstr, East, townSpawn,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
	[_groupSpawn] call CBA_fnc_TaskDefend;
	{
		_x addMPEventHandler ["MPKilled",{
			if (side (_this select 1) == WEST) then{
				InsP_enemyMorale = InsP_enemyMorale + 0.1; publicVariable "InsP_enemyMorale";
			};
		}];
	}forEach units _groupSpawn;
};

QuestionHostageAction = ["QuestionPerson","Question Person","",{call InsP_fnc_questionHostage},{alive (_this select 0)}] call ace_interact_menu_fnc_createAction;
["C_man_hunter_1_F", 0, ["ACE_MainActions"], QuestionHostageAction] call ace_interact_menu_fnc_addActionToClass;