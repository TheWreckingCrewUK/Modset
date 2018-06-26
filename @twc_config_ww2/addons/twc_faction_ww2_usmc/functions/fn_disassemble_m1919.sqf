params ["_target","_player"];

//Get M1919 static position.
_pos = getPos _target; 


if ((primaryWeapon _player) == "") then
{
	[_player, "fow_w_m1919a4"] remoteExec ["addWeapon", _player, false];
} else
{
	_holder = 'GroundWeaponHolder' createVehicle _pos;
	_holder addWeaponCargoGlobal ['fow_w_m1919a4', 1];
};
if ((backpack _player) == "") then
{
	_player addBackpackGlobal "fow_b_usa_m1919_support";
} else
{
	_holder = 'GroundWeaponHolder' createVehicle _pos;
	_holder addBackpackCargoGlobal ['fow_b_usa_m1919_support', 1];
};

//No need to spawn any mags if the static doesn't have ammo.
if ((_target ammo 'fow_w_m1919a4_static') == 0) exitwith {deleteVehicle _target;}; 

//But if it does it should go into the inventory if possible.
if ((_player canAdd (currentMagazine _target)) && (count (magazines _target) != 0)) then 
{
	_player addMagazine [(currentMagazine _target), _target ammo 'fow_w_m1919a4_static'];
} else 
{
	_holder = 'GroundWeaponHolder' createVehicle _pos;
	_holder addMagazineCargoGlobal [currentMagazine _target, _target ammo 'fow_w_m1919a4_static'];
}; 

//Get rid of the static.
deleteVehicle _target;