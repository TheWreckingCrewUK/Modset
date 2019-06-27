params ["_trigger"];

_civList = _trigger getVariable "TWC_AmbientCiv";
{
	_group = group _x;
	deleteVehicle _x;
	deleteGroup _group;
} forEach _civList;