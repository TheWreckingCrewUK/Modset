
params ["_target"];

_casualty = player getvariable ["twc_playerhaswinch", player];

_maxdis = (((sizeof (typeof _target)) * 5) max 10);

if ((_casualty distance _target) > _maxdis) exitwith {
	hint "This vehicle is too far away";
};

player setvariable ["twc_playerhaswinch", player];

_casualty setvariable ["twc_winch_target", _target, true];

_target setvariable ["twc_playerhaswinch", _casualty, true];

hint "Winch attached";