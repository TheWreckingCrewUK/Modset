params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_target", "_destination", "_simEvents"];

if !((_simEvents select 0) params ["_nextEventTime", "_nextEventCount", "_nextEventClassname", "_nextEventType"]) exitWith {
	systemChat "Error: No Event occured on Box Transfer Progress";
	false
};

if (!((_destination select 2) canAdd [_nextEventClassname, _nextEventCount])) exitwith { false };

// Wait till next tick, as we're guchi here
if (_nextEventTime > _elapsedTime) exitWith { true };
_result = false;

if (_nextEventType == "item") then {
	// double check the item still exists, another player/script might have yoinked it
	if (({_x == _nextEventClassname} count itemCargo _target) < _nextEventCount) exitWith { false };
	_succeeded = [_target, _nextEventClassname, _nextEventCount] call CBA_fnc_removeItemCargo;
	
	if (_succeeded) then {
		_result = [(_destination select 2), _nextEventClassname, _nextEventCount, true] call CBA_fnc_addItemCargo;
	};
} else {
	if (_nextEventType == "magazine") then {
		if (({_x == _nextEventClassname} count magazineCargo _target) < _nextEventCount) exitWith { false };
		_succeeded = [_target, _nextEventClassname, _nextEventCount] call CBA_fnc_removeMagazineCargo;
		
		if (_succeeded) then {
			_result = [(_destination select 2), _nextEventClassname, _nextEventCount, true] call CBA_fnc_addMagazineCargo;
		};
	} else {
		if (_nextEventType == "weapon") then {
			if (({_x == _nextEventClassname} count weaponCargo _target) < _nextEventCount) exitWith { false };
			_succeeded = [_target, _nextEventClassname, _nextEventCount] call CBA_fnc_removeWeaponCargo;
			
			if (_succeeded) then {
				_result = [(_destination select 2), _nextEventClassname, _nextEventCount, true] call CBA_fnc_addWeaponCargo;
			};
		} else {
			if (_nextEventType == "backpack") then {
				if (({_x == _nextEventClassname} count backpackCargo _target) < _nextEventCount) exitWith { false };
				_succeeded = [_target, _nextEventClassname, _nextEventCount] call CBA_fnc_removeBackpackCargo;
				
				if (_succeeded) then {
					_result = [(_destination select 2), _nextEventClassname, _nextEventCount, true] call CBA_fnc_addBackpackCargo;
				};
			} else {
				systemChat format ["Error: simulatedEvent unhandled, classname: %1 eventType: %2", _nextEventClassname, _nextEventType];
			};
		};
	};
};

if !(_result) exitWith { false };

// fofo pop
_simEvents deleteAt 0;
true