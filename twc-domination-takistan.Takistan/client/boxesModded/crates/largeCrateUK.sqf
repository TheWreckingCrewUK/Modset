/*
*    TWC public sevrer
*   Sling loadable ammo crates
*
*  Paddock Change all ammo boxes to have the correct ammo and weapons
*
*
*/


_boxClass = "B_supplyCrate_F";

_box = _boxClass createVehicle (getPos ammoCrateSpawnPad);

clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearitemCargoGlobal _box;

//Weapons
_box AddWeaponCargoGlobal ["rhs_weap_m72a7",4];


//BritishAmmoBox
//supplies
_box AddMagazineCargoGlobal ["UK3CB_BAF_762_100Rnd_T",2];
_box AddMagazineCargoGlobal ["UK3CB_BAF_762_100Rnd",5];

_box AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd",30];
_box AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd_T",10];

_box AddMagazineCargoGlobal ["UGL_FlareWhite_F",10];
_box AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",20];
_box AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",10];

_box AddMagazineCargoGlobal ["UK3CB_BAF_556_200Rnd",5];
_box AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd_T",2];

_box AddMagazineCargoGlobal ["UK3CB_BAF_762_L42A1_20Rnd_T",5];
_box AddMagazineCargoGlobal ["UK3CB_BAF_762_L42A1_20Rnd",10];

_box AddMagazineCargoGlobal ["UK3CB_BAF_9_17Rnd",20];
_box AddMagazineCargoGlobal ["UK3CB_BAF_12G_Pellets",15];
_box AddMagazineCargoGlobal ["UK3CB_BAF_12G_Slugs",15];

_box addItemCargoGlobal ["ACE_fieldDressing",40];
_box addItemCargoGlobal ["ACE_elasticBandage",40];
_box addItemCargoGlobal ["ACE_quikclot",40];
_box addItemCargoGlobal ["ACE_packingBandage",40];
_box addItemCargoGlobal ["ACE_personalAidKit",10];
_box addItemCargoGlobal ["ACE_salineIV_500",5];
_box addItemCargoGlobal ["ACE_atropine",10];
_box addItemCargoGlobal ["ACE_epinephrine",10];
_box addItemCargoGlobal ["ACE_morphine",10];

//Respawn/Despawn Script

_trg = createTrigger ["EmptyDetector", getPos ammoCrateSpawnPad];
_trg setTriggerArea [5,5,0,false];
_trg setTriggerActivation ["WEST", "NOT PRESENT", false];
_trg setTriggerTimeout [1800,1800,1800,true];
_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'UK3CB_BAF_Static_Weapons_Box'; deleteVehicle _box;",""];
_trg attachTo [_box];