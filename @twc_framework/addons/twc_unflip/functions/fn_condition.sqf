params [["_vehicle", objNull, [objNull]]];

if !(alive _vehicle) exitWith { false };

private _requiredUnits = _vehicle call TWC_Unflip_fnc_requiredAmount;
if (_requiredUnits > 5) exitWith { false };

private _canFlipConfig = [(configFile >> "CfgVehicles" >> typeOf (_vehicle)), "TWC_canFlip", 1] call BIS_fnc_returnConfigEntry;
private _canFlipVariable = _vehicle getVariable ["TWC_canFlip", 1];

((getMass _vehicle <= (1000 * _requiredUnits)) && (_canFlipConfig > 0 || _canFlipVariable > 0))