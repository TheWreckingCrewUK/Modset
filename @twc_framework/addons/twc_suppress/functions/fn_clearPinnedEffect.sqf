params [["_isDelayed", false]];

if (_isDelayed) exitWith {
	TWC_Suppress_cc ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 1], [1, 1, 1, 0]];
	TWC_Suppress_cc ppEffectCommit 0;
	
	TWC_Suppress_blur ppEffectAdjust [0];
	TWC_Suppress_blur ppEffectCommit 0.3;
	
	TWC_Suppress_radialBlur ppEffectAdjust [0, 0, 0, 0];
	TWC_Suppress_radialBlur ppEffectCommit 1;
};

TWC_Suppress_cc ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 1], [1, 1, 1, 0]];
TWC_Suppress_cc ppEffectCommit 0;

TWC_Suppress_blur ppEffectAdjust [0];
TWC_Suppress_blur ppEffectCommit 0;

TWC_Suppress_radialBlur ppEffectAdjust [0, 0, 0, 0];
TWC_Suppress_radialBlur ppEffectCommit 0;