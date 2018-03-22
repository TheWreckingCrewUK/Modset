params["_player"];

[5, [_player],
{
	_mags = [];
	{
		if(_x select 0 == "10Rnd_303_Magazine")then{
			_mags pushback _x;
		};
	}forEach (magazinesAmmo _player);
	hint str (_mags);
	_index = [];
	{
		if((_x select 1) == 10)then{
			_index pushback _forEachIndex;
			
			if(count _index != 3)exitWith{};
		};
	}forEach _mags;
	if(count _index != 3)exitWith{hint "You need 3 Full Enfield Clips to Convert"};
	_index sort false;
	{
		_mags deleteAt _x;
	}forEach _index;
	
	_player removeMagazines "10Rnd_303_Magazine";
	{
		_player addMagazine [_x select 0,_x select 1];
	}forEach _mags;

	_player addItem "fow_30Rnd_303_bren";
	
}, {}, "Converting Ammo..."] call ace_common_fnc_progressBar;