/*
 * Reveals the player to nearby AI, at specified range.
 * This function needs to run on BOTH server and headless clients.
 * As the effect is local to the units, only. 
 * Therefore to effect headless AI, needs to run local there.
 */
params [["_player", objNull, [objNull]], ["_range", 50, [0]]];

_units = _player nearEntities ["Man", _range];

{
	if !(isPlayer _x && side _x != side _player) then {
		_x reveal _player;
	};
} forEach _units;