/*
	File: fn_assignZeus.sqf
	Author: Dom
	Description: Sets up a player as zeus
*/
params [
	["_unit",objNull,[objNull]]
];

private _uid = getPlayerUID _unit;
private _zeusVariable = format ["zeus_%1",_uid];
private _zeus = missionNamespace getVariable [_zeusVariable,objNull];

if (isNull _zeus) then {
	private _group = createGroup [sideLogic,true];
	_zeus = _group createUnit ["ModuleCurator_F",[0,0,0],[],0,"NONE"];
	missionNamespace setVariable [_zeusVariable,_zeus];

	_zeus setVariable ["owner",_uid,true];
	_zeus setVariable ["Addons",3,true];
	_zeus setVariable ["BIS_fnc_initModules_disableAutoActivation",false];

	private _missionObjects = entities "AllVehicles";
	_zeus addCuratorEditableObjects [_missionObjects,true];

	_unit assignCurator _zeus;

	if !(AW_isZenEnabled) then {
		_zeus addEventHandler ["Local",{_this call AW_fnc_zeusLocalityChanged}];
	};
};