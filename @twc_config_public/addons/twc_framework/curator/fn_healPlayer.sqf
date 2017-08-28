/*
* Author: [TWC] jayman
* Zeus Function for module to full heal player
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
	hint "Please click on a unit";
}else{
	_unit = effectiveCommander (_mouseOver select 1);
	if !(_unit isKindOf "CAManBase") then{
		hint "Unit has to be human";
	}else{
		[_unit,_unit] call ace_medical_fnc_treatmentAdvanced_fullHeal
	};
};

deleteVehicle _logic;