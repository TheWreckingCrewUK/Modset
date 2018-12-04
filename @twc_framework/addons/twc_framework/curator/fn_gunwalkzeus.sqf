/*
 * Author: Bosenator
 * Module function to disable caching on synced objects.
 *
 * Arguments:
 * 0: The Module Logic <OBJECT>
 * 1: Synced Objects <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
 
params ["_logic", "_units", "_activated"];

if (!_activated || !isServer) exitWith {};


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
		[{
	params ["_unit"];
	
	
		if (((vehicle _unit) getvariable ["twc_haswalked", 0]) == 0) exitwith {
			
			(vehicle _unit) setvariable ["twc_haswalked", 1, true];
			if (((vehicle _unit) getvariable ["twc_isgwalking", 0]) == 0) then {
			
				(vehicle _unit) setvariable ["twc_isgwalking", 1, true];
				
				["Mortar System Activated"] call ace_zeus_fnc_showMessage;
				
				["twc_addcbagwalk", [_unit], (vehicle _unit)] call CBA_fnc_targetEvent;
				
			};
			
			
		};
		
		
		if (((vehicle _unit) getvariable ["twc_isgwalking", 0]) == 1) then {
			[_unit, 0] call twc_fnc_togglegunwalk;
			["Mortar System DEACTIVATED"] call ace_zeus_fnc_showMessage;
		};
		
		if (((vehicle _unit) getvariable ["twc_isgwalking", 0]) == 0) then {
			[_unit, 1] call twc_fnc_togglegunwalk;
			["Mortar System Activated"] call ace_zeus_fnc_showMessage;
		};
	
}, [_unit], 0.05] call CBA_fnc_waitAndExecute;
	};
};

deleteVehicle _logic;

