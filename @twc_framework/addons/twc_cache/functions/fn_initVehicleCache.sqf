params ["_vehicle"];

_vehicle triggerDynamicSimulation false;

/* originally this was wrapped in a 1s spawn/sleep, so uncomment this wrapper if it's found to be necessary
[{
	params ["_vehicle"];*/
	
	//Don't cache if caching is disabled
	if !(_vehicle getVariable ["twc_cacheDisabled", false]) then {
		_vehicle enableDynamicSimulation true;
	};
/*
}, [_vehicle], 1] call CBA_fnc_waitAndExecute;
*/