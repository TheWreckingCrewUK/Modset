//Has player load basic gear into arsenal ammo box. gets it from missionNamspaceVariable

[arsenalAmmoBox,[""],false] call Bis_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["FirstAidKit","HandGrenade","SmokeShell","Chemlight_green"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["ItemMap","ItemCompass","ItemWatch"],false] call Bis_fnc_addVirtualItemCargo;