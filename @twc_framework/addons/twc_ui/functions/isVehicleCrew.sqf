params ["_player"];

if (vehicle _player == _player) exitWith { false; }; // not in a vehicle

private _types = ["driver", "commander", "gunner"];

_list = fullCrew [vehicle player, "", true];

if (toLower (_x select 1) in _types) then {
	if (_player == (_x select 0)) exitWith { true; };
};

false;