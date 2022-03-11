// done on every player unit locally

if (!hasInterace) exitWith {};

// don't bother if it's not a cold weather operation
_isColdWeatherOp = true;

if (!_isColdWeatherOp) exitWith {};

params ["_unit"];

private _source = createSimpleObject ["CBA_NamespaceDummy", (getPos _unit), true];
_source attachTo [_unit, [0, 0.15, 0], "neck"];

_unit setVariable ["TWC_Cold_Weather_Mouth", _source];