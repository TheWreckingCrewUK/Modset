//code only runs on AI Units
if (hasInterface) exitWith {};
params["_unit"];

//code that makes stationary units stationary again
_unit addEventHandler ["Local", {
	params ["_entity", "_isLocal"];
	
	_group = group _entity;
	
	if(!isNil {_group getVariable "twc_cacheStationary"})then{
		_entity forceSpeed 0;
		_entity disableAI "PATH";
	};
	
	if(!isNil {_group getVariable "twc_cacheDefending"})then{
		_array = _group getVariable "twc_cacheDefending";
		_array params ["_unit","_pos","_radius","_size","_patrol","_hold"];
		
		//We have two options here. We either disable headless client on defend or have them re-defend when transfered. Attempting this solution
		_groupOwner = (groupOwner (group _unit));
		[_unit,_pos,_radius,_size,_patrol,_hold] remoteExecCall ["CBA_fnc_taskDefend",_groupOwner];
	};
}];