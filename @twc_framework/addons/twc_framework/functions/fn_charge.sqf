params ["_unit", "_pos", "_banzai"];

if (!isServer) exitwith {};

if (typeName _pos == "STRING") then {_pos = getMarkerPos _pos};

_group = group _unit;
_allUnits = units _group;

{
	_x disableAI "AUTOCOMBAT";
	_x disableAI "TARGET";
	_x disableAI "AUTOTARGET";
	_x disableAI "SUPPRESSION";
	_x disableAI "COVER";
	_x setUnitPos "UP";
} forEach _allUnits;

_wp_1 = _group addWaypoint [_pos, 0];
_wp_1 setWaypointType "MOVE";
_wp_1 setWaypointFormation "LINE";
_wp_1 setWaypointStatements ["true", "{_x setUnitPos 'AUTO'; _x enableAI 'COVER'; _x enableAI 'SUPPRESSION'; _x enableAI 'AUTOTARGET'; _x enableAI 'TARGET'; _x enableAI 'AUTOCOMBAT';} forEach (units this); this setbehaviour 'AWARE';"];

_wp_2 = _group addWaypoint [_pos, 5];
_wp_2 setWaypointType "SAD";

[{_this call twc_fnc_banzaiSounds}, [_unit], 8] call CBA_fnc_waitAndExecute;