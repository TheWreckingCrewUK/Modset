for [{_i=0}, {_i<100}, {_i=_i+1}] do { 
	sleep 0.15;
	["TWC_Dead" + str (_i + 1), ((_i + 1) / 100), true] call ace_common_fnc_setHearingCapability;
	_vol = if (_i > 0) then { _i / 100; } else { 0; };
	["TWC_Dead" + str (_i), _vol, false] call ace_common_fnc_setHearingCapability;
};

15 fadeSpeech 1;