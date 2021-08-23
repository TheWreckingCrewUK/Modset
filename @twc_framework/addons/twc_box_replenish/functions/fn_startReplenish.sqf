params ["_source", "_player", "_args"];
_args params ["_type", "_target"];

[
	1,
	[_source, _type, _target],
	{_this call TWC_Box_Replenish_fnc_finishReplenish},
	{ [parsetext ("<t align='center'><t size='1.5'><t color='#ff0000'>Replenish Interrupted</t></t></t><br/>Replenish halted"), false, 2.5] call ace_common_fnc_displayText; },
	"Replenishing Box..."
] call ace_common_fnc_progressBar;