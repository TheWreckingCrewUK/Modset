params["_player"];

[120, [_player],
{
	_total = 30;
	_emptyBren = {_x in ["TWC_EmptyBrenMag"]}count (items player);
	_player removeItem "twc_looseAmmoBox_303";
	
	while {_emptyBren > 0}do {
		_player addItem "fow_30Rnd_303_bren";
		_player removeItem "TWC_EmptyBrenMag";
		_emptyBren = _emptyBren - 1;
		_total = _total - 3;
	};
	for "_i" from 1 to _total do{_player addItem "10Rnd_303_Magazine"}
}, {}, "Converting Ammo..."] call ace_common_fnc_progressBar;