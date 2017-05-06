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


//Ammunition

_box AddMagazineCargoGlobal ["UK3CB_BAF_127_100Rnd",7];
_box AddMagazineCargoGlobal ["UK3CB_BAF_32Rnd_40mm_G_Box",7];
_box AddMagazineCargoGlobal ["UK3CB_BAF_762_200Rnd_T",9];

//Respawn/Despawn Script

_trg = createTrigger ["EmptyDetector", getPos ammoCrateSpawnPad];
_trg setTriggerArea [5,5,0,false];
_trg setTriggerActivation ["WEST", "NOT PRESENT", false];
_trg setTriggerTimeout [1800,1800,1800,true];
_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'ACE_Box_Ammo'; deleteVehicle _box;",""];
_trg attachTo [_box];