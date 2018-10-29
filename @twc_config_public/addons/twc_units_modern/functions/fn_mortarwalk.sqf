params ["_projectile", "_gunner"];

_prev = _gunner getvariable ["twc_mortar_lastfired", 0]; 
//systemchat format ["%1", _gunner];
_gunner setvariable ["twc_mortar_lastfired", time]; 
_skill = (0.5 + (skill _gunner));

_devmod = (_gunner getvariable ["twc_mortar_error", 1]) + 0.01;

_prevdevmod = (_gunner getvariable ["twc_mortar_error_prev", 1]) + 0.01;

_startdev = 10 * _devmod;
_natdev = 10 * _devmod;


if (!(_devmod == _prevdevmod)) then {

	_devdiff = 1.002 + _prevdevmod - _devmod;

	_mod1 = _gunner getvariable ["twc_mortar_acc1", ((_startdev + (random _natdev)) / _skill) min _natdev];
	_mod2 = _gunner getvariable ["twc_mortar_acc2", ((_startdev + (random _natdev)) / _skill) min _natdev];
	_mod3 = _gunner getvariable ["twc_mortar_acc3", ((_startdev + (random _natdev)) / _skill) min _natdev];

	_gunner setvariable ["twc_mortar_acc1", (((_mod1 * _devdiff) min _natdev) max (_natdev * -1))];
	_gunner setvariable ["twc_mortar_acc2", (((_mod2 * _devdiff) min _natdev) max (_natdev * -1))];
	_gunner setvariable ["twc_mortar_acc3", (((_mod3 * _devdiff) min _natdev) max (_natdev * -1))];
	
};

_mortartype = typeof (vehicle _gunner);
//systemchat format ["%1", _mortartype];

_battery = (getpos _gunner) nearobjects [_mortartype, 100];

_batterysize = count _battery;

_master = _gunner;
{
	if (!((gunner _x) == _gunner)) then {
		_var =  (gunner _x) getvariable ["twc_mortar_acc1", 99];
		_vartime = (gunner _x) getvariable ["twc_mortar_lastfired", 9999999];
		//systemchat format ["I am %1", _var];
		if ((!(_var == 99)) && ((time - _vartime) < 30)) then {_master = gunner _x; 
		//systemchat format ["I am %1 and my master is %2", _gunner, _master];
		};
	};
} foreach _battery;

if (_master == _gunner) then {systemchat "I am the captain of my soul";};

_nataccinit = (4 / (0.5 + (_skill / 2))) * (1 + ((_batterysize) / 20));
_natacc = ((random _nataccinit) - (_nataccinit / 2));
_natacc2 = ((random _nataccinit) - (_nataccinit / 2));
_natacc3 = ((random _nataccinit) - (_nataccinit / 2));

_mod1 = _master getvariable ["twc_mortar_acc1", ((_startdev + (random _natdev)) / _skill) min _natdev];
_mod2 = _master getvariable ["twc_mortar_acc2", ((_startdev + (random _natdev)) / _skill) min _natdev];
_mod3 = _master getvariable ["twc_mortar_acc3", ((_startdev + (random _natdev)) / _skill) min _natdev];

_learncoef = 0.5 * _skill;

// if it's more than a minute since last firing, it's enough time for correction, with a small chance of overcorrection
if (((time - _prev) > 30) && (_master == _gunner)) then {
	///systemchat "I am learning";
	_ranmult = 1;
	if ((random 1) < 0.2) then {
		_ranmult = -1;
	};
	_gunner setvariable ["twc_mortar_acc1", (_mod1 / (1.2 + (random _learncoef))) * _ranmult];
	_ranmult = 1;
	if ((random 1) < 0.2) then {
		_ranmult = -1;
	};
	_gunner setvariable ["twc_mortar_acc2", (_mod1 / (1.2 + (random _learncoef))) * _ranmult];
	_ranmult = 1;
	if ((random 1) < 0.2) then {
		_ranmult = -1;
	};
	_gunner setvariable ["twc_mortar_acc3", (_mod1 / (1.2 + (random _learncoef))) * _ranmult];
} else {
//systemchat "I am not learning";
};

if (!(_gunner == _master)) then {

_mod1 = _master getvariable ["twc_mortar_acc1", (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];
_mod2 = _master getvariable ["twc_mortar_acc2", (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];
_mod3 = _master getvariable ["twc_mortar_acc3", (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];
	
_gunner setvariable ["twc_mortar_acc1", _mod1];
_gunner setvariable ["twc_mortar_acc2", _mod2];
_gunner setvariable ["twc_mortar_acc3", _mod3];
};

// if it's more than an hour since last firing, it's too much time and the modifier needs a reset

if ((time - _prev) > 3600) then {
	
	_gunner setvariable ["twc_mortar_acc1", ((_startdev + (random _natdev)) / _skill) min _natdev];
	_gunner setvariable ["twc_mortar_acc2", ((_startdev + (random _natdev)) / _skill) min _natdev];
	_gunner setvariable ["twc_mortar_acc3", ((_startdev + (random _natdev)) / _skill) min _natdev];
};

_mod1 = _master getvariable ["twc_mortar_acc1", (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];
_mod2 = _master getvariable ["twc_mortar_acc2", (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];
_mod3 = _master getvariable ["twc_mortar_acc3", (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];

_projectile setvelocity [(velocity _projectile select 0) + _natacc + _mod1, (velocity _projectile select 1) + _natacc2 + _mod2, (velocity _projectile select 2) + (_natacc3 / 0.5) + _mod3];

