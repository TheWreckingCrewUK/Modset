/*
*    TWC public server
*   Sling loadable ammo crates
*
*  Paddock Change all ammo boxes to have the correct ammo and weapons
*
*
*/


_boxClass = "UK3CB_BAF_Box_L16";

_box = _boxClass createVehicle (getPos ammoCrateSpawnPad);

//clearWeaponCargoGlobal _box;
//clearBackpackCargoGlobal _box;
//clearMagazineCargoGlobal _box;
//clearitemCargoGlobal _box;

//1 Mortar and Tripod
//_box AddWeaponCargoGlobal ["UK3CB_BAF_M6",1];

//Ammo

//_box addItemCargoGlobal ["UK3CB_BAF_1Rnd_60mm_Mo_Shells",50];
//_box addItemCargoGlobal ["UK3CB_BAF_1Rnd_60mm_Mo_Flare_White",10];
//_box addItemCargoGlobal ["UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",10];

//Respawn/Despawn Script

_trg = createTrigger ["EmptyDetector", getPos ammoCrateSpawnPad];
_trg setTriggerArea [5,5,0,false];
_trg setTriggerActivation ["WEST", "NOT PRESENT", false];
_trg setTriggerTimeout [1800,1800,1800,true];
_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'UK3CB_BAF_Box_L16'; deleteVehicle _box;",""];
_trg attachTo [_box];