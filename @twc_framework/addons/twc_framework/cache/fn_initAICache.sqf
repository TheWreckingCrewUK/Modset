params["_debug", "_group", "_aiRange"];

sleep 0.5;

//spawned in enemys always uncache others. need to stop that.
{
	_x triggerDynamicSimulation false;
}forEach (units _group);

//check if a unit is in a vehicle that doesn't want to be cached. Then don't cache
if(leader _group != vehicle leader _group && vehicle leader _group getVariable ["twc_cacheDisabled",false])exitWith{};

//If caching is disabled don't cache it
if (isNil {_group getVariable "twc_cacheDisabled"}) then {

	//with dynamic simulation the only edge case is defending units need to do that first.	
	if !(isNil {_group getVariable "twc_cacheDefending"}) then {
		[_group] spawn{
			params["_group"];
			
			_ready = 0;
			_timeMax = time + 60;
			_timeMin = time + 20;

			waitUntil {
				_ready = 1;

				{
					if !(unitReady _x) then {
						_ready = 0;
					};
				} forEach (units _group);

				(_ready == 1 && _timeMin < time) || _timeMax < time;
			};
		};
		_group enableDynamicSimulation true;
	}else{
		_group enableDynamicSimulation true;
	};
};