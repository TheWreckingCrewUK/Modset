params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_target", "_destination", "_simEvents"];

if !((_simEvents select 0) params ["_nextEventTime", "_nextEventCount", "_nextEventClassname", "_nextEventType"]) exitWith {
	systemChat "Error: No Event occured on Box Transfer Progress";
	false
};

// Wait till next tick, as we're guchi here
if (_nextEventTime > _elapsedTime) exitWith { true };

_result = false; // check if failed removing last item
_succeeded = false; // check if failed added item to new container (space usually)

if (_nextEventType == "item") then {
	// double check the item still exists, another player/script might have yoinked it
	if (({_x == _nextEventClassname} count itemCargo _target) < _nextEventCount) exitWith { false };
	_return = [(_destination select 2), _nextEventClassname, _nextEventCount, true] call TWC_Core_fnc_addItemCargo;
	_succeeded = (_return select 0);
	
	if (_succeeded) then {
		_result = [_target, _nextEventClassname, _nextEventCount] call CBA_fnc_removeItemCargo;
	} else {
		_result = [_target, _nextEventClassname, (_return select 1)] call CBA_fnc_removeItemCargo;
	};
} else {
	if (_nextEventType == "magazine") then {
		if (({_x == _nextEventClassname} count magazineCargo _target) < _nextEventCount) exitWith { false };
		_return = [(_destination select 2), _nextEventClassname, _nextEventCount, true] call TWC_Core_fnc_addMagazineCargo;
		_succeeded = (_return select 0);
		
		if (_succeeded) then {
			_result = [_target, _nextEventClassname, _nextEventCount] call CBA_fnc_removeMagazineCargo;
		} else {
			_result = [_target, _nextEventClassname, (_return select 1)] call CBA_fnc_removeMagazineCargo;
		};
	} else {
		if (_nextEventType == "weapon") then {
			if (({_x == _nextEventClassname} count weaponCargo _target) < _nextEventCount) exitWith { false };
			_return = [(_destination select 2), _nextEventClassname, _nextEventCount, true] call TWC_Core_fnc_addWeaponCargo;
			_succeeded = (_return select 0);
			
			if (_succeeded) then {
				_result = [_target, _nextEventClassname, _nextEventCount] call CBA_fnc_removeWeaponCargo;
			} else {
				_result = [_target, _nextEventClassname, (_return select 1)] call CBA_fnc_removeWeaponCargo;
			};
		} else {
			if (_nextEventType == "backpack") then {
				if (({_x == _nextEventClassname} count backpackCargo _target) < _nextEventCount) exitWith { false };
				_return = [(_destination select 2), _nextEventClassname, _nextEventCount, true] call TWC_Core_fnc_addBackpackCargo;
				_succeeded = (_return select 0);
				
				if (_succeeded) then {
					_result = [_target, _nextEventClassname, _nextEventCount] call CBA_fnc_removeBackpackCargo;
				} else {
					_result = [_target, _nextEventClassname, (_return select 1)] call CBA_fnc_removeBackpackCargo;
				};
			} else {
				systemChat format ["Error: simulatedEvent unhandled, classname: %1 eventType: %2", _nextEventClassname, _nextEventType];
			};
		};
	};
};

if !(_result && _succeeded) exitWith { false };

// fofo pop
_simEvents deleteAt 0;
true
