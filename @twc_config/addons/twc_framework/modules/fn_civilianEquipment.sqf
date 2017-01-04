params ["_enabled"];

if !(_enabled) exitWith {};

{
	if (side _x == Civilian) then {
		removeGoggles _x;
		removebackpack _x;
	};
} foreach allunits;
