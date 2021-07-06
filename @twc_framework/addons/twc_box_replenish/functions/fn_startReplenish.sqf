params ["_source", "_player", "_args"];
_args params ["_type", "_target"];

[
	1,
	[_source, _type, _target],
	{_this call TWC_Box_Replenish_fnc_finishReplenish},
	{_this call TWC_Box_Replenish_fnc_finishReplenish},
	"Replenishing Box...",
	{},
	["isNotInside", "isNotSwimming", "isNotSitting"]
] call ace_common_fnc_progressBar;