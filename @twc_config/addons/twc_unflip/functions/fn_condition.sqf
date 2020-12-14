params [
	["_unit", objNull, [objNull]],
	["_vehicle", objNull, [objNull]]
];

if !(alive _vehicle) exitWith { false };
if ((vehicle _unit) isEqualTo _vehicle) exitWith { false };

private _requiredUnits = _vehicle call TWC_Unflip_fnc_requiredAmount;
if (_requiredUnits > 5) exitWith { false };

private _cachedCheckTime = _vehicle getVariable ["TWC_Unflip_isUpsideDown_Time", 0];

if ((time - _cachedCheckTime) > 1) exitWith {
	_upsideDown = ((vectorUp _vehicle vectorDotProduct surfaceNormal getPos _vehicle) < 0);
	
	_vehicle setVariable ["TWC_Unflip_isUpsideDown_Time", time];
	_vehicle setVariable ["TWC_Unflip_isUpsideDown", _upsideDown];
	
	_upsideDown
};

_vehicle getVariable ["TWC_Unflip_isUpsideDown", ((vectorUp _vehicle vectorDotProduct surfaceNormal getPos _vehicle) < 0)];