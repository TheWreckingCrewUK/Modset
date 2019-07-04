params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_target", "_destination", "_simEvents"];

if !((_simEvents select 0) params ["_nextEventTime", "_nextEventCount", "_nextEventClassname", "_nextEventType"]) exitWith {
	systemChat "Error: No Event occured on Box Transfer Progress";
	false
};

// Wait till next tick, as we're guchi here
if (_nextEventTime > _elapsedTime) exitWith { true };

if (_nextEventType == "item") then {
	// double check the item still exists, another player/script might have yoinked it
	if ({typeOf _x == _nextEventClassname} count itemCargo _target) < _nextEventCount) exitWith { false };
	_succeeded = [_target, _nextEventClassname, _nextEventCount] call CBA_fnc_removeItemCargo;
	
	if (_succeeded) then {
		_result = [_destination, _nextEventClassname, _nextEventCount, true] call CBA_fnc_addItemCargo;
		if !(_result) exitWith { false };
	};
} else {
	systemChat format ["Error: simulatedEvent unhandled, classname: %1 eventType: %2", _nextEventClassname, _nextEventType];
};

// fofo pop
_simEvents deleteAt 0;
true