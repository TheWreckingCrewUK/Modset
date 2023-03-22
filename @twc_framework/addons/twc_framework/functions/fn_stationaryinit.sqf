//code only runs on AI Units
if (hasInterface) exitWith {};
params["_unit"];

//code that makes stationary units stationary again when transfered to HC
_unit addEventHandler ["Local", {
	params ["_entity", "_isLocal"];
	
	_group = group _entity;
	
	if(!isNil {_group getVariable "twc_cacheStationary"})then{
		_entity forceSpeed 0;
		_entity disableAI "PATH";
	};
}];