/*
*    TWC Training Mission
*   1990 Training Selection
*
*  Will Change all ammo boxes to have the correct ammo and weapons
*
*
*/

_RangeBoxRifle = RangeAmmoBoxRifle, RangeAmmoBoxRifle1, RangeAmmoBoxRifle2;
_RangeBoxAT = RangeAmmoBoxAT, RangeAmmoBoxAT1, RangeAmmoBoxAT2;

//clearing
clearWeaponCargoGlobal _RangeBoxRifle;
clearBackpackCargoGlobal _RangeBoxRifle;
clearMagazineCargoGlobal _RangeBoxRifle;
clearitemCargoGlobal _RangeBoxRifle;

clearWeaponCargoGlobal _RangeBoxAT;
clearBackpackCargoGlobal _RangeBoxAT;
clearMagazineCargoGlobal _RangeBoxAT;
clearitemCargoGlobal _RangeBoxAT;


//Range Box
//Weapons
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L85A2",40];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_UGL",40];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L86A1",40];

_RangeBoxAT AddWeaponCargoGlobal ["tf47_m3maaws",20];
_RangeBoxAT AddWeaponCargoGlobal ["HAFM_LAW",20];


//Ammo
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd",200];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd_T",200];
_RangeBoxAT AddMagazineCargoGlobal ["tf47_m3maaws_HEAT",40];
_RangeBoxAT AddMagazineCargoGlobal ["tf47_m3maaws_HE",40];
_RangeBoxAT AddMagazineCargoGlobal ["tf47_m3maaws_SMOKE",40];
_RangeBoxAT AddMagazineCargoGlobal ["tf47_m3maaws_ILLUM",40];

//items
_RangeBoxRifle AddItemCargoGlobal ["UK3CB_BAF_SUSAT_3D",40];
_RangeBoxRifle AddItemCargoGlobal ["UK3CB_BAF_Eotech",20];
_RangeBoxAT AddItemCargoGlobal ["tf47_optic_m3maaws",20];



