params["_group"];
if(!(isNil {_group getVariable "twc_cacheDefending"}))exitWith{[_group] call twc_fnc_unCacheGroupDefend};
{
	if(leader _x != _x)then{
		_x enableSimulationGlobal true;
		_x hideObjectGlobal false;
		_x setPos (formationPosition _x);
		_x allowDamage false;
		[_x]spawn {sleep 3;(_this select 0) allowDamage true;};
	};
}forEach units _group;