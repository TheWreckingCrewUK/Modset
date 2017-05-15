/*
* Author: [TWC] jayman
* Zeus Function for module to switch to spectator voice
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
	if !(isPlayer _unit) then{
		hint "Unit has to be a player";
	}else{
		if([_unit] call acre_api_fnc_isSpectator) then{
			[false] call acre_api_fnc_setSpectator;
		}else{
			[true] call acre_api_fnc_setSpectator;
		};
	};
};

deleteVehicle _logic;