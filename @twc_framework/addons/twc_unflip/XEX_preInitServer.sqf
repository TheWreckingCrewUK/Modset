["TWC_Unflip_Start", {
	params ["_vehicle", "_player"];

	private _unflippingUnits = _vehicle getVariable ["TWC_Unflip_Units", []];
	_unflippingUnits pushBackUnique _player;
	_vehicle setVariable ["TWC_Unflip_Units", _unflippingUnits, true];

	private _requiredUnits = _vehicle call TWC_Unflip_fnc_requiredAmount;

	// Enough people, exit and unflip vehicle
	if (_requiredUnits <= count _unflippingUnits) exitWith {
		// divide the time by the amount of participants
		private _time = (_vehicle call TWC_Unflip_fnc_time) / (count _unflippingUnits);

		[{
			_this call TWC_Unflip_fnc_unflip;
			_this setVariable ["TWC_Unflip_Units", [], true];
		}, _vehicle, _time] call CBA_fnc_waitAndExecute;

		// Inform clients that unflip is ready and force them into unflip action wait time
		["TWC_Unflip_Start_Client", _time, _unflippingUnits] call CBA_fnc_targetEvent;
	};

	// We're awaiting more people, before we can proceed
	["TWC_Unflip_Ready", _vehicle, _player] call CBA_fnc_targetEvent;
}] call CBA_fnc_addEventHandler;

["TWC_Unflip_Stop", {
	params ["_vehicle", "_player"];

	private _unflippingUnits = _vehicle getVariable ["TWC_Unflip_Units", []];
	_vehicle setVariable ["TWC_Unflip_Units", _unflippingUnits - [_player], true];
}] call CBA_fnc_addEventHandler;