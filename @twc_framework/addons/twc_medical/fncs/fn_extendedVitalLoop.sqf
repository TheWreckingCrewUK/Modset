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

if (!local _unit) exitWith {}; // no longer local unit

if (alive _unit) then {
	_debugMode = missionNameSpace getVariable ["twc_debugEnabled", false];
	_bloodVolume = (_unit getVariable ["ace_medical_bloodVolume", 100]);

	// makes time to death dynamic based on current blood level, will restore with saline
	_defaultMaxTime = missionNamespace getVariable ["twc_medical_defaultMaxTime", (missionNamespace getVariable ["ace_medical_maxReviveTime", 180])];
	_adjustedMaxTime = _defaultMaxTime - ((_defaultMaxTime / 2) * (1 - _bloodVolume));
	
	if (!isAbleToBreathe _unit) then {
		_adjustedMaxTime = (_adjustedMaxTime - (_adjustedMaxTime / 2)) max 30;
	};
	
	missionNamespace setVariable ["ace_medical_maxReviveTime", _adjustedMaxTime];
};

// will keep checking during spectate, but does give respawn compat (public)
[twc_medical_fnc_extendedVitalLoop, [_unit], 1] call CBA_fnc_waitAndExecute; // execute this fnc again in a second