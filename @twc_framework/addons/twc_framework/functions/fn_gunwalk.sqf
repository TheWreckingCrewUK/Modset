params [["_weapon", ""], "_ammo", "_projectile", "_gunner", ["_type", 1]];

if ((hasInterface) && ((vehicle _gunner) == (vehicle player))) exitwith {};

if (isNull _projectile) then { _projectile = nearestObject [_gunner, _ammo]; };

if (((vehicle _gunner) getvariable ["twc_dontwalk", 0]) == 1) exitwith {
	
};

if ((typeof _projectile) iskindof ["MissileCore", configFile >> "CfgAmmo"]) exitwith {};
//systemchat "gun";
_prev = _gunner getvariable ["twc_mortar_lastfired", 0]; 
//systemchat format ["%1", _gunner];
_gunner setvariable ["twc_mortar_lastfired", time]; 
_skill = (0.5 + (skill _gunner));


_testdev = missionnamespace getvariable ["walkvar", 20];

_startdev = _testdev / _type;
_natdev = _testdev / _type;

_twc_mortar_acc1 = "twc_mortar_acc1" + _weapon;
_twc_mortar_acc2 = "twc_mortar_acc2" + _weapon;
_twc_mortar_acc3 = "twc_mortar_acc3" + _weapon;



_master = _gunner;


_nataccmult = 1 * _type;
_biggun = 1;

//exempting the 20mm grenade because an insurgency weapon uses it and needs to be inaccurate
if (!((typeof _projectile) == "G_20mm_HE")) then {
	if (_weapon iskindof ["cannon_120mm", configFile >> "CfgWeapons"]) then {
		_nataccmult = 0.2;
		_biggun = 2;
	} else {
		if (_weapon iskindof ["Mgun", configFile >> "CfgWeapons"]) then {
			_nataccmult = 0.6;
		};
	};
};
_batterysize = 1;

_nataccinit = ((4 / (0.5 + (_skill / 2))) * (1 + ((_batterysize) / 30))) * _nataccmult;
_natacc = ((random _nataccinit) - (_nataccinit / 2));
_natacc2 = ((random _nataccinit) - (_nataccinit / 2));
_natacc3 = ((random _nataccinit) - (_nataccinit / 1.7));

_mod1 = _master getvariable [_twc_mortar_acc1, ((_startdev) / _skill)];
_mod2 = _master getvariable [_twc_mortar_acc2, ((_startdev) / _skill)];
_mod3 = _master getvariable [_twc_mortar_acc3, ((_startdev) / _skill)];

_learncoef = 0.15 * _skill * ((_type - 0.5) * 2) * (_biggun * _biggun);

_margin = _gunner getvariable ["twc_firerate", 0.3];
if (((time - _prev) < 0.3) && (_margin == 0.3)) then {_gunner setvariable ["twc_firerate", (time - _prev)];};

_bursttime = (_gunner getvariable ["twc_firerate", 0.3]) * 2;

if (_margin < 0.1) then {_bursttime = 0.3};

// if it's more than a burst time since last firing, it's enough time for correction, with a small chance of overcorrection
if (((time - _prev) > _bursttime) && (_master == _gunner)) then {
	//systemchat "I am learning";
	_ranmult = 1;
	if ((random 1) < 0.2) then {
		_ranmult = -1;
	};
	_gunner setvariable [_twc_mortar_acc1, (_mod1 / (1.3 + (random _learncoef))) * _ranmult];
	_ranmult = 1;
	
	_flipchance = 0.2;
	
	if ((_master getvariable [_twc_mortar_acc3, 0]) < 0) then {
		_flipchance = 0.5;
	};
	if ((random 1) < _flipchance) then {
		_ranmult = -1;
	};
	_gunner setvariable [_twc_mortar_acc2, (_mod1 / (1.3 + (random _learncoef))) * _ranmult];
	_ranmult = 1;
	if ((random 1) < 0.2) then {
		_ranmult = -1;
	};
	_gunner setvariable [_twc_mortar_acc3, (_mod1 / (1.3 + (random _learncoef))) * _ranmult];
} else {
//systemchat "I am not learning";
};



// if it's more than an hour since last firing, it's too much time and the modifier needs a reset

if ((time - _prev) > 200) then {
	
	_gunner setvariable [_twc_mortar_acc1, ((_startdev) / _skill)];
	_gunner setvariable [_twc_mortar_acc2, ((_startdev) / _skill)];
	_gunner setvariable [_twc_mortar_acc3, ((_startdev) / _skill)];
};

_mod1 = _master getvariable [_twc_mortar_acc1, (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];
_mod2 = _master getvariable [_twc_mortar_acc2, (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];
_mod3 = _master getvariable [_twc_mortar_acc3, (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];

_speedmod = 1 - (0.5 / (((speed _projectile) + 1) / 500));

_projectile setvelocity [(velocity _projectile select 0) + ((_natacc + _mod1) / (0.7 * (_type))), (velocity _projectile select 1) + ((_natacc2 + _mod2) / (0.7 * (_type))), (velocity _projectile select 2) + (((_natacc3 / 1) + _mod3)/ _speedmod)];

