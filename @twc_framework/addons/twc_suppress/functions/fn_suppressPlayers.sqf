params ["_players", "_units", ["_radius", 0]];

{
	_player = selectRandom _players;
	_players = _players - [_player];

	//_x doSuppressiveFire _player;
	if (_radius == 0) then {
		_playerPos = getPosASL _player;
		["ace_zeus_suppressiveFire", [_x, _playerPos, ""], _x] call CBA_fnc_targetEvent;
	} else {
		_pos = getPosASL ([[[position _player, _radius]], []] call BIS_fnc_randomPos);
		["ace_zeus_suppressiveFire", [_x, _pos, ""], _x] call CBA_fnc_targetEvent;
	};
} forEach _units;

//thisList, (thisTrigger getVariable ""radius""), (thisTrigger getVariable ""units"")