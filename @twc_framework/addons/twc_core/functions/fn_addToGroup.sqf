params ["_caller", "_target"];

[_target] joinSilent _caller;

[_caller, "gesturePoint"] call ace_common_fnc_doGesture;

["TWC_AddedToGroup", [_caller, _target], [_target]] call CBA_fnc_targetEvent;