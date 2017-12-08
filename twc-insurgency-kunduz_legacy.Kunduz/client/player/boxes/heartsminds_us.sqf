/*
*    TWC public sevrer
*   
*
*  Zeus event box with various items to help with hearts and minds efforts.
*	Spawnable by the QM and the SL's
* US Version, without berets
*/
_boxClass = "ACE_Box_Ammo";

_box = _boxClass createVehicle (getPos ammoCrateSpawnPad);

clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearitemCargoGlobal _box;


//supplies


_box addItemCargoGlobal ["ACE_Banana",20];
_box addItemCargoGlobal ["ACE_bodyBag",20];
_box addItemCargoGlobal ["ItemGPS",5];
_box addItemCargoGlobal ["ItemMap",20];
_box addItemCargoGlobal ["CUP_Item_Money",20];

[player, _box] call ace_cargo_fnc_startLoadIn;