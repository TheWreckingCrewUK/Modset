if (isDedicated || !hasInterface) exitWith {};

// Don't run on public.
_isEnabled = missionNameSpace getVariable ["TWC_enablePublicCPRChance", false];
if (_isEnabled) exitWith {};

_index = player createDiarySubject ["loadout", "Loadouts"];
[player] remoteExecCall ["twc_fnc_briefingLoadout", (group player)];

TWC_Death_AlreadyExecuted = false;
TWC_Death_ExecutionFinished = false;
TWC_Operation_Name = getMissionConfigValue ["onLoadName", getMissionConfigValue ["briefingName", "Untitled"]];
TWC_Operation_Creator = getMissionConfigValue ["author", "The Wrecking Crew"];

// Always block screen on spawn.
[{ getClientStateNumber > 9 }, {
	_isPublic = missionNameSpace getVariable ["TWC_enablePublicCPRChance", false];
	if (_isPublic) exitWith {};
	
	[(_this select 0)] spawn {
		titleCut ["", "BLACK FADED", 999];
	};
}, []] call CBA_fnc_waitUntilAndExecute;

// Wait until mission module has been initalized.
["twc_framework_initComplete", {
	_operationEra = missionNameSpace getVariable ["era", "modern"];
	_isNightOp = missionNameSpace getVariable ["TWC_NightGear", false];
	_isDisabled = missionNameSpace getVariable ["TWC_Intro_isDisabled", false];
	_missionStarted = missionNameSpace getVariable ["TWC_Intro_Started", false];
	_isDebug = missionNameSpace getVariable ["twc_debugEnabled", false];
	
	_isPublic = missionNameSpace getVariable ["TWC_enablePublicCPRChance", false];
	if (_isPublic) exitWith {};
	
	if (_isDebug) exitWith { systemChat "Skipping intro, due to debug mode..."; };
	
	[] call TWC_Incorporeal_fnc_setPlayerUp;
	
	// JIP'd in, don't show the camera stuff.
	if (_isDisabled || _missionStarted) exitWith {
		[TWC_Operation_Name, TWC_Operation_Creator, _operationEra, _isNightOp, _missionStarted] call TWC_Incorporeal_fnc_startLegacyIntro;
	};

	[TWC_Operation_Name, TWC_Operation_Creator, _operationEra, _isNightOp] spawn TWC_Incorporeal_fnc_startIntro;
}] call CBA_fnc_addEventHandler;

["ace_killed", {
	params ["_unit"];
	private ["_drowned", "_morpOD", "_epiOD", "_CA"];
	
	if (player != _unit) exitWith {}; // ignore
	_isPublic = missionNameSpace getVariable ["TWC_enablePublicCPRChance", false];
	if (_isPublic) exitWith {};

	[{
		params ["_unit"];
		if (!TWC_Death_AlreadyExecuted) then {
			[_unit] call TWC_Incorporeal_fnc_bestGuessDeath;
		};
	}, [_unit], 1] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_addEventHandler;

/** We cut on the killed event, so we have minimal chance of the spectate UI showing **/
player addEventHandler ["Killed", {
	params ["_unit"];
	
	// safety check!
	if (player != _unit) exitWith {};
	if !(local _unit) exitWith {};
	_isPublic = missionNameSpace getVariable ["TWC_enablePublicCPRChance", false];
	if (_isPublic) exitWith {};
	
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
	}, [_unit], 1] call CBA_fnc_waitAndExecute;
	
	[{
		if !(TWC_Death_ExecutionFinished) then {
			cutText ["", "BLACK IN", 15, true];
		};
	}, [], 60] call CBA_fnc_waitAndExecute;
}];

player addEventHandler ["Respawn", {
	params ["_unit"];
	
	if (_unit != player) exitWith {};
	_isPublic = missionNameSpace getVariable ["TWC_enablePublicCPRChance", false];
	if (_isPublic) exitWith {};
	
	TWC_Death_AlreadyExecuted = false;
	_unit setVariable ["TWC_Death_Data", [], true];
}];

["TWC_Unit_Perished", {
	params ["_unit", ["_reason", "clinical_death"]];

	if (player != _unit) exitWith {};
	if !(local _unit) exitWith {};

	_isPublic = missionNameSpace getVariable ["TWC_enablePublicCPRChance", false];
	if (_isPublic) exitWith {};

	if (TWC_Death_AlreadyExecuted) exitWith {};
	TWC_Death_AlreadyExecuted = true;

	_deathData = [_unit, _reason] call TWC_Incorporeal_fnc_getDeathData;
	_deathScreenData = (_deathData select 5);
	_duration = ((_deathScreenData select 2) - (_deathScreenData select 1));

	enableRadio true;
	player disableConversation false;
	_deathScreenData spawn { playSound [(_this select 0), true]; }; // false sounds break script scope?

	_broadcastCredit = "";
	if (TWC_Core_BroadcastMode) then {
		_broadcastCredit = "<br /><br /><t color='#CCCCCC' size='0.5'>Arcadia by Kevin MacLeod<br />Link: https://incompetech.filmmusic.io/song/3377-arcadia<br />License: http://creativecommons.org/licenses/by/4.0/</t>";
	};

	_deathString = format [
		"<t color='#FF0000' size='3'>%1 %2</t><br/><t color='#FFFFFF' size='2'>Perished during %3 at T+%4</t><br/><br/><br/><br/>If you believe you died unfairly, disconnect immediately and inform management.%5",
		(_deathData select 0),
		(_deathData select 3),
		TWC_Operation_Name,
		(_deathData select 4),
		_broadcastCredit
	];

	555 cutText [_deathString, "PLAIN", 3, true, true];

	[{
		params [["_duration", 5]];

		[_duration] spawn {
			params ["_duration"];

			554 cutFadeOut 3;
			555 cutFadeOut 3;
			cutText ["", "BLACK IN", _duration, true];
			TWC_Death_ExecutionFinished = true;
		};

		_duration fadeSpeech 0;
		[] spawn TWC_Incorporeal_fnc_fadeInSound;
		
		[{ [] call ace_spectator_fnc_ui_toggleUI; }, [], _duration] call CBA_fnc_waitAndExecute;
	}, [_duration], (_deathScreenData select 1)] call CBA_fnc_waitAndExecute;

	["TWC_addPerishedToServer", [_unit, _reason]] call CBA_fnc_serverEvent;
}] call CBA_fnc_addEventHandler;