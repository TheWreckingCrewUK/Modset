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
_box AddWeaponCargoGlobal ["ACE_VMM3",1];

_box addItemCargoGlobal ["SatchelCharge_Remote_Mag",5];
_box addItemCargoGlobal ["DemoCharge_Remote_Mag",5];
_box addItemCargoGlobal ["ACE_M26_Clacker",5];
_box addItemCargoGlobal ["ACE_DefusalKit",5];
_box addItemCargoGlobal ["HandGrenade",5];
_box addItemCargoGlobal ["SmokeShell",5];
_box addItemCargoGlobal ["SmokeShellRed",2];

[player, _box] call ace_cargo_fnc_startLoadIn;