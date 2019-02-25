params ["_target", "_player", "_magazineClassname"];

if (isNil "_magazineClassname" || {_magazineClassname == ""}) exitWith {
	diag_log text format ['[%1] (%2) %3: %4', toUpper 'ace', 'magazinerepack', 'ERROR', format ['%1 %2:%3', "Bad Mag Classname", "z\ace\addons\magazinerepack\functions\fnc_startRepackingMagazine.sqf", 23 + 1]];
};

if !([_player, objNull, ["isNotInside", "isNotSwimming", "isNotSitting"]] call ace_common_fnc_canInteractWith) exitWith {};

private _magazineCfg = configFile >> "CfgMagazines" >> _magazineClassname;
private _fullMagazineCount = getNumber (_magazineCfg >> "count");
private _isBelt = isNumber (_magazineCfg >> "ACE_isBelt") && {(getNumber (_magazineCfg >> "ACE_isBelt")) == 1};
private _startingMagazineCount = {(_x select 0) == _magazineClassname && (_x select 1) > 0} count ([_player] call TWC_Magazines_fnc_magazineDetails);

[_player] call ace_common_fnc_goKneeling;
private _startingAmmoCounts = [];

{
	_x params ["_xClassname", "_xCount", "_xLoaded", "_xType"];
	
	if (_xClassname == _magazineClassname && {_xCount != _fullMagazineCount && {_xCount > 0}}) then {
		if (_xLoaded) then {

			if (_player canAdd _magazineClassname) then {
				switch (_xType) do {
					case (1): { _player removePrimaryWeaponItem _magazineClassname };
					case (2): { _player removeHandgunItem _magazineClassname };
					case (4): { _player removeSecondaryWeaponItem _magazineClassname };
					default {
						diag_log text format ['[%1] (%2) %3: %4', toUpper 'ace', 'magazinerepack', 'ERROR', format ['%1 %2:%3', "Loaded Location Invalid", "z\ace\addons\magazinerepack\functions\fnc_startRepackingMagazine.sqf", 46 + 1]];
					};
				};

				_player addMagazine [_magazineClassname, _xCount];
				_startingAmmoCounts pushBack _xCount;
			};
		} else {
			_startingAmmoCounts pushBack _xCount;
		};
	};
} forEach (magazinesAmmoFull _player);

if (count _startingAmmoCounts < 2) exitWith {
	diag_log text format ['[%1] (%2) %3: %4', toUpper 'ace', 'magazinerepack', 'ERROR', format ['%1 %2:%3', "Not Enough Mags to Repack", "z\ace\addons\magazinerepack\functions\fnc_startRepackingMagazine.sqf", 57 + 1]];
};

private _simEvents = [_fullMagazineCount, _startingAmmoCounts, _isBelt] call twc_magazines_fnc_simulateRepackEvents;
private _totalTime = _simEvents select (count _simEvents - 1) select 0;

[
	_totalTime,
	[_magazineClassname, _startingAmmoCounts, _simEvents, _startingMagazineCount],
	{_this call twc_magazines_fnc_magazineRepackFinish},
	{_this call twc_magazines_fnc_magazineRepackFinish},
	(localize "STR_ace_magazinerepack_RepackingMagazine"),
	{_this call twc_magazines_fnc_magazineRepackProgress},
	["isNotInside", "isNotSwimming", "isNotSitting"]
] call ace_common_fnc_progressBar;