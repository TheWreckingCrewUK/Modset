/*
*
*
*/


params["_thisList"];
if((getMarkerColor "support1") == "ColorWEST")exitWith{};
if((random 100) < 50)exitWith{};
_target = _thisList call BIS_fnc_selectRandom;
_mortarGunner = ["O_Mortar_01_F"];
_numrounds = floor (random 5);
_radius = 100;

_pos = [getmarkerpos "support1",[0,20],0,0] call SHK_pos;

_mortar = [_pos, EAST, _mortarGunner] call BIS_fnc_spawnGroup;

_gunner = leader _mortar;

_targetLocation = getPos _target;
_sleep = 15;
while {_sleep = _sleep + 15; _numrounds = _numrounds - 1; _numrounds > 0} do {

	_pos = [
		((_targetLocation select 0) - _radius + (2 * random _radius)),
		((_targetLocation select 1) - _radius + (2 * random _radius)),
		0
	];
	[_sleep, _gunner, _pos]spawn{sleep (_this select 0);(_this select 1) doArtilleryFire [(_this select 2), "8Rnd_82mm_Mo_shells", 1]};
};
[]spawn{
	sleep 150;
	_weapon = nearestObjects [getMarkerPos "support1", ["StaticWeapon"], 30];
	{deleteVehicle _x}forEach _weapon;
	_men = nearestObjects [getMarkerPos "support1", ["Man"], 30];
	sleep 5;
	{deleteVehicle _x}forEach _men;
};
