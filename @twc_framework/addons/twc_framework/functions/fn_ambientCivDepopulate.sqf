params ["_logic"];

_civList = _logic getVariable "TWC_AmbientCiv";
{
	_group = group _x;
	deleteVehicle _x;
	deleteGroup _group;
} forEach _civList;