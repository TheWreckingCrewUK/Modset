if (isDedicated || !hasInterface) exitWith {};

// Don't run on public.
_isEnabled = missionNameSpace getVariable ["TWC_enablePublicCPRChance", false];
if (_isEnabled) exitWith {};

TWC_Death_AlreadyExecuted = false;

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
}] call CBA_fnc_addEventHandler;

/** We cut on the killed event, so we have minimal chance of the spectate UI showing **/
player addEventHandler ["Killed", {
	params ["_unit"];
	
	// safety check!
	if (_unit != player) exitWith {};
	
	554 cutText ["", "BLACK", 0.01, true];
	["TWC_Dead", 0, true] call ace_common_fnc_setHearingCapability;
}];

["TWC_Unit_Perished", {
	params ["_unit", ["_reason", "clinical_death"]];

	if (player != _unit) exitWith {};

	// hacky as fuck
	if (!TWC_Death_AlreadyExecuted) then { TWC_Death_AlreadyExecuted = true; };

	_deathData = [_unit, _reason] call TWC_Incorporeal_fnc_getDeathData;
	_deathScreenData = (_deathData select 5);
	_duration = ((_deathScreenData select 2) - (_deathScreenData select 1)) / 0.01;

	playSound [(_deathScreenData select 0), true];

	_deathString = format [
		"<t color='#FF0000' size='3'>%1 %2</t><br/><t color='#FFFFFF' size='2'>Perished during %3 at T+%4</t><br/><br/><br/><br/>If you believe you died unfairly, disconnect immediately and inform management.",
		(_deathData select 0),
		(_deathData select 3),
		"Operation TEST",
		(_deathData select 4)
	];

	555 cutText [_deathString, "PLAIN", 3, true, true];

	[{
		params [["_duration", 5]];

		554 cutFadeOut _duration;
		555 cutFadeOut 3;
		(_duration / 100) fadeSpeech 0;
		
		[{
			// TODO audio smoothing somehow.
			["TWC_Dead", 0, false] call ace_common_fnc_setHearingCapability;
		}, [], (_duration / 100)] call CBA_fnc_waitAndExecute;
	}, [_duration], (_deathScreenData select 1)] call CBA_fnc_waitAndExecute;

	["TWC_addPerishedToServer", [_unit, _reason]] call CBA_fnc_serverEvent;
}] call CBA_fnc_addEventHandler;