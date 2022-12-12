if (TWC_Suppress_threshold > 0) then {
	private _subtract = call {
		if ((time - TWC_Suppress_lastShotTime) <= 3) exitWith {0.2};
		if (TWC_Suppress_isSuppressed) exitWith {1};
		1.65
	};

	TWC_Suppress_threshold = (TWC_Suppress_threshold - _subtract) max 0;
};