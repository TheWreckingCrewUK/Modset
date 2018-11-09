params ["_players", "_units", ["_radius", 0]];

{
	_player = selectRandom _players;
	_players = _players - [_player];

	//_x doSuppressiveFire _player;
	if (_radius == 0) then {
		["ace_zeus_suppressiveFire", [_x, (getPosASL _player), ""], _x] CBA_fnc_targetEvent;
	} else {
		_pos = [[[position _player, _radius]], []] call BIS_fnc_randomPos;
		["ace_zeus_suppressiveFire", [_x, (getPosASL _pos), ""], _x] CBA_fnc_targetEvent;
	};
} forEach _units;

//thisList, (thisTrigger getVariable ""radius""), (thisTrigger getVariable ""units"")