params ["_tank"];

if (!isServer) exitWith {};

{
	_x allowFleeing 0;
	_x unlinkItem "ItemRadio";
} (crew _tank);