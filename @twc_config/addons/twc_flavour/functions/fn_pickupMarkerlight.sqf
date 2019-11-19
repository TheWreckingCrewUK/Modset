params ["_unit", "_markerlight"];

if (stance _unit == "STAND") then {
	[_unit, "AmovPercMstpSrasWrflDnon_diary"] call ace_common_fnc_doAnimation;
};

[{
	params ["_unit", "_markerlight"];

	if (isNull _markerlight) exitWith {};

	deleteVehicle _markerlight;

	[_unit, "TWC_Markerlight"] call ace_common_fnc_addToInventory;
}, [_unit, _markerlight], 1] call CBA_fnc_waitAndExecute;