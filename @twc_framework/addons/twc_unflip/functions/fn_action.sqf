params [["_vehicle", objNull, [objNull]]];

#define UNFLIPPING_UNITS (_vehicle getVariable ["TWC_Unflip_Units", []])
#define PLAYER ([] call CBA_fnc_currentUnit)

PLAYER playActionNow "PlayerStand";

if !(PLAYER in UNFLIPPING_UNITS) exitWith {
	["TWC_Unflip_Start", [_vehicle, PLAYER]] call CBA_fnc_serverEvent;
};

private _neededUnits = _vehicle call TWC_Unflip_fnc_requiredAmount;

[{
	params ["_vehicle", "_time"];

	[
		format ["Waiting for a total of %1 push overs...", _neededUnits],
		10,
		{
			params ["_vehicle"];
			!(UNFLIPPING_UNITS isEqualTo [])
			&& alive PLAYER
		},
		{
			params ["_vehicle"];
			["TWC_Unflip_Stop", [_vehicle, PLAYER]] call CBA_fnc_serverEvent;
		},
		{
			params ["_vehicle"];
			["TWC_Unflip_Stop", [_vehicle, PLAYER]] call CBA_fnc_serverEvent;
		},
		_this
	] call CBA_fnc_progressBar;
}, [_vehicle, _time]] call CBA_fnc_execNextFrame;

nil