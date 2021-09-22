params ["_enabled"];

if (!isServer || !_enabled) exitWith {};

[
	"AllVehicles",
	"InitPost",
	{
		if (!isServer) exitWith {};

		[{
			if !(_this isEqualType []) then { _this = [_this]; };

			{
				_x addCuratorEditableObjects [_this, true];
			} forEach allCurators;
		}, _this] call CBA_fnc_execNextFrame;
	},
	true,
	[],
	true
] call CBA_fnc_addClassEventHandler;
