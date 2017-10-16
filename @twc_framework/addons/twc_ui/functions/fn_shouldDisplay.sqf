params ["_player"];

if (vehicle _player == _player) exitWith { false; }; // not in a vehicle

private _types = ["driver", "commander", "gunner"];
private _vehicle = vehicle player;
private _list = fullCrew [_vehicle, "", true];
private _return = false;

{
	if (toLower (_x select 1) in _types && _player == (_x select 0)) exitWith {
		_return = true;
	};
} forEach _list;

if (_return) then {
	_return = switch (true) do {
		case (_vehicle isKindOf "Tank"): 
		case (_vehicle isKindOf "Helicopter"):
		case (_vehicle isKindOf "Plane"):
		case (_vehicle isKindOf "Ship"): { true; };
		default { false; };
	};
};

_return;