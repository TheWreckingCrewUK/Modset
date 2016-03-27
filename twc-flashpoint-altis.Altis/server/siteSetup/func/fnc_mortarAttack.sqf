/*
*
*
*/


params["_thisList"];
if((random 100) < 50)exitWith{};
_target = _thisList call BIS_fnc_selectRandom;
_mortarGunner = ["O_Mortar_01_F"];
_numrounds = floor (random 5);

_pos = [getmarkerpos "support1",[0,50],random 360,0] call SHK_pos;

_mortar = [_pos, EAST, _mortarGunner] call BIS_fnc_spawnGroup;

_gunner = leader _mortar;

_gunner doArtilleryFire [getPos _target, "8Rnd_82mm_Mo_shells", _numrounds];

[]spawn{
	sleep 15;
	_weapon = nearestObject [getMarkerPos "support1", "StaticWeapon"];
	deletevehicle _weapon;
	_gunner =  nearestObject [getMarkerPos "support1", "Man"];
	deletevehicle _gunner;
};
