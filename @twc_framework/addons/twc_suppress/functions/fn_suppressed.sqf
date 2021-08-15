params ["_unit", "_distance", "_shooter", "_instigator", "_ammoObject", "_ammoClassName", "_ammoConfig"];

// the new EH from BI (includes overhead/pass-by, defined by CfgAmmo suppress radius (may need investigating this!))
// same side suppression is ignored by this EH, unless side is set hostile to itself via mission
if !(hasInterface) exitWith {};

_hit = [_ammoClassName, format ["twc_sup_cache_%1", _ammoClassName]] call TWC_Suppress_fnc_readCache;
if (_hit == 0) exitWith {};

TWC_Suppress_Queue pushBack [_ammoObject, _distance, _hit];