params ["_target"];

(((player getvariable ["twc_playerhaswinch", player]) != player) && ((_target getvariable ["twc_playerhaswinch", _target]) == _target))