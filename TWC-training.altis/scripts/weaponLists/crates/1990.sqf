/*
*    TWC Training Mission
*   1990 Training Selection
*
*  Will Change all ammo boxes to have the correct ammo and weapons
*
*
*/

_RangeBoxRifle = RangeAmmoBoxRifle;
_RangeBoxAT = RangeAmmoBoxAT;
_RangeBoxSniper = RangeAmmoBoxSniper;
_RangeBoxGrenade = RangeAmmoGrenade;
_RangeBoxMedic = RangeAmmoBoxMedic;
_CrewServedWepons = CrewBox;
_Parachute = ParaChuteBox;
_RadioBox = RadioBox;

//clearing
clearWeaponCargoGlobal _RangeBoxRifle;
clearBackpackCargoGlobal _RangeBoxRifle;
clearMagazineCargoGlobal _RangeBoxRifle;
clearitemCargoGlobal _RangeBoxRifle;

clearWeaponCargoGlobal _RangeBoxAT;
clearBackpackCargoGlobal _RangeBoxAT;
clearMagazineCargoGlobal _RangeBoxAT;
clearitemCargoGlobal _RangeBoxAT;

clearWeaponCargoGlobal _RangeBoxGrenade;
clearBackpackCargoGlobal _RangeBoxGrenade;
clearMagazineCargoGlobal _RangeBoxGrenade;
clearitemCargoGlobal _RangeBoxGrenade;

clearWeaponCargoGlobal _RangeBoxMedic;
clearBackpackCargoGlobal _RangeBoxMedic;
clearMagazineCargoGlobal _RangeBoxMedic;
clearitemCargoGlobal _RangeBoxMedic;

clearWeaponCargoGlobal _Parachute;
clearBackpackCargoGlobal _Parachute;
clearMagazineCargoGlobal _Parachute;
clearitemCargoGlobal _Parachute;

clearWeaponCargoGlobal _RadioBox;
clearBackpackCargoGlobal _RadioBox;
clearMagazineCargoGlobal _RadioBox;
clearitemCargoGlobal _RadioBox;

clearWeaponCargoGlobal _CrewServedWepons;
clearBackpackCargoGlobal _CrewServedWepons;
clearMagazineCargoGlobal _CrewServedWepons;
clearitemCargoGlobal _CrewServedWepons;


//Range Box
//Weapons
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L85A1",40];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_UGL",40];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L86A",40];

_RangeBoxAT AddWeaponCargoGlobal ["tf47_m3maaws",20];
_RangeBoxAT AddWeaponCargoGlobal ["HAFM_LAW",20];


//Ammo
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd",200];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd_T",200];

//items
_RangeBoxRifle AddItemCargoGlobal ["UK3CB_BAF_SUSAT_3D",40];
_RangeBoxRifle AddItemCargoGlobal ["UK3CB_BAF_Eotech",20];
_RangeBoxAT AddItemCargoGlobal ["tf47_optic_m3maaws",20];


_RangeBoxSniper AddItemCargoGlobal ["ACE_Kestrel4500",8];
_RangeBoxSniper AddItemCargoGlobal ["ACE_SpottingScope",8];
_RangeBoxSniper AddItemCargoGlobal  ["ACE_Vector",8];
_RangeBoxSniper AddItemCargoGlobal  ["ACE_MX2A",8];
_RangeBoxSniper AddItemCargoGlobal ["ACE_DAGR",8];
_RangeBoxSniper AddItemCargoGlobal ["rhsusf_acc_LEUPOLDMK4",8];
_RangeBoxSniper AddItemCargoGlobal ["optic_LRPS",8];

_RangeBoxMedic AddItemCargoGlobal ["ACE_morphine", 80];
_RangeBoxMedic AddItemCargoGlobal ["ACE_fieldDressing", 80];
_RangeBoxMedic AddItemCargoGlobal ["ACE_epinephrine",80];
_RangeBoxMedic AddItemCargoGlobal ["ACE_bloodIV",80];
_RangeBoxMedic AddItemCargoGlobal ["ACE_bodyBag",100];

_CrewServedWepons AddItemCargoGlobal ["ACE_EarPlugs",20];
_CrewServedWepons AddItemCargoGlobal ["ACE_MapTools",20];
_CrewServedWepons AddItemCargoGlobal ["ACE_RangeTable_82mm",20];
_CrewServedWepons AddItemCargoGlobal ["UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D",20];

//Parachute
_Parachute AddBackPackCargoGlobal ["ACE_NonSteerableParachute",40];

//Radio Box
_Radio AdditemCargoGlobal ["ACRE_PRC117F",40];
_Radio AdditemCargoGlobal ["CUP_B_Bergen_BAF",40];
_Radio AdditemCargoGlobal ["ACE_EarPlugs",40];

