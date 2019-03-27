params ["_vehicle"];

private _vCrew = crew _vehicle;

if (count _vCrew > 0) exitWith { false };

private _position = getPosATL _vehicle;
private _emptyPos = _position findEmptyPosition [0, 20, (typeOf _vehicle)];

if (isNil "_emptyPos" || { count _emptyPos == 0 } || ) exitWith { false; };

_vehicle allowDamage false;
_vehicle setVectorUp surfaceNormal _emptyPos;
_vehicle setPosATL _emptyPos;
_vehicle allowDamage true;
true;