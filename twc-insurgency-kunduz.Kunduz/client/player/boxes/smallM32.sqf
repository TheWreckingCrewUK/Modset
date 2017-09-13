/*
*    TWC public sevrer
*   Sling loadable ammo crates
*
*  Paddock Change all ammo boxes to have the correct ammo and weapons
*
*
*/
_boxClass = "ACE_Box_Ammo";

_box = _boxClass createVehicle (getPos ammoCrateSpawnPad);

clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearitemCargoGlobal _box;

//Weapons
_box AddWeaponCargoGlobal ["rhs_weap_m32",2];


//supplies
_box AddMagazineCargoGlobal ["rhsusf_mag_6Rnd_M441_HE",10];
_box AddMagazineCargoGlobal ["rhsusf_mag_6Rnd_M715_green",10];

_box AddMagazineCargoGlobal ["rhsusf_mag_6Rnd_M715_white",10];
//_box AddMagazineCargoGlobal ["rhsusf_mag_6Rnd_M715_red",10];

[player, _box] call ace_cargo_fnc_startLoadIn;