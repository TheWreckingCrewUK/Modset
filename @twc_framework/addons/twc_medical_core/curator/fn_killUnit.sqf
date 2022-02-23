/*
* Author: [TWC] jayman
* Zeus Function for module to full Kill player
*
* Arguments:
* 0: LOGIC <OBJECT> 
* 1: Sync Units <ARRAY>
* 2: Activated <BOOL>
*
* Return Value:
* NONE
*
* Public: No
*/
params["_logic","_units","_activated"];

if !(_activated && local _logic) exitWith {};

_mouseOver = missionnamespace getvariable ["bis_fnc_curatorObjectPlaced_mouseOver", [""]];

if((_mouseOver select 0) != "OBJECT") then{
	hint "Please place on a unit!";
}else{
	_unit = effectiveCommander (_mouseOver select 1);
	if !(_unit isKindOf "CAManBase") then {
		hint "Needs to be a unit!";
	} else {
		[_unit] call TWC_Medical_Core_fnc_setDead;
	};
};

deleteVehicle _logic;