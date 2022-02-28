#include "\z\ace\addons\main\script_macros.hpp"
#include "\z\ace\addons\medical_engine\script_macros_medical.hpp"

/*
* Author: [TWC] jayman
* Zeus Function for module to hint full medical info
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
		hint parseText format [
			"<t align='center'><t size='1.2' shadow='1' shadowColor='#000000' color='#ff0000'>Medical Status: <br/> %1</t><br/><br/><t shadow='1' shadowColor='#000000'>Blood Volume</t>: %2 \100<br/><t shadow='1' shadowColor='#000000'>Pain: %3</t><br/><t shadow='1' shadowColor='#000000'>Heart Rate: %4</t><br/><t shadow='1' shadowColor='#000000'>Blood Pressure: %5<br/><t shadow='1' shadowColor='#000000'>Cardiac Arrest?: %6</t><br/><t shadow='1' shadowColor='#000000'>Is Bleeding?: %7</t><br/><br/>",
			(name _unit),
			(_unit getVariable VAR_BLOOD_VOL),
			(_unit getVariable VAR_PAIN),
			(_unit getVariable VAR_HEART_RATE),
			(_unit getVariable VAR_BLOOD_PRESS),
			(_unit getVariable VAR_CRDC_ARRST),
			(_unit getVariable VAR_WOUND_BLEEDING)
			
		];
	};
};

deleteVehicle _logic;