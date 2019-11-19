params ["_unit", "_markerlightItem"];

_unit removeItem _markerlightItem;

if (stance _unit == "STAND") then {
	[_unit, "AmovPercMstpSrasWrflDnon_diary"] call ace_common_fnc_doAnimation;
};

[{
	params ["_unit"];

	private _direction = getDir _unit;
	private _position = getPosASL _unit vectorAdd [0.8 * sin _direction, 0.8 * cos _direction, 0.02];

	private _markerlight = "TWC_Objects_Markerlight" createVehicle _position;
}, [_unit], 1] call CBA_fnc_waitAndExecute;