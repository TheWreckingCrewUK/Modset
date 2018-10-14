params ["_unit"];
if (hasInterface) exitWith {}; // players are done locally

_keepMap = _unit getVariable ["twc_keepMap", false];

if (!_keepMap && !isPlayer _unit) then {
	_unit unassignItem "itemMap";
	_unit removeItem "itemMap";
};