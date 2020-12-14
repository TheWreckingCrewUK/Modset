params ["_target", "_player", "_params"];
_params params ["_magazineClassname", "_emptiesTo", "_numberOf"];

if !([_player, objNull, ["isNotInside", "isNotSwimming", "isNotSitting"]] call ace_common_fnc_canInteractWith) exitWith {};

private _magazineCfg = configFile >> "CfgMagazines" >> _magazineClassname;
private _fullMagazineCount = getNumber (_magazineCfg >> "count");
private _startingMagazineCount = {(_x select 0) == _magazineClassname && (_x select 1) > 0} count ([_player] call TWC_Magazines_fnc_magazineDetails);

private _looseCfg = configFile >> "CfgMagazines" >> _emptiesTo;
private _fullLoosePileCount = getNumber (_looseCfg >> "count");
private _startingLooseCount = {(_x select 0) == _emptiesTo && (_x select 1) > 0} count ([_player] call TWC_Magazines_fnc_magazineDetails);

[_player] call ace_common_fnc_goKneeling;
private _startingAmmoCounts = [];
private _startingLooseAmmoPiles = [];

{
	_x params ["_xClassname", "_xCount", "_xLoaded", "_xType"];
	
	if (_xClassname == _magazineClassname && {_xCount > 0}) then {
		if (_xLoaded) then {
			if (_player canAdd _magazineClassname) then {
				switch (_xType) do {
					case (1): { _player removePrimaryWeaponItem _magazineClassname };
					case (2): { _player removeHandgunItem _magazineClassname };
					case (4): { _player removeSecondaryWeaponItem _magazineClassname };
					default {
						diag_log text format ['[%1] (%2) %3: %4', toUpper 'TWC', 'twc_magazines', 'ERROR', format ['%1 %2:%3', "Loaded Location Invalid", "z\twc_framework\addons\twc_magazines\functions\fnc_startEmptyingMagazine.sqf", 46 + 1]];
					};
				};

				_player addMagazine [_magazineClassname, _xCount];
				_startingAmmoCounts pushBack _xCount;
			};
		} else {
			_startingAmmoCounts pushBack _xCount;
		};
	};
	
	// Do we already have loose ammo for this magazine type?
	if (_xClassname == _emptiesTo) then {
		_startingLooseAmmoPiles pushBack _xCount;
	};
} forEach ([_player, true] call TWC_Magazines_fnc_magazineDetails);

// we'll create an empty pile anyway, so let's make sure we have at least 1 to start with for loops
if ((count _startingLooseAmmoPiles) < 1) then { 
	ACE_Player addMagazine [_emptiesTo, 0];
	_startingLooseAmmoPiles pushBack 0;
};

private _loopCount = (count _startingAmmoCounts) min _numberOf;
private _simEvents = [_fullMagazineCount, _fullLoosePileCount, _startingAmmoCounts, _startingLooseAmmoPiles, _loopCount] call TWC_Magazines_fnc_simulateEmptyEvents;
private _totalTime = _simEvents select (count _simEvents - 1) select 0;

[
	_totalTime,
	[_magazineClassname, _startingAmmoCounts, _simEvents, _emptiesTo, _startingMagazineCount, _startingLooseCount, _startingLooseAmmoPiles],
	{_this call TWC_Magazines_fnc_magazineEmptyFinish},
	{_this call TWC_Magazines_fnc_magazineEmptyFinish},
	"Emptying...",
	{_this call TWC_Magazines_fnc_magazineEmptyProgress},
	["isNotInside", "isNotSwimming", "isNotSitting"]
] call ace_common_fnc_progressBar;