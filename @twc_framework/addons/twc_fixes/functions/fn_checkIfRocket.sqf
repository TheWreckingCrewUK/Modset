params ["_player"];

if (
	(velocity _player select 2) > 1 && 
	!(eyePos _player select 2 < 0) && 
	(_player getVariable ["TWC_isDebugging", false])
) then {
	_player setVelocity [0, 0, 0];
};