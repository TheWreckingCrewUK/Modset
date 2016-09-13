/*
*    TWC Training Mission
*   Cold War Training Selection
*
*  Will Change all ammo boxes to have the correct ammo and weapons
*
*
*/

_RangeBoxRifle = RangeAmmoBoxRifle;
_RangeBoxRifle1 = RangeAmmoBoxRifle2;
_RangeBoxRifle1 = RangeAmmoBoxRifle2;
_RangeBoxAT = RangeAmmoBoxAT;
_RangeBoxAT1 = RangeAmmoBoxAT1;
_RangeBoxAT1 = RangeAmmoBoxAT2;
_Radio = RadioBox;
_RangeBoxMedic = RangeAmmoBoxMedic;
_RangeBoxMedic1 = RangeAmmoBoxMedic1;
_MedicalBox = MedicalBox;

//clearing
clearWeaponCargoGlobal _RangeBoxRifle;
clearBackpackCargoGlobal _RangeBoxRifle;
clearMagazineCargoGlobal _RangeBoxRifle;
clearitemCargoGlobal _RangeBoxRifle;

clearWeaponCargoGlobal _RangeBoxRifle1;
clearBackpackCargoGlobal _RangeBoxRifle1;
clearMagazineCargoGlobal _RangeBoxRifle1;
clearitemCargoGlobal _RangeBoxRifle1;

clearWeaponCargoGlobal _RangeBoxRifle2;
clearBackpackCargoGlobal _RangeBoxRifle2;
clearMagazineCargoGlobal _RangeBoxRifle2;
clearitemCargoGlobal _RangeBoxRifle2;


clearWeaponCargoGlobal _RangeBoxAT;
clearBackpackCargoGlobal _RangeBoxAT;
clearMagazineCargoGlobal _RangeBoxAT;
clearitemCargoGlobal _RangeBoxAT;

clearWeaponCargoGlobal _RangeBoxAT1;
clearBackpackCargoGlobal _RangeBoxAT1;
clearMagazineCargoGlobal _RangeBoxAT1;
clearitemCargoGlobal _RangeBoxAT1;

clearWeaponCargoGlobal _RangeBoxAT2;
clearBackpackCargoGlobal _RangeBoxAT2;
clearMagazineCargoGlobal _RangeBoxAT2;
clearitemCargoGlobal _RangeBoxAT2;

clearWeaponCargoGlobal _Radio;
clearBackpackCargoGlobal _Radio;
clearMagazineCargoGlobal _Radio;
clearitemCargoGlobal _Radio;

clearWeaponCargoGlobal _RangeBoxMedic;
clearBackpackCargoGlobal _RangeBoxMedic;
clearMagazineCargoGlobal _RangeBoxMedic;
clearitemCargoGlobal _RangeBoxMedic;

clearWeaponCargoGlobal _RangeBoxMedic1;
clearBackpackCargoGlobal _RangeBoxMedic1;
clearMagazineCargoGlobal _RangeBoxMedic1;
clearitemCargoGlobal _RangeBoxMedic1;

clearWeaponCargoGlobal _MedicalBox;
clearBackpackCargoGlobal _MedicalBox;
clearMagazineCargoGlobal _MedicalBox;
clearitemCargoGlobal _MedicalBox;

//Range Box
//Weapons
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L7A2",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L1A1",20];
_RangeBoxRifle AddWeaponCargoGlobal ["rhsusf_weap_m1911a1",20];
_RangeBoxAT AddWeaponCargoGlobal ["tf47_m3maaws",20];
_RangeBoxAT AddWeaponCargoGlobal ["HAFM_LAW",20];

//Weapons1
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L7A2",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L1A1",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["rhsusf_weap_m1911a1",20];
_RangeBoxAT1 AddWeaponCargoGlobal ["tf47_m3maaws",20];
_RangeBoxAT1 AddWeaponCargoGlobal ["HAFM_LAW",20];

//Weapons2
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L7A2",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L1A1",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["rhsusf_weap_m1911a1",20];
_RangeBoxAT2 AddWeaponCargoGlobal ["tf47_m3maaws",20];
_RangeBoxAT2 AddWeaponCargoGlobal ["HAFM_LAW",20];

//Ammo
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",40];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",40];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_762_20Rnd",65];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_762_20Rnd_T",65];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_762_20Rnd_Blank",65];
_RangeBoxRifle AddMagazineCargoGlobal ["rhsusf_mag_7x45acp_MHP",60];
_RangeBoxAT AddMagazineCargoGlobal ["tf47_m3maaws_HEAT",40];
_RangeBoxAT AddMagazineCargoGlobal ["tf47_m3maaws_HE",40];
_RangeBoxAT AddMagazineCargoGlobal ["tf47_m3maaws_SMOKE",40];
_RangeBoxAT AddMagazineCargoGlobal ["tf47_m3maaws_ILLUM",40];

//Ammo1
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",40];
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",40];
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_762_20Rnd",65];
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_762_20Rnd_T",65];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_762_20Rnd_Blank",65];
_RangeBoxRifle1 AddMagazineCargoGlobal ["rhsusf_mag_7x45acp_MHP",60];
_RangeBoxAT1 AddMagazineCargoGlobal ["tf47_m3maaws_HEAT",40];
_RangeBoxAT1 AddMagazineCargoGlobal ["tf47_m3maaws_HE",40];
_RangeBoxAT1 AddMagazineCargoGlobal ["tf47_m3maaws_SMOKE",40];
_RangeBoxAT1 AddMagazineCargoGlobal ["tf47_m3maaws_ILLUM",40];

//Ammo2
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",40];
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",40];
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_762_20Rnd",65];
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_762_20Rnd_T",65];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_762_20Rnd_Blank",65];
_RangeBoxRifle2 AddMagazineCargoGlobal ["rhsusf_mag_7x45acp_MHP",60];
_RangeBoxAT2 AddMagazineCargoGlobal ["tf47_m3maaws_HEAT",40];
_RangeBoxAT2 AddMagazineCargoGlobal ["tf47_m3maaws_HE",40];
_RangeBoxAT2 AddMagazineCargoGlobal ["tf47_m3maaws_SMOKE",40];
_RangeBoxAT2 AddMagazineCargoGlobal ["tf47_m3maaws_ILLUM",40];

//items
_RangeBoxAT additemcargoglobal ["tf47_optic_m3maaws",20];

_RangeBoxMedic addItemCargoGlobal ["ACE_morphine", 80];
_RangeBoxMedic addItemCargoGlobal ["ACE_fieldDressing", 80];
_RangeBoxMedic addItemCargoGlobal ["ACE_epinephrine",80];
_RangeBoxMedic addItemCargoGlobal ["ACE_bloodIV",80];
_RangeBoxMedic addItemCargoGlobal ["ACE_bodyBag",100];

_RangeBoxMedic1 addItemCargoGlobal ["ACE_morphine", 80];
_RangeBoxMedic1 addItemCargoGlobal ["ACE_fieldDressing", 80];
_RangeBoxMedic1 addItemCargoGlobal ["ACE_epinephrine",80];
_RangeBoxMedic1 addItemCargoGlobal ["ACE_bloodIV",80];
_RangeBoxMedic1 addItemCargoGlobal ["ACE_bodyBag",100];

_MedicalBox addItemCargoGlobal ["ACE_fieldDressing",100];
_MedicalBox addItemCargoGlobal ["ACE_elasticBandage",100];
_MedicalBox addItemCargoGlobal ["ACE_quikclot",100];
_MedicalBox addItemCargoGlobal ["ACE_packingBandage",100];
_MedicalBox addItemCargoGlobal ["ACE_personalAidKit",50];
_MedicalBox addItemCargoGlobal ["ACE_bloodIV",50];
_Medicalbox addItemCargoGlobal ["ACE_bloodIV_500",50];
_MedicalBox addItemCargoGlobal ["ACE_bloodIV_250",50];
_MedicalBox addItemCargoGlobal ["ACE_plasmaIV",50];
_MedicalBox addItemCargoGlobal ["ACE_plasmaIV_500",50];
_MedicalBox addItemCargoGlobal ["ACE_plasmaIV_250",50];
_MedicalBox addItemCargoGlobal ["ACE_salineIV",50];
_MedicalBox addItemCargoGlobal ["ACE_salineIV_500",50];
_MedicalBox addItemCargoGlobal ["ACE_salineIV_250",50];
_MedicalBox addItemCargoGlobal ["ACE_tourniquet",50];
_MedicalBox addItemCargoGlobal ["ACE_atropine",100];
_MedicalBox addItemCargoGlobal ["ACE_epinephrine",100];
_MedicalBox addItemCargoGlobal ["ACE_morphine",100];
_Medicalbox addItemCargoGlobal ["ACE_surgicalKit",50];

//Radio Box
_Radio AddItemCargoGlobal ["ACRE_PRC117F",40];