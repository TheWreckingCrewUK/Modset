params ["_unit", "_killer", "_instigator", "_useEffects"];

_maxRange = missionNameSpace getVariable ["twc_cachingVehicleRange", 2500];

_distance = player distance2D _unit;
if (_distance > _maxRange) exitWith {};

if (_distance isEqualTo 0) then { _distance = 50; };

// sub 200m~ munition camshakes will be stronger and overlapping generally speaking
_force = linearConversion [50, 1500, _distance, 7.5, 2, true];
_duration = linearConversion [2, 7.5, _force, 2.5, 1, true];
_delay = (_distance / 343); // speed of sound delay

[{ addCamShake [(_this select 0), (_this select 1), 5] },[_force, _duration], _delay] call CBA_fnc_waitAndExecute;