params ["_target", "_player", "_destination"];

[_player] call ace_common_fnc_goKneeling;

private _simEventsbase = [_target] call TWC_Box_Transfer_fnc_simulateTransfer;
if (count _simEventsbase < 1) exitWith {};
_simEvents = _simEventsbase select 0;
private _totalTime = _simEventsbase select 1;

[
	_totalTime,
	[_target, _destination, _simEvents],
	{_this call TWC_Box_Transfer_fnc_transferFinish},
	{_this call TWC_Box_Transfer_fnc_transferFinish},
	"Transferring contents...",
	{_this call TWC_Box_Transfer_fnc_transferProgress},
	["isNotInside", "isNotSwimming", "isNotSitting"]
] call ace_common_fnc_progressBar;