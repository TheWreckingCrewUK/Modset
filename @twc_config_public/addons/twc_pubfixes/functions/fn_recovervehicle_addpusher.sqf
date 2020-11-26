params ["_target", "_player"];
//exec'd on the vehicle's client, this adds a player to a local array, which is checked for validity every few seconds while the vehicle is being recovered

//if the array is empty then the recover function isn't running, so run it
//systemchat "pusher added";
_array = _target getvariable ["twc_targetpushers", []];

_array pushback _player;
_target setvariable ["twc_targetpushers", _array];

if ((count _array) == 1) exitwith {
	[_target] spawn twc_winch_fnc_recovervehicle;
};

hint "You are assisting with the vehicle recovery";