params ["_enabled"];

if(!isServer)exitWith{};

if !(_enabled) exitWith {};

missionNameSpace setVariable ["twc_disconnectGear",[],true];
addMissionEventHandler ["HandleDisconnect",{
	_add = (getUnitLoadout (_this select 0));
	_add pushBack (_this select 2);
	_gear = _gear + [_add];	
	missionNameSpace setVariable ["twc_disconnectGear",_gear,true];
}];