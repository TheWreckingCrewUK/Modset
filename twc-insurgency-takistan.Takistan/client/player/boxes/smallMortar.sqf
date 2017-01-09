/*
*    TWC public server
*   Sling loadable ammo crates
*
*  Paddock Change all ammo boxes to have the correct ammo and weapons
*
*
*/


_boxClass = "UK3CB_BAF_SupplyCrate_Ammo";

_box = _boxClass createVehicle (getPos heavySpawnPad);

clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearitemCargoGlobal _box;

//1 Mortar and Tripod
_box AddWeaponCargoGlobal ["UK3CB_BAF_Tripod",1];
_box AddWeaponCargoGlobal ["UK3CB_BAF_M6",1];

//Ammo

_box addItemCargoGlobal ["UK3CB_BAF_1Rnd_60mm_Mo_Shells",30];
_box addItemCargoGlobal ["UK3CB_BAF_1Rnd_60mm_Mo_Flare_White",10];
_box addItemCargoGlobal ["UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",10];

//Respawn/Despawn Script

_trg = createTrigger ["EmptyDetector", getPos heavySpawnPad];
_trg setTriggerArea [5,5,0,false];
_trg setTriggerActivation ["WEST", "NOT PRESENT", false];
_trg setTriggerTimeout [1800,1800,1800,true];
_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'UK3CB_BAF_SupplyCrate_Ammo'; deleteVehicle _box;",""];
_trg attachTo [_box];