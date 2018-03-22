params["_player"];

_number = {_x == "10Rnd_303_Magazine"} count (magazines player);

[5, [_player],
{
	_player removeMagazines "10Rnd_303_Magazine";
	
	_player addItem "fow_30Rnd_303_bren";
	for "_i" from 1 to _number do { _player addItem "10Rnd_303_Magazine"}
}, {}, "Converting Ammo..."] call ace_common_fnc_progressBar;