if !(hasInterface) exitWith {};

if (is3DEN) exitWith {
	// in the editor, editing...
	
	[
		["UpdateDetails","In the editor, editing..."],
		["UpdateState", "On " + worldName],
		["UpdateLargeImageKey","editor"],
		["UpdateSmallImageKey","editor"],
		["UpdateStartTimestamp", [0, 0]],
		["UpdateButtons", ["TWC", "https://thewreckingcrew.eu"]]
	] call (missionNameSpace getVariable ["DiscordRichPresence_fnc_update", {}]);
};

private _role = [(configFile >> "CfgVehicles" >> typeOf player), "displayName", "Unknown Role"] call BIS_fnc_returnConfigEntry;
private _mission = getMissionConfigValue ["onLoadName", getMissionConfigValue ["briefingName", "Untitled"]];

if (TWC_Core_isPublic) exitWith {
	[
		["UpdateDetails","Playing as " + _role],
		["UpdateState", "On " + _mission],
		["UpdateLargeImageKey","public"],
		["UpdateSmallImageKey","public"],
		["UpdateStartTimestamp", [0, 0]],
		["UpdateButtons",["TWC", "https://thewreckingcrew.eu"]]
	] call (missionNameSpace getVariable ["DiscordRichPresence_fnc_update", {}]);
};

private _era = missionNameSpace getVariable ["era", "modern"];
if (_era == "1990") then { _era = "millennial"; };
// modern, millennial, coldwar, ww2, mmo

[
	["UpdateDetails","Playing as " + _role],
	["UpdateState", "On " + _mission],
	["UpdateLargeImageKey", _era],
	["UpdateSmallImageKey", _era],
	["UpdateStartTimestamp", [0, 0]],
	["UpdateButtons", ["TWC", "https://thewreckingcrew.eu"]]
] call (missionNameSpace getVariable ["DiscordRichPresence_fnc_update", {}]);