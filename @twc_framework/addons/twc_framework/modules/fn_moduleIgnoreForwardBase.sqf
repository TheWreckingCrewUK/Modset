params ["_logic","_units","_activated"];

if !(_activated) exitWith {};

{
	_x setVariable ["twc_ignoreForwardBase",true,true]
}forEach _units;