if (isDedicated || !hasInterface) exitWith {};

// Wait until mission module has been initalized.
["twc_framework_initComplete", {
	_operationEra = missionNameSpace getVariable ["era", "modern"];
	_isNightOp = missionNameSpace getVariable ["nightGear", false];
	_isDisabled = missionNameSpace getVariable ["TWC_Intro_isDisabled", false];

	if (_isDisabled || (serverTime > 60)) exitWith {
		[_operationEra, _isNightOp] call TWC_Incorporeal_fnc_startLegacyIntro;
	};

	_introData = [] call TWC_Incorporeal_fnc_getIntroData;
	[_operationEra, _isNightOp, _introData] call TWC_Incorporeal_fnc_startIntro;
}] call CBA_fnc_addEventHandler;

["ace_killed", {
	params ["_unit"];
	private ["_drowned", "_morpOD", "_epiOD", "_CA"];
	
	if (player != _unit) exitWith {}; // ignore

	_deathReason = "clinical_death";

	_unitEpi = _target getVariable ["ace_medical_epinephrine_insystem", 0];
	_unitMorph = _target getVariable ["ace_medical_morphine_insystem", 0];

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
}] call CBA_fnc_addEventHandler;