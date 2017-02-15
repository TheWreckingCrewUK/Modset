//Has player load basic gear into arsenal ammo box. gets it from missionNamspaceVariable

[arsenalAmmoBox,arsenalAmmoBoxWeapons,false] call Bis_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,arsenalAmmoBoxMagazines,false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,arsenalAmmoBoxItems,false] call Bis_fnc_addVirtualItemCargo;
[arsenalAmmoBox,arsenalAmmoBoxBackpacks,false] call Bis_fnc_addVirtualBackpackCargo;

if (!isNil "commander1" && {player == commander1}) then {
	execVM "client\arsenal\commander.sqf";
};