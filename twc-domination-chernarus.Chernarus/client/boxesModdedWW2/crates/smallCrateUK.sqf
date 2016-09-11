/*
*    TWC public sevrer
*   Sling loadable ammo crates
*
*  Paddock Change all ammo boxes to have the correct ammo and weapons
*
*
*/


_boxClass = "UK3CB_BAF_Static_Weapons_Box";

_box = _boxClass createVehicle (getPos ammoCrateSpawnPad);

clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearitemCargoGlobal _box;

//Weapons
_box AddWeaponCargoGlobal ["rhs_weap_m72a7",2];


//supplies
_box AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",1];
_box AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",3];

_box AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd",20];
_box AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd_T",5];

_box AddMagazineCargoGlobal ["UGL_FlareWhite_F",5];
_box AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",20];
_box AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",5];

_box AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd",3];
_box AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd_T",1];

_box AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd_T",2];
_box AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd",5];

_box AddMagazineCargoGlobal ["UK3CB_BAF_17Rnd_9mm",10];
_box AddMagazineCargoGlobal ["UK3CB_BAF_L128A1_Pellets",8];
_box AddMagazineCargoGlobal ["UK3CB_BAF_L128A1_Slugs",8];

_box addItemCargoGlobal ["ACE_fieldDressing",20];
_box addItemCargoGlobal ["ACE_elasticBandage",20];
_box addItemCargoGlobal ["ACE_quikclot",20];
_box addItemCargoGlobal ["ACE_packingBandage",20];
_box addItemCargoGlobal ["ACE_personalAidKit",5];
_box addItemCargoGlobal ["ACE_salineIV_500",3];
_box addItemCargoGlobal ["ACE_atropine",5];
_box addItemCargoGlobal ["ACE_epinephrine",5];
_box addItemCargoGlobal ["ACE_morphine",5];

//Respawn/Despawn Script

_trg = createTrigger ["EmptyDetector", getPos ammoCrateSpawnPad];
_trg setTriggerArea [5,5,0,false];
_trg setTriggerActivation ["WEST", "NOT PRESENT", false];
_trg setTriggerTimeout [1800,1800,1800,true];
_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'UK3CB_BAF_Static_Weapons_Box'; deleteVehicle _box;",""];
_trg attachTo [_box];