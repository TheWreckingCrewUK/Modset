params["_group",["_zues",false]];
if(!(isNil {_group getVariable "twc_cacheDefending"}))then{
	{
		_x enableSimulationGlobal true;
		_x hideObjectGlobal false;
	}forEach units _group;
}else{
	{
		if(leader _x != _x)then{
			_x enableSimulationGlobal true;
			_x hideObjectGlobal false;
			if(_zues)then{
				_x setPos (formationPosition _x);
			};
			_x allowDamage false;
			[_x]spawn {sleep 3;(_this select 0) allowDamage true;};
		}else{
			_x enableSimulationGlobal true;
			_x hideObjectGlobal false;
		};
	}forEach (units _group);
};