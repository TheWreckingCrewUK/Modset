params["_player"];

[5, [_player],
{
	_mags = [];
	{
		if(_x select 0 == "fow_30Rnd_303_bren")then{
			_mags pushback _x;
		};
	}forEach (magazinesAmmo _player);
	_index = -1;
	{
		if((_x select 1) == 30)exitWith{
			_index = _forEachIndex;
		};
	}forEach _mags;
	
	if(_index == -1)exitWith{hint "You need a Full Bren Mag to Convert"};

	_mags deleteAt _index;
	_player removeMagazines "fow_30Rnd_303_bren";
	{
		_player addMagazine [_x select 0,_x select 1];
	}forEach _mags;

	_player addItem "10Rnd_303_Magazine";
	_player addItem "10Rnd_303_Magazine";
	_player addItem "10Rnd_303_Magazine";
	
}, {}, "Converting Ammo..."] call ace_common_fnc_progressBar;