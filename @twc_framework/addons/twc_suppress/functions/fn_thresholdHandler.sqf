if (TWC_Suppress_threshold) > 0) then {
	private _subtract = call {
		if ((time - TWC_Suppress_lastShotTime) <= 1.75) exitWith {0};
		if (TWC_Suppress_isSuppressed) exitWith {1.2};
		2
	};

	TWC_Suppress_threshold = (TWC_Suppress_threshold - _subtract) max 0;
};