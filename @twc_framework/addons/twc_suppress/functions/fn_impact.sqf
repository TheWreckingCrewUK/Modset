if (!(hasInterface) || isDedicated) exitWith {};
if !(alive player) exitWith {};

// Should it run?
if (((vehicle player) == player) || (isTurnedOut player)) then {
	TWC_Suppress_impactBlur ppEffectAdjust [0.02, 0.2, 0.2, 0.2];
	TWC_Suppress_impactBlur ppEffectCommit 0;
	TWC_Suppress_impactCC ppEffectAdjust [1, 1, 0, [0, 0, 0, 0.25], [1, 1, 1, 1], [1, 1, 1, 0]];
	TWC_Suppress_impactCC ppEffectCommit 0;
	
	[true] call TWC_Suppress_fnc_clearImpactEffect;
	
	// Flinch at first shot, if it's been 5 minutes since last being shot at
	if ((time - TWC_Suppress_lastShotTime) >= 300) then {
		addCamShake [3, 0.4, 80];
	};
};