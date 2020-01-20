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
if (!isPlayer _unit) exitWith {}; // don't care
if (isDedicated || !hasInterface) exitWith {};

if (alive _unit) then {
	//_debugMode = missionNameSpace getVariable ["twc_debugEnabled", false];
	_bloodVolumevar = (_unit getVariable ["ace_medical_bloodVolume", 100]);
	_bloodVolume = linearConversion [0, 6, _bloodVolumevar, 0, 100, true];
	// makes time to death dynamic based on current blood level, will restore with saline
	_defaultMaxTime = missionNamespace getVariable ["twc_medical_defaultMaxTime", (missionNamespace getVariable ["ace_medical_maxReviveTime", 180])];
	_adjustedMaxTime = _defaultMaxTime - ((_defaultMaxTime / 200) * (100 - _bloodVolume));
	
	if (!isAbleToBreathe _unit) then {
		_adjustedMaxTime = (_adjustedMaxTime - (_adjustedMaxTime / 2)) max 30;
		_unit setVariable ["TWC_isDrowning", true];
	} else {
		_unit setVariable ["TWC_isDrowning", false];
	};

	missionNamespace setVariable ["ace_medical_maxReviveTime", _adjustedMaxTime];
	
	_unCon = (_unit getVariable ["ACE_isUnconscious", false]);
	if !(_unCon) then {
		_pain = _unit getVariable ["ace_medical_pain", 0];
		_painSuppress = _unit getVariable ["ace_medical_painSuppress", 0];
		
		if (_pain > _painSuppress) then {
			if ((_pain - _painSuppress) > 2 && {random(1) > 0.8}) then {
				[_unit] call ace_medical_fnc_setUnconscious;
			};
		};
	};
};

// will keep checking during spectate, but does give respawn compat (public)
[twc_medical_fnc_extendedVitalLoop, [_unit], 1] call CBA_fnc_waitAndExecute; // execute this fnc again in a second