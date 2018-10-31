params ["_operationName", "_author", "_operationEra", "_isNightOp"];

_song = [_operationEra, _isNightOp] call TWC_Incorporeal_fnc_getIntroSong;

if (serverTime < 600) then {
	_index = player createDiarySubject ["loadout", "Loadouts"];
	[player] remoteExecCall ["twc_fnc_briefingLoadout", (group player)];
};

if (!isNil "completedTasks") then {
	{
		[_x select 0, _x select 1, false] call BIS_fnc_taskSetState;
	} forEach completedTasks;
};

if (isMultiplayer) then {
	titleCut ["", "BLACK FADED", 999];

	[{!(isNil "BIS_fnc_init")}, {
		params ["_operationName", "_operationEra", "_song"];

		playMusic _song; // play calculated tune

		[] call TWC_Incorporeal_fnc_setPlayerUp;

		titleText ["The Wrecking Crew","PLAIN DOWN"]; 
		titleFadeOut 7;

		[{
			params ["_operationName, _author"];

			_titleText = format [
				"<t color='#ff6633' size='3'>%1</t><br/><t color='#FFFFFF' size='2'>by %2</t>",
				_operationName,
				_author
			];

			/* cutText [_titleText, "PLAIN"];
			titleFadeOut 15; */
			
			[parseText _titleText, true, nil, 15, 5, 0] spawn BIS_fnc_textTiles;
		}, [_operationName, _author], 7] call CBA_fnc_waitAndExecute;

		[{
			titleText ["To prevent desync, don't move until the go ahead is given.", "PLAIN"];
			titleFadeOut 20;
		}, [], 22] call CBA_fnc_waitAndExecute;

		[{
			"dynamicBlur" ppEffectEnable true;
			"dynamicBlur" ppEffectAdjust [6];
			"dynamicBlur" ppEffectCommit 0;
			"dynamicBlur" ppEffectAdjust [0.0];
			"dynamicBlur" ppEffectCommit 5;

			titleCut ["", "BLACK IN", 5];
		}, [], 60] call CBA_fnc_waitAndExecute;
	}, [_operationName, _author, _song]] call CBA_fnc_waitUntilAndExecute;
};

if (!(isNil "twc_JIP_CommandMessage")) then {
	{
		player createDiaryRecord ["Diary", ["Radio Message", _x]];
	} forEach twc_JIP_CommandMessage;
};