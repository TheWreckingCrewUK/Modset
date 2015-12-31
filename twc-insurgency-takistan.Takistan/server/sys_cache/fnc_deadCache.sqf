_deadCache = _this select 0;
_intelPos = (getPosATL _deadCache);

hint "Cache Destroyed";

InsP_ammoCaches = InsP_ammoCaches + 1;
publicVariable "InsP_ammoCaches";

InsP_enemyMorale = InsP_enemyMorale + .5;
publicVariable "InsP_enemyMorale";

InsP_cacheGroup = InsP_cacheGroup - [_deadCache];
publicVariable "InsP_cacheGroup";

_marker = createMarker [format ["%1", _deadCache], _intelPos];
_marker setMarkerType "mil_triangle";
_marker setMarkerColor "ColorOrange";
_marker setMarkerText ("Cache Destroyed");
_marker setMarkerSize [0.75, 0.75];
[_marker, true] call CBA_fnc_setMarkerPersistent;