params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_magazineClassname", "_startingAmmoCounts", "_simEvents", "_emptiesTo", "_startingMagazineCount", "_startingLooseCount", "_startingLooseAmmoPiles"];

if !((_simEvents select 0) params ["_nextEventTime", "_nextEventIsBullet", "_nextEventMags", "_nextEventIsNewPile", "_nextLoosePile"]) exitWith {};

// _time, false, +_arrayOfLooseAmmoCounts, false, +_arrayOfLooseAmmoCounts]

if (_nextEventTime > _elapsedTime) exitWith { true };

private _currentAmmoCount = [];
private _currentLooseCount = [];

{
	_x params ["_xClassname", "_xCount"];

	if (_xClassname == _magazineClassname) then {
		_currentAmmoCount pushBack _xCount;
	};
	
	if (_xClassname == _emptiesTo) then {
		_currentLooseCount pushBack _xCount;
	};
} forEach ([ACE_player] call TWC_Magazines_fnc_magazineDetails);


private _addedMagazines = +_currentAmmoCount;
private _addedLoosePiles = +_currentLooseCount;

private _missingAmmo = false;
private _missingLoose = false;

{
	private _index = _addedMagazines find _x;

	if (_index != -1) then {
		_addedMagazines deleteAt _index;
	} else {
		_missingAmmo = true;
	};
} forEach _startingAmmoCounts;

{
	private _loindex = _addedLoosePiles find _x;

	if (_loindex != -1) then {
		_addedLoosePiles deleteAt _loindex;
	} else {
		_missingLoose = true;
	};
} forEach _startingLooseAmmoPiles;

if (_missingAmmo || _missingLoose) exitWith { false };

private _updateMagazinesOnPlayerFnc = {
	ACE_player removeMagazines _magazineClassname;
	ACE_player removeMagazines _emptiesTo;

	{
		_success = [ACE_player, _magazineClassname, _x, true] call CBA_fnc_addMagazine;
		if !(_success) exitWith { false; };
	} forEach (_addedMagazines + _nextEventMags);
	
	{
		if (_x > 0) then {
			_success = [ACE_player, _emptiesTo, _x, true] call CBA_fnc_addMagazine;
			if !(_success) exitWith { false; };
		};
	} forEach (_addedLoosePiles + _nextLoosePile);

	_args set [1, _nextEventMags];
	_args set [6, _nextLoosePile];
};

// if bullet & no new pile
// if bullet & new pile

// if new mag & no new pile
// if new mage & new pile

if (_nextEventIsBullet) then {
	playSound "ace_magazinerepack_soundRoundFinished";
	
	if ((((count _simEvents) % 5) == 0) || {(count _simEvents) == 1}) then {
		_success = call _updateMagazinesOnPlayerFnc;
		if !(_success) exitWith { false; };
	};
} else {
	playSound "ace_magazinerepack_soundMagazineFinished";
	_success = call _updateMagazinesOnPlayerFnc;
	if !(_success) exitWith { false; };
};

_simEvents deleteAt 0;

true