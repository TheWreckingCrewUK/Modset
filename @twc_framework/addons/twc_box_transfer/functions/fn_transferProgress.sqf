params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_target", "_destination", "_simEvents"];


_nextevent = 0;
_ntimer = 99999;
{
	if ((_x select 0) < _ntimer) then {
		_nextevent = (_simEvents find _x);
		_ntimer = (_x select 0);
	};
} foreach _simEvents;

if !((_simEvents select _nextevent) params ["_nextEventTime", "_nextEventCount", "_nextEventtotalCount", "_nextEventClassname", "_nextEventType"]) exitWith {
	//systemChat "Error: No Event occured on Box Transfer Progress";
	false
};
if (!((_destination select 2) canAdd [_nextEventClassname, 1])) exitwith { 
//systemchat "full?";
false };

// Wait till next tick, as we're guchi here
if ((((_nextEventTime / _nextEventtotalCount)) * (_nextEventtotalCount - _nextEventCount + 1)) > _elapsedTime) exitWith {
//systemchat ("Done: " + str [(((_nextEventTime / _nextEventtotalCount)) * (_nextEventtotalCount - _nextEventCount + 1)), _elapsedTime]);
 true };

//systemChat str [_nextEventClassname,_nextEventCount, (((_nextEventTime / _nextEventtotalCount)) * (_nextEventtotalCount - _nextEventCount + 1))];
//systemChat str _simEvents;
_result = false;

if (_nextEventType == "item") then {
	// double check the item still exists, another player/script might have yoinked it
	if (({_x == _nextEventClassname} count itemCargo _target) < 1) then { _result = false };
	_succeeded = [_target, _nextEventClassname, 1] call CBA_fnc_removeItemCargo;
	
	if (_succeeded) then {
		_result = [(_destination select 2), _nextEventClassname, 1, true] call CBA_fnc_addItemCargo;
	};
} else {
	if (_nextEventType == "magazine") then {
		if (({_x == _nextEventClassname} count magazineCargo _target) < 1) then { _result = false };
		_succeeded = [_target, _nextEventClassname, 1] call CBA_fnc_removeMagazineCargo;
		
		if (_succeeded) then {
			_result = [(_destination select 2), _nextEventClassname, 1, true] call CBA_fnc_addMagazineCargo;
		};
	} else {
		if (_nextEventType == "weapon") then {
			if (({_x == _nextEventClassname} count weaponCargo _target) < 1) then { _result = false; };
			_succeeded = [_target, _nextEventClassname, 1] call CBA_fnc_removeWeaponCargo;
			
			if (_succeeded) then {
				_result = [(_destination select 2), _nextEventClassname, 1, true] call CBA_fnc_addWeaponCargo;
			};
		} else {
			if (_nextEventType == "backpack") then {
				if (({_x == _nextEventClassname} count backpackCargo _target) < 1) then { _result = false };
				_succeeded = [_target, _nextEventClassname, 1] call CBA_fnc_removeBackpackCargo;
				
				if (_succeeded) then {
					_result = [(_destination select 2), _nextEventClassname, 1, true] call CBA_fnc_addBackpackCargo;
				};
			} else {
				//systemChat format ["Error: simulatedEvent unhandled, classname: %1 eventType: %2", _nextEventClassname, _nextEventType];
			};
		};
	};
};

/*
if !(_result) exitWith {
_simEvents deleteAt 0;
// false 
systemchat "line 69";
true
};
*/
// fofo pop

//_nextEventTime = _nextEventTime + _nextEventTime;
_nextEventCount = _nextEventCount - 1;
_eventupdate = [_nextEventTime, _nextEventCount, _nextEventtotalCount, _nextEventClassname, _nextEventType];

if (_nextEventCount > 0) then {
	_simEvents pushback _eventupdate;
};
_simEvents deleteAt _nextevent;

true