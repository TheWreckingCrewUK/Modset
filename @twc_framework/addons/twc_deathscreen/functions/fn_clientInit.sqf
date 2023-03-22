if (isDedicated || !hasInterface) exitWith {};

["CBA_settingsInitialized", {
	// Don't run on public.
	if (TWC_Core_isPublic) exitWith {};

	// Displays the text, that goes over the top of the blackscreen
	["ace_killed", {
		params ["_unit", "_causeOfDeath", "_killer", "_instigator"];
		
		if (player != _unit) exitWith {}; // ignore

		// [name _unit, _isCommand, _roleDesc, _deathText, _time, _deathScreenData, (getPos _unit)]
		_deathData = [_unit, _killer, _instigator, _causeOfDeath] call TWC_Deathscreen_fnc_getDeathData;
		_deathScreenData = (_deathData select 5);
		_duration = ((_deathScreenData select 2) - (_deathScreenData select 1));
		
		enableRadio true;
		player disableConversation false;
		//[_deathScreenData] spawn { playSound (_this select 0); };
		
		_broadcastCredit = "";
		if (TWC_Core_BroadcastMode) then {
			_broadcastCredit = "<br /><br /><t color='#CCCCCC' size='0.5'>Arcadia by Kevin MacLeod<br />Link: https://incompetech.filmmusic.io/song/3377-arcadia<br />License: http://creativecommons.org/licenses/by/4.0/</t>";
		};
		
		_deathString = format [
			"<t color='#FF0000' size='3'>%1 %2</t><br/><t color='#FFFFFF' size='2'>Perished during %3 at T+%4</t><br/><t color='#fabf73' size='1'>Operation created by %5</t><br/><br/><br/><br/>If you believe you died unfairly, disconnect immediately and inform management.%6",
			(_deathData select 0),
			(_deathData select 3),
			getMissionConfigValue ["onLoadName", getMissionConfigValue ["briefingName", "Untitled"]],
			(_deathData select 4),
			getMissionConfigValue ["author", "The Wrecking Crew"],
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
			};
			
			[{ [] call ace_spectator_fnc_ui_toggleUI; }, [], _duration] call CBA_fnc_waitAndExecute;
		}, [_duration], (_deathScreenData select 1)] call CBA_fnc_waitAndExecute;
	}] call CBA_fnc_addEventHandler;

	/** Blacks the screen on the BI EH, as this will hide the UI the quickest **/
	player addEventHandler ["Killed", {
		params ["_unit"];
		
		if (player != _unit) exitWith {};
		
		554 cutText ["", "BLACK OUT", 0.01, true];

		[{!isNull (findDisplay 60000)}, {
			[] call ace_spectator_fnc_ui_toggleUI;
			((findDisplay 60000) displayCtrl 60020) ctrlShow false;
			((findDisplay 60000) displayCtrl 60021) ctrlShow false;
			[false, false] call TWC_UI_fnc_toggleSpectateCompass;
			("acre_sys_gui_vehicleInfo" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
		}] call CBA_fnc_waitUntilAndExecute;
	}];
}] call CBA_fnc_addEventHandler;