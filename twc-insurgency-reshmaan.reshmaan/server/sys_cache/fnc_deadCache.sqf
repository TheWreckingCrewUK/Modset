_deadCache = _this select 0;
_killer = _this select 1;
_intelPos = (getPosATL _deadCache);
_killerPos = (GetPosATL _killer);

[]spawn{sleep 60;{deleteVehicle _x}forEach allDead};

InsP_ammoCaches = InsP_ammoCaches + 1;
publicVariable "InsP_ammoCaches";

InsP_enemyMorale = InsP_enemyMorale - .25;
publicVariable "InsP_enemyMorale";

InsP_civTrust = InsP_civTrust + .25;
publicVariable "InsP_civTrust";

InsP_cacheGroup = InsP_cacheGroup - [_deadCache];
publicVariable "InsP_cacheGroup";

_marker = createMarker [format ["%1", _deadCache], _intelPos];
_marker setMarkerType "mil_triangle";
_marker setMarkerColor "ColorOrange";
_marker setMarkerText ("Cache Destroyed");
_marker setMarkerSize [0.75, 0.75];
[_marker, true] call CBA_fnc_setMarkerPersistent;

[_killer] call InsP_fnc_counterAttack;

{_x addScore 75;} forEach allUnits; // Add MP Score for everyone on the server

if(InsP_ammoCaches == 3) then {
	["Well done, all caches destroyed. Stick around to vote for the next mission.", "hint", True, True] call BIS_fnc_MP;
	[] spawn {sleep 15; ["end1", false, 0] call BIS_fnc_endMission};
};
