params["_debug","_aicacheDistance","_vehicleCacheDistance"];
sleep 5;
[true,_aicacheDistance,_vehicleCacheDistance]spawn{
	_debug = _this select 0;
	_aicacheDistance = _this select 1;
	_vehicleCacheDistance = _this select 2;
	sleep 5;
	while{true}do{
		{
			if(isNil {_x getVariable "twc_cacheDisabled"})then{
				if(isNil {_x getVariable "twc_isCaching"})then{
					_x setVariable ["twc_isCaching",true];
					[_debug,_x,_aicacheDistance,_vehicleCacheDistance] spawn twc_fnc_aiCaching;
				};
			};
			sleep 1;
		}forEach allGroups;
	};
};

[true,_aicacheDistance,_vehicleCacheDistance]spawn{
	_debug = _this select 0;
	_aicacheDistance = _this select 1;
	_vehicleCacheDistance = _this select 2;
	sleep 5;
	while{true}do{
		{
			if(isNil {_x getVariable "twc_cacheDisabled"})then{
				if(isNil {_x getVariable "twc_isCaching"})then{
					_x setVariable ["twc_isCaching",true];
					[_debug,_x,_aicacheDistance,_vehicleCacheDistance] spawn twc_fnc_vehicleCaching;
				};
			};
			sleep 1;
		}forEach ([worldSize/2,worldSize/2] nearEntities [["LandVehicle","Air","Ship"],worldSize]);
	};
};