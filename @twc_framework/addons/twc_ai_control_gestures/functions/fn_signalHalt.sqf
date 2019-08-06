params ["_unit"];

if (!local _unit) exitWith {};

_lastTime = _unit getVariable ["TWC_AI_Control_Gestures_Halt_lastTime", 0];
if ((time - _lastTime) < 2) exitWith {};

_unit setVariable ["TWC_AI_Control_Gestures_Halt_lastTime", time];

// animation
[_unit, "gestureFreeze"] call ace_common_fnc_doGesture;

_nearestUnits = _unit nearEntities [["Man", "Car", "Motorcycle"], 40];
_temp = [];

{
	if !((group _x) in _temp) then {
		if (alive _x && side _x == civilian) then {
			if (vehicle _x == _x) then {
				["TWC_AI_Control_Gestures_doHalt", [(group _x)], (leader group _x)] call CBA_fnc_targetEvent;
			} else {
				if ({alive _x} count crew (vehicle _x) > 0) then {
					["TWC_AI_Control_Gestures_doHalt", [(group _x)], (leader group _x)] call CBA_fnc_targetEvent;
				};
			};
		
			_temp pushBack (group _x);
		};
	};
} forEach _nearestUnits;