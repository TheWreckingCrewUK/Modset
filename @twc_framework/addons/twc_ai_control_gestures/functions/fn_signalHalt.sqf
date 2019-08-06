params ["_unit"];

if (!local _unit) exitWith {};

// animation
[_unit, "gestureFreeze"] call ace_common_fnc_doGesture;
["TWC_AI_Control_Gestures_doHalt", [_unit], _unit] call CBA_fnc_targetEvent;