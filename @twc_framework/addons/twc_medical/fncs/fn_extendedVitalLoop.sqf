/* 
 * Author: [TWC] Bosenator
 * Extended vital loop, so we can kill more people :100:
 * 
 * Arguments:
 * 0: The Unit <OBJECT>
 * 
 * Return Value:
 * None
 *
 * Public: No
 */
params ["_unit"];

if (!local _unit) exitWith {};

if (alive _unit) then {
	_debugMode = missionNameSpace getVariable ["twc_debugEnabled", false];
	_bloodVolume = (_unit getVariable ["ace_medical_bloodVolume", 100]);
	_heartRate = (_unit getVariable ["ace_medical_heartRate", 80]);

	if (_bloodVolume <= 0 && _heartRate <= 0) then {
		[_unit, true, false] call ace_medical_fnc_setDead;

		if (_debugMode) then {
			"setDead called" remoteExec ["hint", -2, true];
		};
	};
}; // no longer local unit


[twc_medical_fnc_extendedVitalLoop, [_unit], 1] call CBA_fnc_waitAndExecute; // execute this fnc again in a second