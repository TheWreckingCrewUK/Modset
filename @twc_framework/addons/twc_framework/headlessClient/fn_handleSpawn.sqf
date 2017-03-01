params["_object"];

if (!(_object in allUnits) || {isPlayer _object}) exitWith {};

[false] call twc_fnc_rebalance;