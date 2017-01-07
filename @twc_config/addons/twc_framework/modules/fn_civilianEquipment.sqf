params ["_enabled"];

if(!isServer)exitWith{};

if !(_enabled) exitWith {};

{
	if (side _x == Civilian) then {
		removeGoggles _x;
		removebackpack _x;
	};
} foreach allunits;
