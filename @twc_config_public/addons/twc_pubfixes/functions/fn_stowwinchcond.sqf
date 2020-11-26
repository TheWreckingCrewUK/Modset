params ["_target"];

(((_target getvariable ["twc_playerhaswinch", _target]) == player) && ((player getvariable ["twc_playerhaswinch", _target]) == _target) && (!(_target getvariable ['twc_iswinching', false])))