params ["_display"];

(_display displayCtrl 111) ctrlShow true;

private _rankTexture = [ACE_player] call TWC_UI_fnc_getRankTexture;
(_display displayCtrl 1203) ctrlSetText _rankTexture;

private _fnc_update = {
	params ["_display"];
	private _control = _display displayCtrl 111;

	_control ctrlSetText format ["%1 - %2 %3 (%4)",
		[ACE_player, false, true] call ace_common_fnc_getName,
		localize "STR_ACE_common_Weight",
		[ACE_player] call ace_common_fnc_getWeight,
		[ACE_player, true] call ace_common_fnc_getWeight
	];
};

_display displayAddEventHandler ["MouseMoving", _fnc_update];
_display displayAddEventHandler ["MouseHolding", _fnc_update];

_display call _fnc_update;