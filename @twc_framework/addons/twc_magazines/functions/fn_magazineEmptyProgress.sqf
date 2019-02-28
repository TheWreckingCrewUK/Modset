params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_magazineClassname", "_startingAmmoCounts", "_simEvents", "_startingMagazineCount", "_emptiesTo", "_numberOf"];

if !((_simEvents select 0) params ["_nextEventTime", "_nextEventIsBullet", "_nextEventMags"]) exitWith {};

if (_nextEventTime > _elapsedTime) exitWith { true };

private _currentAmmoCount = [];

{
	_x params ["_xClassname", "_xCount"];

	if (_xClassname == _magazineClassname) then {
		_currentAmmoCount pushBack _xCount;
	};
} forEach ([_player] call TWC_Magazines_fnc_magazineDetails);


private _addedMagazines = +_currentAmmoCount;
private _missingAmmo = false;

{
	private _index = _addedMagazines find _x;

	if (_index != -1) then {
		_addedMagazines deleteAt _index;
	} else {
		_missingAmmo = true;
	};
} forEach _startingAmmoCounts;

if (_missingAmmo) exitWith { false };

private _updateMagazinesOnPlayerFnc = {
	ACE_player removeMagazines _magazineClassname;

	{
		ACE_player addMagazine [_magazineClassname, _x];
	} forEach (_addedMagazines + _nextEventMags);

	_args set [1, _nextEventMags];
};

if (_nextEventIsBullet) then {
	playSound "ace_magazinerepack_soundRoundFinished";
	
	if ((((count _simEvents) % 3) == 0) || {(count _simEvents) == 1}) then {
		call _updateMagazinesOnPlayerFnc;
	};
} else {
	playSound "ace_magazinerepack_soundMagazineFinished";
	call _updateMagazinesOnPlayerFnc;
};

_simEvents deleteAt 0;

true