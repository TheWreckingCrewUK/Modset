if !(hasInterface) exitWith {};

// Globals
TWC_Cold_Weather_breathingList = [];

["acre_remoteStartedSpeaking", {
	params ["_unit", "_onRadio", "_radioID"];
	
	[_unit] call TWC_Cold_Weather_fnc_startBreathLoop;
}] call CBA_fnc_addEventHandler;

["acre_remoteStoppedSpeaking", {
	params ["_unit"];

	[_unit] call TWC_Cold_Weather_fnc_stopBreathLoop;
	// TWC_Cold_Weather_currentBreathingCount = TWC_Cold_Weather_currentBreathingCount - 1;
}] call CBA_fnc_addEventHandler;