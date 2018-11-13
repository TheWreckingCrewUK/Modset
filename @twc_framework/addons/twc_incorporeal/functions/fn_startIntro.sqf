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

// Need to support special intro camera stuff here. Hmmm.
_introData = [] call TWC_Incorporeal_fnc_getIntroData;

// Calculate time per section for panning shot. Overall time limit is 40 seconds, divided by element count. Min of 4 seconds per group.
_totalAssetCount = count _introData;
_panTimePerAsset = (40 / (_totalAssetCount)) max 4;
disableUserInput true;

waitUntil {!(isNil "BIS_fnc_init")};
// some way of nicely transitioning into the game before group info ??
_cam = "camera" camCreate (player modelToWorld [0, 3, 4]);
_cam camSetTarget (player modelToWorld [0, 0, 0]);
_cam camSetPos (player modelToWorld [0, 2, 1.5]);
_cam cameraEffect ["internal", "back"];

[_song] spawn { playMusic (_this select 0); }; // play calculated tune
[] spawn TWC_Incorporeal_fnc_setPlayerUp;

titleText ["<t color='#ffffff' size='3'>The Wrecking Crew</t><br/><t color='#FFFFFF' size='1'>Presents</t>", "PLAIN", -1, true, true];
titleFadeOut 5;
sleep 6;

_titleText = format [
	"<t color='#ff6633' size='4' align='center'>%1</t><br/><t color='#FFFFFF' size='1' align='center'>by %2</t>",
	_operationName,
	_author
];

[parseText _titleText, [0, 0.3, 1, 1], nil, 5, 5, 0] spawn BIS_fnc_textTiles;
sleep 10;

titleCut ["", "BLACK IN", 15];
_cam camCommit 5;
sleep 4;

{
	_x params ["_groupName", "_groupUnits"];
	_displayString = "";
	_firstUnit = ((_groupUnits select 0) select 2);
	_lastUnit = ((_groupUnits select (count _groupUnits - 1)) select 2);
	
	// Build Group Display List
	{
		_color = "#FFFFFF";
		if (_x select 1) then { _color = "#ff9933"; };

		_tmpString = "<t color='" + _color + "' size='1' align='left'>" + (_x select 0) + "</t>: " + name (_x select 2) + "<br />";
		_displayString = _displayString + _tmpString;
	} forEach _groupUnits;
	
	_groupText = format ["<t color='#ff6633' size='2' align='left'>%1</t><br/>%2", _groupName, _displayString];
	
	titleText [_groupText, "PLAIN", -1, false, true]; 
	titleFadeOut _panTimePerAsset;
	
	_cam camSetTarget (_firstUnit modelToWorld [0, 0, 1.5]);
	_cam camSetPos (_firstUnit modelToWorld [0, 2, 1.5]);
	_cam cameraEffect ["internal", "back"];
	_cam camCommit 0;

	_cam camSetTarget (_lastUnit modelToWorld [0, 0, 1.5]);
	_cam camSetPos (_lastUnit modelToWorld [0, 2, 1.5]);
	_cam cameraEffect ["internal", "back"];
	_cam camCommit _panTimePerAsset;
	
	//_waitFor = (_forEachIndex + 1) * _panTimePerAsset;
	sleep _panTimePerAsset;
} forEach _introData;

_cam = "camera" camCreate (player modelToWorld [0, 2, 5]);
_cam cameraEffect ["terminate", "back"];
camDestroy _cam;

// KillZone trick to fix a bug, apparently
disableUserInput false;
disableUserInput true;
disableUserInput false;

"dynamicBlur" ppEffectEnable true;
"dynamicBlur" ppEffectAdjust [6];
"dynamicBlur" ppEffectCommit 0;
"dynamicBlur" ppEffectAdjust [0.0];
"dynamicBlur" ppEffectCommit 5;

if (!(isNil "twc_JIP_CommandMessage")) then {
	{
		player createDiaryRecord ["Diary", ["Radio Message", _x]];
	} forEach twc_JIP_CommandMessage;
};