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

	[] spawn {
		waitUntil{!(isNil "BIS_fnc_init")};
		playMusic _song; // play calculated tune

		[] call TWC_Incorporeal_fnc_setPlayerUp;

		titleText ["The Wrecking Crew","PLAIN DOWN"]; 
		titleFadeOut 7;
		sleep 5;

		titleText [_operationName, "PLAIN"];
		titleFadeOut 15;
		sleep 15;

		titleText ["To prevent desync, don't move until the go ahead is given.", "PLAIN"];
		titleFadeOut 20;
		sleep 30;


		sleep 3;
		"dynamicBlur" ppEffectEnable true;
		"dynamicBlur" ppEffectAdjust [6];
		"dynamicBlur" ppEffectCommit 0;
		"dynamicBlur" ppEffectAdjust [0.0];
		"dynamicBlur" ppEffectCommit 5;

		titleCut ["", "BLACK IN", 5];
	};
};

if (!(isNil "twc_JIP_CommandMessage")) then {
	{
		player createDiaryRecord ["Diary", ["Radio Message", _x]];
	} forEach twc_JIP_CommandMessage;
};