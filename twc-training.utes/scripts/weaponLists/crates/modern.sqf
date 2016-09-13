/*
*    TWC Training Mission
*   Modern Training Selection
*
*  Will Change all ammo boxes to have the correct ammo and weapons
*
*
*/

_RangeBoxRifle = RangeAmmoBoxRifle;
_RangeBoxRifle1 = RangeAmmoBoxRifle1;
_RangeBoxRifle2 = RangeAmmoBoxRifle2;
_RangeBoxAT = RangeAmmoBoxAT;
_RangeBoxAT1 = RangeAmmoBoxAT1;
_RangeBoxAT2 = RangeAmmoBoxAT2;
_RangeBoxSniper = RangeAmmoBoxSniper;
_RangeBoxGrenade = RangeAmmoGrenade;
_RangeBoxMedic = RangeAmmoBoxMedic;
_RangeBoxMedic1 = RangeAmmoBoxMedic1;
_MedicalBox = MedicalBox;
_CrewServedWepons = CrewBox;
_RadioBox = RadioBox,RadioBox1;


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

clearWeaponCargoGlobal _RangeBoxSniper;
clearBackpackCargoGlobal _RangeBoxSniper;
clearMagazineCargoGlobal _RangeBoxSniper;
clearitemCargoGlobal _RangeBoxSniper;

clearWeaponCargoGlobal _RangeBoxGrenade;
clearBackpackCargoGlobal _RangeBoxGrenade;
clearMagazineCargoGlobal _RangeBoxGrenade;
clearitemCargoGlobal _RangeBoxGrenade;

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

clearWeaponCargoGlobal _RadioBox;
clearBackpackCargoGlobal _RadioBox;
clearMagazineCargoGlobal _RadioBox;
clearitemCargoGlobal _RadioBox;

clearWeaponCargoGlobal _CrewServedWepons;
clearBackpackCargoGlobal _CrewServedWepons;
clearMagazineCargoGlobal _CrewServedWepons;
clearItemCargoGlobal _CrewServedWepons;

//Range Box
//Weapons
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L7A2",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_RIS_AFG_ELCAN3D",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L110A2_ELCAN3D",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L129A1_Grippod_TA648",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_UGL_ELCAN3D",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L131A1",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L128A1_Eotech",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L7A2",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_RIS_AFG_ELCAN3D",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L110A2_ELCAN3D",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L129A1_Grippod_TA648",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_UGL_ELCAN3D",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L131A1",20];
_RangeBoxRifle AddWeaponCargoGlobal ["ACE_VMH3",20];
_RangeBoxAT AddWeaponCargoGlobal ["UK3CB_BAF_NLAW_Launcher",20];
_RangeBoxAT AddWeaponCargoGlobal ["HAFM_LAW",20];
_RangeBoxAT addweaponCargoGlobal ["UK3CB_BAF_AT4_AT_Launcher",20];
_RangeBoxAT AddWeaponCargoGlobal ["HAFM_LAW",20];

_RangeBoxSniper AddWeaponCargoGlobal  ["UK3CB_BAF_L131A1",8];
_RangeBoxSniper AddWeaponCargoGlobal ["UK3CB_BAF_L129A1_FGrip",8];
_CrewServedWepons AddWeaponCargoGlobal ["UK3CB_BAF_L16_Tripod",8];
_CrewServedWepons AddWeaponCargoGlobal ["UK3CB_BAF_L16",8];
_CrewServedWepons AddWeaponCargoGlobal ["UK3CB_BAF_Tripod",16];
_CrewServedWepons AddWeaponCargoGlobal ["UK3CB_BAF_L111A1",8];
_CrewServedWepons AddWeaponCargoGlobal ["UK3CB_BAF_L134A1",8];
_CrewServedWepons AddWeaponCargoGlobal ["FIMStingerA",8];
_CrewServedWepons AddWeaponCargoGlobal ["UK3CB_BAF_M6",8];



//Weapons1
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L7A2",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_RIS_AFG_ELCAN3D",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L110A2_ELCAN3D",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L129A1_Grippod_TA648",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_UGL_ELCAN3D",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L131A1",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L128A1_Eotech",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L7A2",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_RIS_AFG_ELCAN3D",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L110A2_ELCAN3D",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L129A1_Grippod_TA648",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_UGL_ELCAN3D",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["UK3CB_BAF_L131A1",20];
_RangeBoxRifle1 AddWeaponCargoGlobal ["ACE_VMH3",20];
_RangeBoxAT1 AddWeaponCargoGlobal ["UK3CB_BAF_NLAW_Launcher",20];
_RangeBoxAT1 AddWeaponCargoGlobal ["HAFM_LAW",20];
_RangeBoxAT1 addweaponCargoGlobal ["UK3CB_BAF_AT4_AT_Launcher",20];
_RangeBoxAT1 AddWeaponCargoGlobal ["HAFM_LAW",20];

//Weapons2
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L7A2",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_RIS_AFG_ELCAN3D",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L110A2_ELCAN3D",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L129A1_Grippod_TA648",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_UGL_ELCAN3D",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L131A1",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L128A1_Eotech",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L7A2",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_RIS_AFG_ELCAN3D",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L110A2_ELCAN3D",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L129A1_Grippod_TA648",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_UGL_ELCAN3D",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["UK3CB_BAF_L131A1",20];
_RangeBoxRifle2 AddWeaponCargoGlobal ["ACE_VMH3",20];
_RangeBoxAT2 AddWeaponCargoGlobal ["UK3CB_BAF_NLAW_Launcher",20];
_RangeBoxAT2 AddWeaponCargoGlobal ["HAFM_LAW",20];
_RangeBoxAT2 addweaponCargoGlobal ["UK3CB_BAF_AT4_AT_Launcher",20];
_RangeBoxAT2 AddWeaponCargoGlobal ["HAFM_LAW",20];







//Ammo
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",20];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",20];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd",85];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd_T",85];

_RangeBoxRifle AddMagazineCargoGlobal ["UGL_FlareWhite_F",45];
_RangeBoxRifle AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",45];
_RangeBoxRifle AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",45];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd",45];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd_T",45];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd_T",45];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd",45];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_17Rnd_9mm",50];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_L128A1_Pellets",50];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_L128A1_Slugs",50];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",50];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",50];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd",55];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd_T",55];

_RangeBoxRifle AddMagazineCargoGlobal ["UGL_FlareWhite_F",35];
_RangeBoxRifle AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",35];
_RangeBoxRifle AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",35];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd",25];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd_T",25];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd_T",35];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd",35];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_17Rnd_9mm",20];


//Ammo1
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",20];
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",20];

_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd",85];
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd_T",85];

_RangeBoxRifle AddMagazineCargoGlobal ["UGL_FlareWhite_F",45];
_RangeBoxRifle AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",45];
_RangeBoxRifle AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",45];

_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd",45];
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd_T",45];

_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd_T",45];
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd",45];

_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_17Rnd_9mm",50];
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_L128A1_Pellets",50];
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_L128A1_Slugs",50];

_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",50];
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",50];

_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd",55];
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd_T",55];

_RangeBoxRifle1 AddMagazineCargoGlobal ["UGL_FlareWhite_F",35];
_RangeBoxRifle1 AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",35];
_RangeBoxRifle1 AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",35];

_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd",25];
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd_T",25];

_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd_T",35];
_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd",35];

_RangeBoxRifle1 AddMagazineCargoGlobal ["UK3CB_BAF_17Rnd_9mm",20];


//Ammo2
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",20];
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",20];

_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd",85];
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd_T",85];

_RangeBoxRifle2 AddMagazineCargoGlobal ["UGL_FlareWhite_F",45];
_RangeBoxRifle2 AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",45];
_RangeBoxRifle2 AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",45];

_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd",45];
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd_T",45];

_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd_T",45];
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd",45];

_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_17Rnd_9mm",50];
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_L128A1_Pellets",50];
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_L128A1_Slugs",50];

_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",50];
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",50];

_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd",55];
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd_T",55];

_RangeBoxRifle2 AddMagazineCargoGlobal ["UGL_FlareWhite_F",35];
_RangeBoxRifle2 AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",35];
_RangeBoxRifle2 AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",35];

_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd",25];
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd_T",25];

_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd_T",35];
_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd",35];

_RangeBoxRifle2 AddMagazineCargoGlobal ["UK3CB_BAF_17Rnd_9mm",20];



_RangeBoxSniper AddMagazineCargoGlobal ["30Rnd_556x45_Stanag",50];
_RangeBoxSniper AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd",50];

_RangeBoxGrenade AddMagazineCargoGlobal  ["1Rnd_HE_Grenade_shell",100];
_RangeBoxGrenade AddMagazineCargoGlobal  ["HandGrenade",100];
_RangeBoxGrenade AddMagazineCargoGlobal ["SmokeShell",100];
_RangeBoxGrenade AddMagazineCargoGlobal ["rhs_mag_m69",100];

_CrewServedWepons AddMagazineCargoGlobal ["UK3CB_BAF_100Rnd_127x99_Box",100];
_CrewServedWepons AddMagazineCargoGlobal ["UK3CB_BAF_32Rnd_40mm_G_Box",100];
_CrewServedWepons AddMagazineCargoGlobal ["UK3CB_BAF_1Rnd_81mm_Mo_shells",100];
_CrewServedWepons AddMagazineCargoGlobal ["UK3CB_BAF_1Rnd_81mm_Mo_Flare_white",100];
_CrewServedWepons AddMagazineCargoGlobal ["UK3CB_BAF_1Rnd_81mm_Mo_Smoke_white",100];
_CrewServedWepons addItemCargoGlobal ["CUP_Stinger_M",20];
_CrewServedWepons AddMagazineCargoGlobal ["UK3CB_BAF_1Rnd_60mm_Mo_Shells",100];
_CrewServedWepons AddMagazineCargoGlobal ["UK3CB_BAF_1Rnd_60mm_Mo_Flare_White",100];
_CrewServedWepons AddMagazineCargoGlobal ["UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",100];




//items

_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_SpecterLDS_Dot_3D",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_TA648_308",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_BFA_L129",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_BFA_L7",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_BFA_L85",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_Eotech",20];

_RangeBoxRifle1 additemcargoglobal ["UK3CB_BAF_SpecterLDS_Dot_3D",20];
_RangeBoxRifle1 additemcargoglobal ["UK3CB_BAF_TA648_308",20];
_RangeBoxRifle1 additemcargoglobal ["UK3CB_BAF_BFA_L129",20];
_RangeBoxRifle1 additemcargoglobal ["UK3CB_BAF_BFA_L7",20];
_RangeBoxRifle1 additemcargoglobal ["UK3CB_BAF_BFA_L85",20];
_RangeBoxRifle1 additemcargoglobal ["UK3CB_BAF_Eotech",20];

_RangeBoxRifle2 additemcargoglobal ["UK3CB_BAF_SpecterLDS_Dot_3D",20];
_RangeBoxRifle2 additemcargoglobal ["UK3CB_BAF_TA648_308",20];
_RangeBoxRifle2 additemcargoglobal ["UK3CB_BAF_BFA_L129",20];
_RangeBoxRifle2 additemcargoglobal ["UK3CB_BAF_BFA_L7",20];
_RangeBoxRifle2 additemcargoglobal ["UK3CB_BAF_BFA_L85",20];
_RangeBoxRifle2 additemcargoglobal ["UK3CB_BAF_Eotech",20];



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

_CrewServedWepons addItemCargoGlobal ["ACE_EarPlugs",20];
_CrewServedWepons addItemCargoGlobal ["ACE_MapTools",20];
_CrewServedWepons addItemCargoGlobal ["ACE_RangeTable_82mm",20];

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
_RadioBox AdditemCargoGlobal ["ACRE_PRC117F",20];
_RadioBox AdditemCargoGlobal ["ACRE_PRC343",20];
_RadioBox AdditemCargoGlobal ["UK3CB_BAF_Soflam_Laserdesignator",20];
_RadioBox AdditemCargoGlobal ["ACE_Vector",20];
_RadioBox AdditemCargoGlobal ["ItemcTab",20];
_RadioBox AdditemCargoGlobal ["ACE_DAGR",20];
_RadioBox AdditemCargoGlobal ["ACE_MapTools",20];
