params ["_entity"];

if (isDedicated || !hasInterface) exitWith {};
if (!local _entity) exitWith {};

// Don't run on public.
_isEnabled = missionNameSpace getVariable ["TWC_enablePublicCPRChance", false];
if (_isEnabled) exitWith {};

TWC_Death_AlreadyExecuted = false;
TWC_Operation_Name = getMissionConfigValue ["onLoadName", getMissionConfigValue ["briefingName", "Untitled"]];
TWC_Operation_Creator = getMissionConfigValue ["author", "The Wrecking Crew"];

// Always block screen on spawn.
[{ getClientStateNumber > 9 }, { [] spawn { titleCut ["", "BLACK FADED", 999]; }; }] call CBA_fnc_waitUntilAndExecute;

// Wait until mission module has been initalized.
["twc_framework_initComplete", {
	_operationEra = missionNameSpace getVariable ["era", "modern"];
	_isNightOp = missionNameSpace getVariable ["nightGear", false];
	_isDisabled = missionNameSpace getVariable ["TWC_Intro_isDisabled", false];

	if (_isDisabled || (serverTime > 120)) exitWith {
		[TWC_Operation_Name, TWC_Operation_Creator, _operationEra, _isNightOp] call TWC_Incorporeal_fnc_startLegacyIntro;
	};

	_introData = [] call TWC_Incorporeal_fnc_getIntroData;
	[TWC_Operation_Name, TWC_Operation_Creator, _operationEra, _isNightOp, _introData] call TWC_Incorporeal_fnc_startIntro;
}] call CBA_fnc_addEventHandler;

["ace_killed", {
	params ["_unit"];
	private ["_drowned", "_morpOD", "_epiOD", "_CA"];
	
	if (player != _unit) exitWith {}; // ignore

	[{
		params ["_unit"];
		if (!TWC_Death_AlreadyExecuted) then {
			[_unit] call TWC_Incorporeal_fnc_bestGuessDeath;
		};
	}, [_unit]] call CBA_fnc_execNextFrame;
}] call CBA_fnc_addEventHandler;

/** We cut on the killed event, so we have minimal chance of the spectate UI showing **/
player addEventHandler ["Killed", {
	params ["_unit"];
	
	// safety check!
	if (player != _unit) exitWith {};
	if !(local _unit) exitWith {};
	
	554 cutText ["", "BLACK", 0.01, true];
	["TWC_Dead" + str (0), 0, true] call ace_common_fnc_setHearingCapability;

	[{!isNull (findDisplay 60000)}, {
		[] call ace_spectator_fnc_ui_toggleUI;
		((findDisplay 60000) displayCtrl 60020) ctrlShow false;
		((findDisplay 60000) displayCtrl 60021) ctrlShow false;
		[false, false] call TWC_UI_fnc_toggleSpectateCompass;
		("acre_sys_gui_vehicleInfo" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
	}] call CBA_fnc_waitUntilAndExecute;

	[{
		params ["_unit"];

		if (!TWC_Death_AlreadyExecuted) then {
			[_unit] call TWC_Incorporeal_fnc_bestGuessDeath;
		};
	}, [_unit]] call CBA_fnc_execNextFrame;
}];

player addEventHandler ["Respawn", {
	params ["_unit"];
	
	if (_unit != player) exitWith {};
	
	TWC_Death_AlreadyExecuted = false;
	_unit setVariable ["TWC_Death_Data", [], true];
}];

["TWC_Unit_Perished", {
	params ["_unit", ["_reason", "clinical_death"]];

	if (player != _unit) exitWith {};
	if !(local _unit) exitWith {};

	if (TWC_Death_AlreadyExecuted) exitWith {};
	TWC_Death_AlreadyExecuted = true;

	_deathData = [_unit, _reason] call TWC_Incorporeal_fnc_getDeathData;
	_deathScreenData = (_deathData select 5);
	_duration = ((_deathScreenData select 2) - (_deathScreenData select 1));

	enableRadio true;
	player disableConversation false;
	playSound [(_deathScreenData select 0), true];

	_deathString = format [
		"<t color='#FF0000' size='3'>%1 %2</t><br/><t color='#FFFFFF' size='2'>Perished during %3 at T+%4</t><br/><br/><br/><br/>If you believe you died unfairly, disconnect immediately and inform management.",
		(_deathData select 0),
		(_deathData select 3),
		TWC_Operation_Name,
		(_deathData select 4)
	];

	555 cutText [_deathString, "PLAIN", 3, true, true];

	[{
		params [["_duration", 5]];

		[_duration] spawn {
			params ["_duration"];

			554 cutFadeOut 3;
			555 cutFadeOut 3;
			cutText ["", "BLACK IN", _duration, true];
		};

		_duration fadeSpeech 0;
		[] spawn TWC_Incorporeal_fnc_fadeInSound;
		
		[{ [] call ace_spectator_fnc_ui_toggleUI; }, [], _duration] call CBA_fnc_waitAndExecute;
	}, [_duration], (_deathScreenData select 1)] call CBA_fnc_waitAndExecute;

	["TWC_addPerishedToServer", [_unit, _reason]] call CBA_fnc_serverEvent;
}] call CBA_fnc_addEventHandler;