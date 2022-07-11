params ["_logic","_units","_activated"];

if !(_activated && local _logic) exitWith {};

_mouseOver = missionnamespace getvariable ["bis_fnc_curatorObjectPlaced_mouseOver", [""]];

if((_mouseOver select 0) != "OBJECT") then{
	hint "Please place on a unit!";
}else{
	_unit = effectiveCommander (_mouseOver select 1);
	if !(_unit isKindOf "CAManBase") then {
		hint "Needs to be a unit!";
	}else{
		["TWC_Medical_Core_ResusUnit", _unit, _unit] call CBA_fnc_targetEvent;
	};
};

deleteVehicle _logic;