params ["_target", "_player"];

if (!isServer) exitWith {};
_pos = getPos _target; 
deleteVehicle _target; 
_static = "twc_m1919a4_static" createVehicle _pos;
_static setPos _pos;
_static removeMagazinesTurret ["fow_250Rnd_M1919", [0]]; 
if (_player ammo "fow_w_m1919a4" > 0) then
{
	_static addMagazine [currentMagazine _player, _player ammo "fow_w_m1919a4"];
}; 
_player removeWeaponGlobal "fow_w_m1919a4";

