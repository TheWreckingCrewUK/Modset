// wrapper for locality on cleaning a corpse for bloodlust compat
// [_unit] call TWC_Medical_fnc_cleanCorpse;
params ["_unit"];

removeAllItems _unit;
removeAllWeapons _unit;
removeAllAssignedItems _unit;
_unit removeWeaponGlobal "Binocular";
_unit removeItems "ItemMap";

deleteVehicle (nearestObject [_unit, "WeaponHolderSimulated"]);