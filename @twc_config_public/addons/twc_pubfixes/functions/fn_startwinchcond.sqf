params ["_target"];

(((_target getvariable ['twc_winch_target', _target]) != _target) && (((_target getvariable ['twc_winch_target', _target]) distance _target) < (sizeof (typeof _target)) * 5) && (!(_target getvariable ['twc_iswinching', false])))