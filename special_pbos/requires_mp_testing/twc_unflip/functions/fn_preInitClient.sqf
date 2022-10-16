// We're awaiting for more people
["TWC_Unflip_Ready", { _this call TWC_Unflip_fnc_action; }] call CBA_fnc_addEventHandler;

// We're doing it!
["TWC_Unflip_Start_Client", {
	params ["_time"];

	[{
		[
			"Reorientating...",
			_this,
			{true},
			{},
			{},
			[],
			true, // block mouse
			true, // block keys
			false // allow close (esc)
		] call CBA_fnc_progressBar;
	}, _time] call CBA_fnc_execNextFrame;
}] call CBA_fnc_addEventHandler;