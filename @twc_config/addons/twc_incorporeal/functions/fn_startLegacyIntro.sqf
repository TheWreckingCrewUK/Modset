params ["_operationName", "_author", "_operationEra", "_isNightOp", ["_missionStarted", false]];

_song = [_operationEra, _isNightOp] call TWC_Incorporeal_fnc_getIntroSong;

// Don't execute this, if the mission has already started!
if (_missionStarted) then {
	_index = player createDiarySubject ["loadout", "Loadouts"];
	[player] remoteExecCall ["twc_fnc_briefingLoadout", (group player)];
};

if (!isNil "completedTasks") then {
	{
		[_x select 0, _x select 1, false] call BIS_fnc_taskSetState;
	} forEach completedTasks;
};

if (isMultiplayer) then {
	[_operationName, _author, _song] spawn {
		waitUntil {!(isNil "BIS_fnc_init")};
		params ["_operationName", "_author", "_song"];

		[_song] spawn { playMusic (_this select 0); }; // play calculated tune

		titleText ["<t color='#ffffff' size='3'>The Wrecking Crew</t><br/><t color='#FFFFFF' size='1'>Presents</t>", "PLAIN", -1, true, true];
		titleFadeOut 5;

		[{
			params ["_operationName", "_author"];

			_titleText = format [
				"<t color='#ff6633' size='4' align='center'>%1</t><br/><t color='#FFFFFF' size='1' align='center'>by %2</t>",
				_operationName,
				_author
			];

			[parseText _titleText, [0, 0.3, 1, 1], nil, 7, 7, 0] spawn BIS_fnc_textTiles;
		}, [_operationName, _author], 7] call CBA_fnc_waitAndExecute;

		[{
			titleText ["To prevent desync, don't move until the go ahead is given.", "PLAIN"];
			titleFadeOut 20;
		}, [], 30] call CBA_fnc_waitAndExecute;

		[{
			"dynamicBlur" ppEffectEnable true;
			"dynamicBlur" ppEffectAdjust [6];
			"dynamicBlur" ppEffectCommit 0;
			"dynamicBlur" ppEffectAdjust [0.0];
			"dynamicBlur" ppEffectCommit 5;

			titleCut ["", "BLACK IN", 5];
		}, [], 57] call CBA_fnc_waitAndExecute;
	};
};

if (!(isNil "twc_JIP_CommandMessage")) then {
	{
		player createDiaryRecord ["Diary", ["Radio Message", _x]];
	} forEach twc_JIP_CommandMessage;
};