params ["_table", "_player"];

[30, [_table, _player], {_return = [_this select 0 select 0, _this select 0 select 1] call twc_fnc_setUpForwardBase; hint _return}, {}, "Setting up Patrol Base..."] call ace_common_fnc_progressBar;