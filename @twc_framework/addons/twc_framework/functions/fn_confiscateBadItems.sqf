params ["_unit"];
if (hasInterface) exitWith {};
if (!local _unit) exitWith {};
if (isPlayer _unit) exitWith {}; // players are done locally

_keepMap = _unit getVariable ["twc_keepMap", false];

if (!_keepMap) then {
	_unit unassignItem "itemMap";
	_unit removeItem "itemMap";
};

_unit unassignItem "ItemGPS";
_unit removeItem "ItemGPS";