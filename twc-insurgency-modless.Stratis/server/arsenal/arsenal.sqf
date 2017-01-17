/*
* Sets up an empty ammobox and only gives current player gear.
* Stops shitty gaming of all sniperinios
* individual player gear is added in the \client\player\init.sqf
*/

arsenalAmmoBox = "B_supplyCrate_F" createVehicle (getMarkerPos "arsenal");

clearWeaponCargoGlobal arsenalAmmoBox;
clearMagazineCargoGlobal arsenalAmmoBox;
clearItemCargoGlobal arsenalAmmoBox;
clearBackpackCargoGlobal arsenalAmmoBox;
publicVariable "arsenalAmmoBox";

["AmmoboxInit",[arsenalAmmoBox,true]] call BIS_fnc_arsenal;
[arsenalAmmoBox,[true],true] call BIS_fnc_removeVirtualWeaponCargo;
[arsenalAmmoBox,[true],true] call BIS_fnc_removeVirtualMagazineCargo;
[arsenalAmmoBox,[true],true] call BIS_fnc_removeVirtualItemCargo;
[arsenalAmmoBox,[true],true] call BIS_fnc_removeVirtualBackpackCargo;

/*
doesn't Work:

[arsenalAmmoBox,["HandGrenade","SmokeShell","Chemlight_green"],true] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["FirstAidKit","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"],true] call Bis_fnc_addVirtualItemCargo;