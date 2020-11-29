//bad hits can pass a force up to 10% of the vehicle's mass, give or take
params ["_player", "_force"];

_damage = (((_force * 0.1) max 0.001) / (((getmass (vehicle player)) * 0.01) + 1)); 
//systemchat ("damage1 " +(str _damage));
addCamShake [(_damage* 7), 1.0, 10];

if (_damage < 0.1) exitwith {};
_helmetmod = 0.5;

if ((getNumber (configFile >> "CfgWeapons" >> headgear _player >> "iteminfo" >> "HitpointsProtectionInfo" >> "head" >> "armor")) > 0) then {
	_helmetmod = 0.25;
};

//skim a little off the top
_ndamage = (((((_damage max 0.3) - 0.3) ) * 0.2) + 0.3);

_damage = _ndamage max _damage;

_part = selectrandom ["head", "head", "head", "hand_l", "hand_r", "leg_l", "leg_r"];

_amount = (((_damage) min 1.5) max 0.01) * _helmetmod;

//removing the damage bit while it's not being fired on server
//[_player, _amount, _part, "punch"] call ace_medical_fnc_addDamageToUnit;
