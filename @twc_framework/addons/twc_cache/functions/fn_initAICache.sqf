params ["_unit"];

// check if we should execute on this unit
if (leader _unit != _unit) exitWith {};
if ({isPlayer _x} count Units (group _unit) != 0) exitWith {};

{
	_x triggerDynamicSimulation false;
} forEach (units _unit);

// check if a unit is in a vehicle that doesn't want to be cached. Then don't cache
if ((leader _unit != vehicle leader _unit) && (vehicle leader _unit getVariable ["twc_cacheDisabled", false])) exitWith {};

// if caching is disabled don't cache it
if !(_unit getVariable ["twc_cacheDisabled", false]) then {
	
	//with dynamic simulation the only edge case is defending units need to do that first
	if !(_unit getVariable ["twc_cacheDefending", false]) then {
		[_unit] spawn {
			params ["_unit"];
			
			_ready = 0;
			_timeMax = time + 60;
			_timeMin = time + 20;

			waitUntil {
				_ready = 1;

				{
					if !(unitReady _x) then {
						_ready = 0;
					};
				} forEach (units _unit);

				(_ready == 1 && _timeMin < time) || _timeMax < time;
			};
			
			_unit enableDynamicSimulation true;
		};
	} else {
		_unit enableDynamicSimulation true;
	};
};