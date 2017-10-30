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


//supplies
_box AddMagazineCargoGlobal ["UK3CB_BAF_762_200Rnd",10];
_box AddMagazineCargoGlobal ["UK3CB_BAF_762_200Rnd_T",10];

[player, _box] call ace_cargo_fnc_startLoadIn;