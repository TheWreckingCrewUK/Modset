
params ["_target"];

player setvariable ["twc_playerhaswinch", _target];

_target setvariable ["twc_playerhaswinch", player, true];

hint "Winch picked up. Attach it to your pulling vehicle";