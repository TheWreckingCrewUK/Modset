GURNEY_BACKLOG = [];
missionNamespace setVariable ["TWC_Medical_spareGurneys", 20, true]; // 20 available for now

["twc_medical_server_gurneyUsed", {
	params ["_caller", "_target"];

	_previousCount = missionNamespace getVariable ["TWC_Medical_spareGurneys", 0];
	missionNamespace setVariable ["TWC_Medical_spareGurneys", (_previousCount - 1), true];

	_message = format ["%1 handed over %2 to the surgical staff, they have %3 gurney(s) remaining.", _caller, _target, (_previousCount - 1)];
	GURNEY_BACKLOG pushBack _message;

	// players add the message to their map
	["twc_medical_evh_gurneyUsed", [_message]] call CBA_fnc_globalEvent;
}] call CBA_fnc_addEventHandler;

addMissionEventHandler ["PlayerConnected", {
	params ["_id", "_uid", "_name", "_jip", "_owner"];

	{
		if (getPlayerUID _x == _uid) exitWith {
			_playerObj = _x;

			{
				["twc_medical_evh_gurneyUsed", [_message], _playerObj] call CBA_fnc_targetEvent;
			} forEach GURNEY_BACKLOG;
		};
	} forEach playableUnits;
}];