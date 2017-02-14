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

