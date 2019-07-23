params ["_player"];

// no clicker, no click
if (({_x isKindOf ["TWC_Item_Clicker_1", configFile >> "CfgWeapons"]} count (items _caller)) < 1) exitWith { false };

[_caller, "TWC_Item_Clicker_1"] call twc_medical_fnc_removeMedicalItem;
["TWC_Clicker_Sounded", _player] call CBA_fnc_localEvent;