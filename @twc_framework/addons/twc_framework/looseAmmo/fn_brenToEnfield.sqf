params["_player"];

_number = {_x == "fow_30Rnd_303_bren"} count (magazines player);
_number = _number - 1;

[5, [_player],
{
	_player removeMagazines "fow_30Rnd_303_bren";
	
	_player addItem "10Rnd_303_Magazine";
	_player addItem "10Rnd_303_Magazine";
	_player addItem "10Rnd_303_Magazine";
	
	for "_i" from 1 to _number do { _player addItem "fow_30Rnd_303_bren"}
}, {}, "Converting Ammo..."] call ace_common_fnc_progressBar;