params["_player"];

[120, [_player],
{
	_player removeItems "twc_looseAmmoBox_303";
	for "_i" from 1 to 30 do{_player addItem "10Rnd_303_Magazine"}
}, {}, "Converting Ammo..."] call ace_common_fnc_progressBar;