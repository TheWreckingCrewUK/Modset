params ["_projectile", "_gunner"];

_prev = _gunner getvariable ["twc_mortar_lastfired", 0]; systemchat format ["%1", _gunner];
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


_nataccinit = (5 / (0.5 + (_skill / 2)));
_natacc = ((random _nataccinit) - (_nataccinit / 2));

_mod1 = _gunner getvariable ["twc_mortar_acc1", ((_startdev + (random _natdev)) / _skill) min _natdev];
_mod2 = _gunner getvariable ["twc_mortar_acc2", ((_startdev + (random _natdev)) / _skill) min _natdev];
_mod3 = _gunner getvariable ["twc_mortar_acc3", ((_startdev + (random _natdev)) / _skill) min _natdev];

_learncoef = 0.5 * _skill;

// if it's more than a minute since last firing, it's enough time for correction, with a small chance of overcorrection
if ((time - _prev) > 30) then {
	systemchat "new mission";
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
};

// if it's more than an hour since last firing, it's too much time and the modifier needs a reset

if ((time - _prev) > 3600) then {
	
	_gunner setvariable ["twc_mortar_acc1", ((_startdev + (random _natdev)) / _skill) min _natdev];
	_gunner setvariable ["twc_mortar_acc2", ((_startdev + (random _natdev)) / _skill) min _natdev];
	_gunner setvariable ["twc_mortar_acc3", ((_startdev + (random _natdev)) / _skill) min _natdev];
};

_mod1 = _gunner getvariable ["twc_mortar_acc1", (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];
_mod2 = _gunner getvariable ["twc_mortar_acc2", (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];
_mod3 = _gunner getvariable ["twc_mortar_acc3", (((random _natdev) / _skill) min _natdev) max (_natdev * -1)];

_projectile setvelocity [(velocity _projectile select 0) + _natacc + _mod1, (velocity _projectile select 1) + _natacc + _mod2, (velocity _projectile select 2) + (_natacc / 4) + _mod3];

