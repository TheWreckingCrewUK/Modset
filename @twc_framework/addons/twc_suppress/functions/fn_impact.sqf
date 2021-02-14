if !(alive player) exitWith {};

// Should it run?
if (((vehicle player) == player) || (isTurnedOut player) || TWC_Suppress_inExposedVehicle) then {
	// ((time - TWC_Suppress_lastImpactTime) >= 3)
	TWC_Suppress_impactBlur ppEffectAdjust [0.015, 0.015, 0.2, 0.2];
	TWC_Suppress_impactBlur ppEffectCommit 0;

	if (isWeaponDeployed player) then {
		TWC_Suppress_impactCC ppEffectAdjust [1, 1, 0, [0, 0, 0, 0.25], [1, 1, 1, 1], [1, 1, 1, 0]];
		TWC_Suppress_impactCC ppEffectCommit 0;
	} else {
		TWC_Suppress_impactCC ppEffectAdjust [1, 1, 0, [0, 0, 0, 0.4], [1, 1, 1, 1], [1, 1, 1, 0]];
		TWC_Suppress_impactCC ppEffectCommit 0;
	};

	[true] call TWC_Suppress_fnc_clearImpactEffect;
	
	if ((time - TWC_Suppress_lastFlinchedTime) >= 300 && (time - TWC_Suppress_lastImpactTime) >= 120) then {
		addCamShake [3, 0.6, 80];
		TWC_Suppress_lastFlinchedTime = time;
	};
	
	TWC_Suppress_lastImpactTime = time;
};