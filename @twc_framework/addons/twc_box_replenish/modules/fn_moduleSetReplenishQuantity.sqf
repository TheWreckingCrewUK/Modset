params ["_logic", "_units", "_activated"];

if !(_activated) exitWith {};

{
	// shouldn't need global execution, as the module will run on each client regardless (and then JIPs get updated values after init)
	_x setVariable ["TWC_Replenish_artillery", _logic getVariable ["artillery", -1]];
	_x setVariable ["TWC_Replenish_launcher", _logic getVariable ["launcher", -1]];
	_x setVariable ["TWC_Replenish_medical", _logic getVariable ["medical", -1]];
	_x setVariable ["TWC_Replenish_section", _logic getVariable ["section", -1]];
	_x setVariable ["TWC_Replenish_other", _logic getVariable ["other", -1]];
} forEach _units;

if (!isNull _logic) then {
	deleteVehicle _logic;
};