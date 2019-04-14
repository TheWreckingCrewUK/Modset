params ["_logic"];

if !(local _logic) exitWith {};

private _mouseOver = missionNamespace getVariable ["bis_fnc_curatorObjectPlaced_mouseOver", [""]];

if ((_mouseOver select 0) != "OBJECT") then {
	["Don't be shit."] call ace_zeus_fnc_showMessage;
} else {
	private _unit = (_mouseOver select 1);

	if (_unit isKindOf "Man" || {!(_unit isKindOf "Building")}) then {
		["Don't be shit. That's no building."] call ace_zeus_fnc_showMessage;
	} else {
		if !(alive _unit) then {
			["Don't be shit. That building is destroyed."] call ace_zeus_fnc_showMessage;
		} else {
			if (!(_unit getVariable ["TWC_Medical_isFieldTent", false])) then {
				_unit setVariable ["TWC_Medical_isFieldTent", true, true];
				_unit setVariable ["ace_medical_isMedicalFacility", true, true];
			};
		};
	};
};

deleteVehicle _logic;