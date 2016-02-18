
//if (!isDedicated) exitWith {};

_group = createGroup civilian;
_civilianType = "LOP_Tak_Civ_Man_01";
_markerPlcacement = _this select 0;
_placementRadius = _this select 1;

for "_i" from 1 to 2 do {
	_individualCiv = _group createUnit [_civilianType, (getMarkerPos _markerPlcacement), [], _placementRadius, "NONE"];
	_civHeading = (random 360);
	_individualCiv setFormDir _civHeading;
	_individualCiv setDir _civHeading;
	_westKilled = _individualCiv addMPEventHandler ["MPKilled", {[_this select 0, _this select 1, _intelCache] call InsP_fnc_civKill;}];
	_individualCiv disableAI "MOVE";
};