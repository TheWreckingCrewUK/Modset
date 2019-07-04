params ["_target", "_player", "_destination"];

[_player] call ace_common_fnc_goKneeling;

private _simEvents = [_target] call TWC_Box_Transfer_fnc_simulateTransfer;
if (count _simEvents < 1) exitWith {};
private _totalTime = _simEvents select (count _simEvents - 1) select 0;

[
	_totalTime,
	[_target, _destination, _simEvents],
	{_this call TWC_Box_Transfer_fnc_transferFinish},
	{_this call TWC_Box_Transfer_fnc_transferFinish},
	"Transferring contents...",
	{_this call TWC_Box_Transfer_fnc_transferProgress},
	["isNotInside", "isNotSwimming", "isNotSitting"]
] call ace_common_fnc_progressBar;