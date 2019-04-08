params [["_vehicle", objNull, [objNull]]];

if !(alive _vehicle) exitWith { false };

private _requiredUnits = _vehicle call TWC_Unflip_fnc_requiredAmount;
if (_requiredUnits > 5) exitWith { false };

private _canFlip = [(configFile >> "CfgVehicles" >> typeOf (_vehicle)), "TWC_canFlip", 1] call BIS_fnc_returnConfigEntry;

((getMass _vehicle <= (1500 * _requiredUnits)) && _canFlip > 0)