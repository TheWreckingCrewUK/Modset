params ["_target", "_player", "_args"];
_args params ["_fillsMagazineClassname", "_looseAmmoClassname"];

if !([_player, objNull, ["isNotInside", "isNotSwimming", "isNotSitting"]] call ace_common_fnc_canInteractWith) exitWith {};

private _magazineCfg = configFile >> "CfgMagazines" >> _fillsMagazineClassname;
private _fullMagazineCount = getNumber (_magazineCfg >> "count");

[_player] call ace_common_fnc_goKneeling;
private _startingMagAmmoCounts = [];
private _startingLooseAmmoCounts = [];

{
	_x params ["_xClassname", "_xCount", "_xLoaded", "_xType"];
	
	if (_xClassname == _fillsMagazineClassname) then {
		_startingMagAmmoCounts pushBack _xCount;
	};
	
	if (_xClassname == _looseAmmoClassname) then {
		_startingLooseAmmoCounts pushBack _xCount;
	};
} forEach ([_player] call TWC_Magazines_fnc_magazineDetails);

private _simEvents = [_fullMagazineCount, _startingMagAmmoCounts, _startingLooseAmmoCounts] call TWC_Magazines_fnc_simulateRefillEvents;
private _totalTime = _simEvents select (count _simEvents - 1) select 0;

[
	_totalTime,
	[_fillsMagazineClassname, _startingMagAmmoCounts, _simEvents, _looseAmmoClassname, _startingLooseAmmoCounts, _fullMagazineCount],
	{_this call TWC_Magazines_fnc_magazineRefillFinish},
	{_this call TWC_Magazines_fnc_magazineRefillFinish},
	"Refilling...",
	{_this call TWC_Magazines_fnc_magazineRefillProgress},
	["isNotInside", "isNotSwimming", "isNotSitting"]
] call ace_common_fnc_progressBar;