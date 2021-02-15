/*
 * Returns an array of players that are within the distance of the provided object.
 * This is an expensive function to call. Please use sparingly!
 */
params [["_object", objNull], ["_distance", 0, [0]]];

private _return = [];
private _pos = _object call CBA_fnc_getPos;

{
	if (_pos distance _x <= _distance) then {
		_return pushBackUnique _x;
	};
} forEach ([] call CBA_fnc_players);

_return