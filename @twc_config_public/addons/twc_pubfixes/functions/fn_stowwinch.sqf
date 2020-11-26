
params ["_target"];

_casualty = player getvariable ["twc_playerhaswinch", _target];

if (_target != _casualty) then {
	_casualty setvariable ["twc_playerhaswinch", _casualty, true];
};

player setvariable ["twc_playerhaswinch", player];

_target setvariable ["twc_playerhaswinch", _target, true];
_target setvariable ["twc_winch_target", _target, true];

hint "Winch stowed";