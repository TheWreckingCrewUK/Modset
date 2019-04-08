params ["_ammo", ["_varName", "", [""]]];

private _var = missionNamespace getVariable [_varName, nil];

if (isNil "_var") then {
	_var = [(configFile >> "CfgAmmo" >> _ammo), "hit", 0] call BIS_fnc_returnConfigEntry;
	missionNamespace setVariable [_varName, _var];
};

_var
