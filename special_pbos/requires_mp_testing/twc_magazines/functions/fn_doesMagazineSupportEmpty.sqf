params ["_magazineClass"];

private _varName = format ["twc_magazine_empty_cache_%1", _magazineClass];
private _var = missionNamespace getVariable [_varName, nil];

if (isNil "_var") then {
	_var = [(configFile >> "CfgMagazines" >> _magazineClass), "TWC_emptiesTo", ""] call BIS_fnc_returnConfigEntry;
	missionNamespace setVariable [_varName, _var, true];
};

if (_var != "") exitWith {
	true;
};

false