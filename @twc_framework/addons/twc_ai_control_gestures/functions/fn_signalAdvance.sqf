params ["_unit"];

if (!local _unit) exitWith {};

// animation
[_unit, selectRandom ['gestureGo','gestureGoB']] call ace_common_fnc_doGesture;
["TWC_AI_Control_Gestures_doAdvance", [_unit], _unit] call CBA_fnc_targetEvent;