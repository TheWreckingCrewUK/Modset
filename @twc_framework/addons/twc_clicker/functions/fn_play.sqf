params ["_player"];

// no clicker, no click
if (({_x isKindOf ["TWC_Item_Clicker_1", configFile >> "CfgWeapons"]} count (items _player)) < 1) exitWith { false };

[_player, "TWC_Item_Clicker_1"] call twc_medical_fnc_removeMedicalItem;
[_player, "TWC_Sound_Clicker_1"] remoteExecCall ["say3D"];
["TWC_Clicker_Sounded", _player] call CBA_fnc_localEvent;