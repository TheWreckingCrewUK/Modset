/**
 * Returns the player object for a given name (string). ObjNull if not found.
 */
params [[_name, , []]];
private _unit = objNull;

_name = toLower _name;

_unit =	{
	if (toLower name _x isEqualTo _name) exitWith { _x };
} forEach (call CBA_fnc_players);

_unit