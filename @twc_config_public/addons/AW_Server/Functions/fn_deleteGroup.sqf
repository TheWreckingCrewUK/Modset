/*
	File: fn_deleteGroup.sqf
	Author: Dom
	Description: Deletes a group (and its vehicle if needed)
*/
params [
	["_group",grpNull,[grpNull]]
];
if (isNull _group) exitWith {};

private _vehicle = objNull;
{
	if (alive _x && {!captive _x}) then {
		_vehicle = objectParent _x;
		if (isNull _vehicle) then {
			deleteVehicle _x;
		} else {
			_vehicle deleteVehicleCrew _x;
		};
	};
} forEach units _group;
if !(isNull _vehicle) then {
	deleteVehicle _vehicle;
};