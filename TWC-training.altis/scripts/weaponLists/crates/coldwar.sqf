/*
*    TWC Training Mission
*   Cold War Training Selection
*
*  Will Change all ammo boxes to have the correct ammo and weapons
*
*
*/

_RangeBoxRifle = RangeAmmoBoxRifle;
_RangeBoxAT = RangeAmmoBoxAT;
_Parachute = ParaChuteBox;
_Radio = RadioBox;

//clearing
clearWeaponCargoGlobal _RangeBoxRifle;
clearBackpackCargoGlobal _RangeBoxRifle;
clearMagazineCargoGlobal _RangeBoxRifle;
clearitemCargoGlobal _RangeBoxRifle;

clearWeaponCargoGlobal _RangeBoxAT;
clearBackpackCargoGlobal _RangeBoxAT;
clearMagazineCargoGlobal _RangeBoxAT;
clearitemCargoGlobal _RangeBoxAT;

clearWeaponCargoGlobal _Parachute;
clearBackpackCargoGlobal _Parachute;
clearMagazineCargoGlobal _Parachute;
clearitemCargoGlobal _Parachute;

clearWeaponCargoGlobal _Radio;
clearBackpackCargoGlobal _Radio;
clearMagazineCargoGlobal _Radio;
clearitemCargoGlobal _Radio;


//Range Box
//Weapons
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L7A2",20];
_RangeBoxRifle AddWeaponCargoGlobal ["hlc_rifle_SLR",20];
_RangeBoxRifle AddWeaponCargoGlobal ["rhsusf_weap_m1911a1",20];
_RangeBoxAT AddWeaponCargoGlobal ["tf47_m3maaws",20];
_RangeBoxAT AddWeaponCargoGlobal ["HAFM_LAW",20];

//Ammo
_RangeBoxRifle AddMagazineCargo ["UK3CB_BAF_75Rnd_T"10];
_RangeBoxRifle AddMagazineCargo ["UK3CB_BAF_75Rnd",10];
_RangeBoxRifle AddMagazineCargo ["hlc_20Rnd_762x51_B_fal",25];
_RangeBoxRifle AddMagazineCargo ["hlc_20Rnd_762x51_T_fal",25];
_RangeBoxRifle AddMagazineCargo ["rhsusf_mag_7x45acp_MHP",20];
_RangeBoxAT AddMagazineCargo ["tf47_m3maaws_HEAT",10];
_RangeBoxAT AddMagazineCargo ["tf47_m3maaws_HE",10];
_RangeBoxAT AddMagazineCargo ["tf47_m3maaws_SMOKE",10];
_RangeBoxAT AddMagazineCargo ["tf47_m3maaws_ILLUM",10];

//items
_RangeBoxAT additemcargoglobal ["tf47_optic_m3maaws",20];

//Parachute
_RangeBox AddBackPackCargoGlobal ["ACE_NonSteerableParachute",40];

//Radio Box
_RangeBox AddBackPackCargoGlobal ["tf_rt1523g_green",40];
