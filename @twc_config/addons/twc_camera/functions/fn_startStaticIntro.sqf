/*
 * Starts the static introduction. This is black screen with the title/author text overlaid.
 * This is run for anyone who joins (or rejoins) the operation after it's started (give or take the first 30 seconds or so).
 */
params ["_operationName", "_author", ["_missionStarted", false]];

_song = call TWC_Camera_fnc_getIntroSong;

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
	// Change text depending on if it's JIP or not
	if (_this select 0) then {
		titleText ["To get back to where you were, ping Zeus to let them know you're in!", "PLAIN"];
	} else {
		titleText ["To prevent desync, don't move until the go ahead is given.", "PLAIN"];
	};
	
	titleFadeOut 20;
}, [_missionStarted], 30] call CBA_fnc_waitAndExecute;

[{
	// Adds a blur effect which sharpens over the next 6 seconds.
	"dynamicBlur" ppEffectEnable true;
	"dynamicBlur" ppEffectAdjust [6];
	"dynamicBlur" ppEffectCommit 0;
	"dynamicBlur" ppEffectAdjust [0.0];
	"dynamicBlur" ppEffectCommit 5;

	// Remove the veil from our eyes, so we can get to shooting.
	"TWCIntroText" cutText ["", "BLACK IN", 5];
}, [], 57] call CBA_fnc_waitAndExecute;