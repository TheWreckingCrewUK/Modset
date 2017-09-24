params["_group"];
if(!(isNil {_group getVariable "twc_cacheDefending"}))then{
	_ready = 0;
	_timeMax = time + 60;
	_timeMin = time + 20;
	waitUntil{
		_ready = 1;
		{
			if(!(unitReady _x))then{
				_ready = 0;
			};			
		}forEach (units _group);
		(_ready == 1 && _timeMin < time) || _timeMax < time;
	};
	{
		_x disableAI "path";
		_x enableSimulationGlobal false;
		_x hideObjectGlobal true;
	}forEach (units _group);
}else{
	{
		if(leader _x != _x || str (assignedVehicleRole _x) != ["Driver"])then{
			_x enableSimulationGlobal false;
			_x hideObjectGlobal true;
		};
	}forEach units _group;
};