/** Unit died, and we have no way of directly being informed. So we best guess the situation. Guestimate at best. **/
params ["_unit"];

_unitEpi = _unit getVariable ["ace_medical_epinephrine_insystem", 0];
_unitMorph = _unit getVariable ["ace_medical_morphine_insystem", 0];

_CA = _unit getVariable ["ace_medical_inCardiacArrest", false];
if (_CA) then { _deathReason = "cardiac_arrest"; };

if (_unitEpi > 0) then {
	_epiLimit = [
		(configFile >> "ACE_Medical_Advanced" >> "Treatment" >> "Medication" >> "Epinephrine"),
		"maxDose",
		3
	] call BIS_fnc_returnConfigEntry;

	if (_unitEpi >= _epiLimit) then { _deathReason = "overdose_epinephrine"; };
};

if (_unitMorph > 0) then {
	_morpLimit = [
		(configFile >> "ACE_Medical_Advanced" >> "Treatment" >> "Medication" >> "Morphine"),
		"maxDose",
		2
	] call BIS_fnc_returnConfigEntry;

	if (_unitMorph >= _morpLimit) then { _deathReason = "overdose_morphine"; };
};

_drowned = _unit getVariable ["TWC_isDrowning", false];
if (_drowned) then { _deathReason = "drowned"; };

["TWC_Unit_Perished", [_unit, _deathReason]] call CBA_fnc_globalEvent;