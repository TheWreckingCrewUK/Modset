params ["_unit"];

if (!local _unit) exitWith {};

_lastTime = _unit getVariable ["TWC_AI_Control_Gestures_Surrender_lastTime", 0];
if ((time - _lastTime) < 2) exitWith {};

_unit setVariable ["TWC_AI_Control_Gestures_Surrender_lastTime", time];

// animation
[_unit, "gestureCeaseFire"] call ace_common_fnc_doGesture;

_nearestUnits = _unit nearEntities [["Man"], 10];
_temp = [];

{
	if !((group _x) in _temp) then {
		if (alive _x && side _x == civilian && !(isPlayer _x)) then {
			if (vehicle _x == _x) then {
				["TWC_AI_Control_Gestures_doSurrender", [(group _x)], (leader group _x)] call CBA_fnc_targetEvent;
				_temp pushBack (group _x);
			};
		};
	};
} forEach _nearestUnits;