params ["_source", "_type", "_target"];

[
	1,
	[_source, _target, _type],
	{_this call TWC_Box_Replenish_fnc_finishReplenish},
	{systemChat "Replenish Failed"},
	"Replenishing Box...",
	{},
	["isNotInside", "isNotSwimming", "isNotSitting"]
] call ace_common_fnc_progressBar;