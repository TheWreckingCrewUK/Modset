params ["_caller", "_vehicle"];

_cachedResult = _vehicle getVariable ["TWC_canGetOut_cached", nil];

if (isNil "_cachedResult") then {
	_canBail = [(configFile >> "CfgVehicles" >> typeOf (_vehicle)), "TWC_getOut", 0] call BIS_fnc_returnConfigEntry;
	_vehicle setVariable ["TWC_canGetOut_cached", _canBail, true];
} else {
	_canBail = _cachedResult;
};

if (_canBail == 0) exitWith { false };
true;