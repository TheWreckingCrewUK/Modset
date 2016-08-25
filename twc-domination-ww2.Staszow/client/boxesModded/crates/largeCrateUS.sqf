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
_box AddWeaponCargoGlobal ["UK3CB_BAF_AT4_CS_AP_Launcher",4];


//USAmmoBox
//supplies

_box AddMagazineCargoGlobal ["30Rnd_556x45_Stanag",40];
_box AddMagazineCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Red",10];

_box AddMagazineCargoGlobal ["UGL_FlareWhite_F",10];
_box AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",40];
_box AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",10];

_box AddMagazineCargoGlobal ["rhsusf_200Rnd_556x45_soft_pouch",10];

_box AddMagazineCargoGlobal ["rhsusf_20Rnd_762x51_m118_special_Mag",10];

_box AddMagazineCargoGlobal ["rhsusf_mag_15Rnd_9x19_JHP",20];
_box AddMagazineCargoGlobal ["rhsusf_8Rnd_00Buck",10];
_box AddMagazineCargoGlobal ["rhsusf_8Rnd_Slug",10];

_box addItemCargoGlobal ["ACE_fieldDressing",40];
_box addItemCargoGlobal ["ACE_elasticBandage",40];
_box addItemCargoGlobal ["ACE_quikclot",40];
_box addItemCargoGlobal ["ACE_packingBandage",40];
_box addItemCargoGlobal ["ACE_personalAidKit",10];
_box addItemCargoGlobal ["ACE_salineIV_500",5];
_box addItemCargoGlobal ["ACE_atropine",10];
_box addItemCargoGlobal ["ACE_epinephrine",10];
_box addItemCargoGlobal ["ACE_morphine",10];

_trg = createTrigger ["EmptyDetector", getPos ammoCrateSpawnPad];
_trg setTriggerArea [5,5,0,false];
_trg setTriggerActivation ["WEST", "NOT PRESENT", false];
_trg setTriggerTimeout [1800,1800,1800,true];
_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'UK3CB_BAF_Static_Weapons_Box'; deleteVehicle _box;",""];
_trg attachTo [_box];