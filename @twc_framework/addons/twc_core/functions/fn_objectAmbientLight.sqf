/*
 * Gets the ambient light around an object. Useful for determining if it's well lit.
 *
 * Utilised within intro script, for example.
 *
 *
 */

params ["_object", ["_range", 40]];

_ambientLightLevel = 0;

{
	_ambientLightLevel = _lightLevel max ([_object, _x] call ace_common_fnc_lightIntensityFromObject);
} forEach nearestObjects [_object, ["All"], _range];

_lightLevelTemp = 0;

private _nearObjects = (_object nearObjects ["Chemlight_base", 4]) select {alive _x};

if !(_nearObjects isEqualTo []) then {
	private _nearestlight = _nearObjects select 0;
	private _lightLevelTemp = (1 - ((((_object distance _nearestlight) - 2) / 2) max 0)) * 0.4;

	if (_lightLevelTemp > _lightLevel) then { _ambientLightLevel = _lightLevelTemp; };
};

_ambientLightLevel;