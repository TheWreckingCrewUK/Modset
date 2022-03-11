/*
	File: fn_createUnit.sqf
	Author: Dom
	Description: Creates a unit and returns the object, required due to needing to force change side for some units (opfor & indep)
*/
params [
	["_group",grpNull,[grpNull]],
	["_desiredSide",east,[west]],
	["_class","",[""]],
	["_position",[],[[],objNull]],
	["_radius",0,[0]],
	["_special","NONE",[""]]
];

private _configSide = [_class] call AW_fnc_getConfigSide;
if (_desiredSide isEqualTo _configSide) exitWith {
	_group createUnit [_class,_position,[],_radius,_special];
};

private _tempGroup = createGroup [civilian,true];
private _unit = _tempGroup createUnit [_class,_position,[],_radius,_special];

[_unit] joinSilent _group;
deleteGroup _tempGroup;

_unit;