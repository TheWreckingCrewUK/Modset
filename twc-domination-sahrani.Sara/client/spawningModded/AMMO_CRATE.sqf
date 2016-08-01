/*
*    TWC public sevrer
*   Sling loadable ammo crates
*
*  Paddock Change all ammo boxes to have the correct ammo and weapons
*
*
*/


_BritishAmmoBox = BritishAmmoBox;
_USAmmoBox = USAmmoBox;
_USMCAmmoBox = USMCAmmoBox;
_SmallBritishAmmoBox = SmallBritishAmmoBox;
_SmallUSAmmoBox = SmallUSAmmoBox;
_SmallUSMCAmmoBox = SmallUSMCAmmoBox;






clearWeaponCargoGlobal _BritishAmmoBox;
clearBackpackCargoGlobal _BritishAmmoBox;
clearMagazineCargoGlobal _BritishAmmoBox;
clearitemCargoGlobal _BritishAmmoBox;

clearWeaponCargoGlobal _USAmmoBox;
clearBackpackCargoGlobal _USAmmoBox;
clearMagazineCargoGlobal _USAmmoBox;
clearitemCargoGlobal _USAmmoBox;

clearWeaponCargoGlobal _USMCAmmoBox;
clearBackpackCargoGlobal _USMCAmmoBox;
clearMagazineCargoGlobal _USMCAmmoBox;
clearitemCargoGlobal _USMCAmmoBox;

clearWeaponCargoGlobal _SmallBritishAmmoBox;
clearBackpackCargoGlobal _SmallBritishAmmoBox;
clearMagazineCargoGlobal _SmallBritishAmmoBox;
clearitemCargoGlobal _SmallBritishAmmoBox;

clearWeaponCargoGlobal _SmallUSAmmoBox;
clearBackpackCargoGlobal _SmallUSAmmoBox;
clearMagazineCargoGlobal _SmallUSAmmoBox;
clearitemCargoGlobal _SmallUSAmmoBox;

clearWeaponCargoGlobal _SmallUSMCAmmoBox;
clearBackpackCargoGlobal _SmallUSMCAmmoBox;
clearMagazineCargoGlobal _SmallUSMCAmmoBox;
clearitemCargoGlobal _SmallUSMCAmmoBox;




//BritishAmmoBox
//Weapons
_BritishAmmoBox AddWeaponCargoGlobal ["rhs_weap_m72a7",4];


//BritishAmmoBox
//supplies
_BritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",2];
_BritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",5];

_BritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd",30];
_BritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd_T",10];

_BritishAmmoBox AddMagazineCargoGlobal ["UGL_FlareWhite_F",10];
_BritishAmmoBox AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",20];
_BritishAmmoBox AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",10];

_BritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd",5];
_BritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd_T",2];

_BritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd_T",5];
_BritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd",10];

_BritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_17Rnd_9mm",20];
_BritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_L128A1_Pellets",15];
_BritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_L128A1_Slugs",15];

_BritishAmmoBox addItemCargoGlobal ["ACE_fieldDressing",40];
_BritishAmmoBox addItemCargoGlobal ["ACE_elasticBandage",40];
_BritishAmmoBox addItemCargoGlobal ["ACE_quikclot",40];
_BritishAmmoBox addItemCargoGlobal ["ACE_packingBandage",40];
_BritishAmmoBox addItemCargoGlobal ["ACE_personalAidKit",10];
_BritishAmmoBox addItemCargoGlobal ["ACE_salineIV_500",5];
_BritishAmmoBox addItemCargoGlobal ["ACE_atropine",10];
_BritishAmmoBox addItemCargoGlobal ["ACE_epinephrine",10];
_BritishAmmoBox addItemCargoGlobal ["ACE_morphine",10];





//USAmmoBox
//Weapons
_USAmmoBox AddWeaponCargoGlobal ["UK3CB_BAF_AT4_CS_AP_Launcher",4];


//USAmmoBox
//supplies

_USAmmoBox AddMagazineCargoGlobal ["30Rnd_556x45_Stanag",40];
_USAmmoBox AddMagazineCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Red",10];

_USAmmoBox AddMagazineCargoGlobal ["UGL_FlareWhite_F",10];
_USAmmoBox AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",40];
_USAmmoBox AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",10];

_USAmmoBox AddMagazineCargoGlobal ["rhsusf_200Rnd_556x45_soft_pouch",10];

_USAmmoBox AddMagazineCargoGlobal ["rhsusf_20Rnd_762x51_m118_special_Mag",10];

_USAmmoBox AddMagazineCargoGlobal ["rhsusf_mag_15Rnd_9x19_JHP",20];
_USAmmoBox AddMagazineCargoGlobal ["rhsusf_8Rnd_00Buck",10];
_USAmmoBox AddMagazineCargoGlobal ["rhsusf_8Rnd_Slug",10];

_USAmmoBox addItemCargoGlobal ["ACE_fieldDressing",40];
_USAmmoBox addItemCargoGlobal ["ACE_elasticBandage",40];
_USAmmoBox addItemCargoGlobal ["ACE_quikclot",40];
_USAmmoBox addItemCargoGlobal ["ACE_packingBandage",40];
_USAmmoBox addItemCargoGlobal ["ACE_personalAidKit",10];
_USAmmoBox addItemCargoGlobal ["ACE_salineIV_500",5];
_USAmmoBox addItemCargoGlobal ["ACE_atropine",10];
_USAmmoBox addItemCargoGlobal ["ACE_epinephrine",10];
_USAmmoBox addItemCargoGlobal ["ACE_morphine",10];




//USMCAmmoBox
//Weapons
_USMCAmmoBox AddWeaponCargoGlobal ["UK3CB_BAF_AT4_CS_AP_Launcher",6];


//USMCAmmoBox
//supplies
_USMCAmmoBox AddMagazineCargoGlobal ["rhsusf_100Rnd_762x51_m62_tracer",2];
_USMCAmmoBox AddMagazineCargoGlobal ["rhsusf_100Rnd_762x51",5];

_USMCAmmoBox AddMagazineCargoGlobal ["30Rnd_556x45_Stanag",60];
_USMCAmmoBox AddMagazineCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Red",30];

_USMCAmmoBox AddMagazineCargoGlobal ["UGL_FlareWhite_F",20];
_USMCAmmoBox AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",60];
_USMCAmmoBox AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",20];

_USMCAmmoBox AddMagazineCargoGlobal ["rhs_200rnd_556x45_M_SAW",4];
_USMCAmmoBox AddMagazineCargoGlobal ["rhsusf_200Rnd_556x45_soft_pouch",10];


_USMCAmmoBox AddMagazineCargoGlobal ["rhsusf_mag_7x45acp_MHP",20];
_USMCAmmoBox AddMagazineCargoGlobal ["rhsusf_8Rnd_00Buck",15];
_USMCAmmoBox AddMagazineCargoGlobal ["rhsusf_8Rnd_Slug",15];

_USMCAmmoBox addItemCargoGlobal ["ACE_fieldDressing",30];
_USMCAmmoBox addItemCargoGlobal ["ACE_elasticBandage",30];
_USMCAmmoBox addItemCargoGlobal ["ACE_quikclot",30];
_USMCAmmoBox addItemCargoGlobal ["ACE_packingBandage",30];
_USMCAmmoBox addItemCargoGlobal ["ACE_personalAidKit",15];
_USMCAmmoBox addItemCargoGlobal ["ACE_salineIV_500",8];
_USMCAmmoBox addItemCargoGlobal ["ACE_atropine",20];
_USMCAmmoBox addItemCargoGlobal ["ACE_epinephrine",20];
_USMCAmmoBox addItemCargoGlobal ["ACE_morphine",20];






//SmallBritishAmmoBox
//Weapons
_SmallBritishAmmoBox AddWeaponCargoGlobal ["rhs_weap_m72a7",2];


//SmallBritishAmmoBox
//supplies
_SmallBritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",1];
_SmallBritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",3];

_SmallBritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd",20];
_SmallBritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd_T",5];

_SmallBritishAmmoBox AddMagazineCargoGlobal ["UGL_FlareWhite_F",5];
_SmallBritishAmmoBox AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",20];
_SmallBritishAmmoBox AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",5];

_SmallBritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd",3];
_SmallBritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd_T",1];

_SmallBritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd_T",2];
_SmallBritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd",5];

_SmallBritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_17Rnd_9mm",10];
_SmallBritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_L128A1_Pellets",8];
_SmallBritishAmmoBox AddMagazineCargoGlobal ["UK3CB_BAF_L128A1_Slugs",8];

_SmallBritishAmmoBox addItemCargoGlobal ["ACE_fieldDressing",20];
_SmallBritishAmmoBox addItemCargoGlobal ["ACE_elasticBandage",20];
_SmallBritishAmmoBox addItemCargoGlobal ["ACE_quikclot",20];
_SmallBritishAmmoBox addItemCargoGlobal ["ACE_packingBandage",20];
_SmallBritishAmmoBox addItemCargoGlobal ["ACE_personalAidKit",5];
_SmallBritishAmmoBox addItemCargoGlobal ["ACE_salineIV_500",3];
_SmallBritishAmmoBox addItemCargoGlobal ["ACE_atropine",5];
_SmallBritishAmmoBox addItemCargoGlobal ["ACE_epinephrine",5];
_SmallBritishAmmoBox addItemCargoGlobal ["ACE_morphine",5];





//SmallUSAmmoBox
//Weapons
_USAmmoBox AddWeaponCargoGlobal ["UK3CB_BAF_AT4_CS_AP_Launcher",2];


//SmallUSAmmoBox
//supplies

_SmallUSAmmoBox AddMagazineCargoGlobal ["30Rnd_556x45_Stanag",20];
_SmallUSAmmoBox AddMagazineCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Red",5];

_SmallUSAmmoBox AddMagazineCargoGlobal ["UGL_FlareWhite_F",5];
_SmallUSAmmoBox AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",20];
_SmallUSAmmoBox AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",5];

_SmallUSAmmoBox AddMagazineCargoGlobal ["rhsusf_200Rnd_556x45_soft_pouch",5];

_SmallUSAmmoBox AddMagazineCargoGlobal ["rhsusf_20Rnd_762x51_m118_special_Mag",5];

_SmallUSAmmoBox AddMagazineCargoGlobal ["rhsusf_mag_15Rnd_9x19_JHP",10];
_SmallUSAmmoBox AddMagazineCargoGlobal ["rhsusf_8Rnd_00Buck",5];
_SmallUSAmmoBox AddMagazineCargoGlobal ["rhsusf_8Rnd_Slug",5];

_SmallUSAmmoBox addItemCargoGlobal ["ACE_fieldDressing",20];
_SmallUSAmmoBox addItemCargoGlobal ["ACE_elasticBandage",20];
_SmallUSAmmoBox addItemCargoGlobal ["ACE_quikclot",20];
_SmallUSAmmoBox addItemCargoGlobal ["ACE_packingBandage",20];
_SmallUSAmmoBox addItemCargoGlobal ["ACE_personalAidKit",5];
_SmallUSAmmoBox addItemCargoGlobal ["ACE_salineIV_500",2];
_SmallUSAmmoBox addItemCargoGlobal ["ACE_atropine",5];
_SmallUSAmmoBox addItemCargoGlobal ["ACE_epinephrine",5];
_SmallUSAmmoBox addItemCargoGlobal ["ACE_morphine",5];




//SmallUSMCAmmoBox
//Weapons
_SmallUSMCAmmoBox AddWeaponCargoGlobal ["UK3CB_BAF_AT4_CS_AP_Launcher",3];


//SmallBritishAmmoBox
//supplies
_SmallUSMCAmmoBox AddMagazineCargoGlobal ["rhsusf_100Rnd_762x51_m62_tracer",1];
_SmallUSMCAmmoBox AddMagazineCargoGlobal ["rhsusf_100Rnd_762x51",3];

_SmallUSMCAmmoBox AddMagazineCargoGlobal ["30Rnd_556x45_Stanag",30];
_SmallUSMCAmmoBox AddMagazineCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Red",10];

_SmallUSMCAmmoBox AddMagazineCargoGlobal ["UGL_FlareWhite_F",10];
_SmallUSMCAmmoBox AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",30];
_SmallUSMCAmmoBox AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",10];

_SmallUSMCAmmoBox AddMagazineCargoGlobal ["rhs_200rnd_556x45_M_SAW",2];
_SmallUSMCAmmoBox AddMagazineCargoGlobal ["rhsusf_200Rnd_556x45_soft_pouch",5];


_SmallUSMCAmmoBox AddMagazineCargoGlobal ["rhsusf_mag_7x45acp_MHP",20];
_SmallUSMCAmmoBox AddMagazineCargoGlobal ["rhsusf_8Rnd_00Buck",5];
_SmallUSMCAmmoBox AddMagazineCargoGlobal ["rhsusf_8Rnd_Slug",5];

_SmallUSMCAmmoBox addItemCargoGlobal ["ACE_fieldDressing",15];
_SmallUSMCAmmoBox addItemCargoGlobal ["ACE_elasticBandage",15];
_SmallUSMCAmmoBox addItemCargoGlobal ["ACE_quikclot",15];
_SmallUSMCAmmoBox addItemCargoGlobal ["ACE_packingBandage",15];
_SmallUSMCAmmoBox addItemCargoGlobal ["ACE_personalAidKit",8];
_SmallUSMCAmmoBox addItemCargoGlobal ["ACE_salineIV_500",4];
_SmallUSMCAmmoBox addItemCargoGlobal ["ACE_atropine",10];
_SmallUSMCAmmoBox addItemCargoGlobal ["ACE_epinephrine",10];
_SmallUSMCAmmoBox addItemCargoGlobal ["ACE_morphine",10];