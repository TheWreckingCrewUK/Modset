params [["_isDelayed", false]];

if (_isDelayed) exitWith {
	TWC_Suppress_impactCC ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 1], [1, 1, 1, 0]];
	TWC_Suppress_impactCC ppEffectCommit 4;
	
	TWC_Suppress_impactBlur ppEffectAdjust [0, 0, 0, 0];
	TWC_Suppress_impactBlur ppEffectCommit 2;
};

TWC_Suppress_impactCC ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 1], [1, 1, 1, 0]];
TWC_Suppress_impactCC ppEffectCommit 0;

TWC_Suppress_impactBlur ppEffectAdjust [0, 0, 0, 0];
TWC_Suppress_impactBlur ppEffectCommit 0;