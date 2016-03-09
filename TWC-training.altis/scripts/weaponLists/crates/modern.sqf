/*
*    TWC Training Mission
*   Modern Training Selection
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
_ParaBox = ParaChuteBox;
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

clearWeaponCargoGlobal _ParaBox;
clearBackpackCargoGlobal _ParaBox;
clearMagazineCargoGlobal _ParaBox;
clearitemCargoGlobal _ParaBox;

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
_RangeBoxAT AddWeaponCargoGlobal ["UK3CB_BAF_NLAW_Launcher",20];
_RangeBoxAT AddWeaponCargoGlobal ["HAFM_LAW",20];
_RangeBoxAT addweaponCargoGlobal ["UK3CB_BAF_AT4_AT_Launcher",20];
_RangeBoxAT AddWeaponCargoGlobal ["tf47_at4_HEDP",20];
_RangeBoxAT AddWeaponCargoGlobal ["HAFM_LAW",20];
_RangeBoxSniper AddWeaponCargoGlobal ["Trixie_AWM338",8];
_RangeBoxSniper AddWeaponCargoGlobal ["Trixie_AWM338_Ghillie",8];
_RangeBoxSniper AddWeaponCargoGlobal ["Trixie_M110",8];
_RangeBoxSniper AddWeaponCargoGlobal ["Trixie_M110_NG",8];
_RangeBoxSniper AddWeaponCargoGlobal  ["UK3CB_BAF_L131A1",8];
_RangeBoxSniper AddWeaponCargoGlobal ["UK3CB_BAF_L129A1_FGrip",8];
_CrewServedWepons AddWeaponCargoGlobal ["UK3CB_BAF_L16_Tripod",8];
_CrewServedWepons AddWeaponCargoGlobal ["UK3CB_BAF_L16",8];
_CrewServedWepons AddWeaponCargoGlobal ["UK3CB_BAF_Tripod",16];
_CrewServedWepons AddWeaponCargoGlobal ["UK3CB_BAF_L111A1",8];
_CrewServedWepons AddWeaponCargoGlobal ["UK3CB_BAF_L134A1",8];






//Ammo
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",20];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",20];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd",85];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd_T",85];

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

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd",55];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd_T",55];

_RangeBoxRifle AddMagazineCargoGlobal ["UGL_FlareWhite_F",35];
_RangeBoxRifle AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",35];
_RangeBoxRifle AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",35];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd",25];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd_T",25];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd_T",35];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd",35];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_17Rnd_9mm",20];

_RangeBoxAT AddMagazineCargoGlobal ["tf47_at4_m_HEDP",20];

_RangeBoxSniper AddMagazineCargoGlobal  ["Trixie_5x338_Mag",50];
_RangeBoxSniper AddMagazineCargoGlobal  ["Trixie_20x762_Mag",50];
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
_CrewServedWepons AddMagazineCargoGlobal ["UK3CB_BAF_1Rnd_81mm_Mo_LG",50];



//items

_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_SpecterLDS_Dot_3D",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_TA648_308",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_BFA_L129",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_BFA_L7",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_BFA_L85",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_Eotech",20];

_RangeBoxAT additemcargoglobal ["tf47_optic_m3maaws",20];

_RangeBoxSniper additemcargoglobal ["ACE_Kestrel4500",8];
_RangeBoxSniper additemcargoglobal ["ACE_SpottingScope",8];
_RangeBoxSniper additemcargoglobal  ["ACE_Vector",8];
_RangeBoxSniper additemcargoglobal  ["ACE_MX2A",8];
_RangeBoxSniper additemcargoglobal ["ACE_DAGR",8];
_RangeBoxSniper additemcargoglobal ["rhsusf_acc_LEUPOLDMK4",8];
_RangeBoxSniper additemcargoglobal ["optic_LRPS",8];

_RangeBoxMedic addItemCargoGlobal ["ACE_morphine", 80];
_RangeBoxMedic addItemCargoGlobal ["ACE_fieldDressing", 80];
_RangeBoxMedic addItemCargoGlobal ["ACE_epinephrine",80];
_RangeBoxMedic addItemCargoGlobal ["ACE_bloodIV",80];
_RangeBoxMedic addItemCargoGlobal ["ACE_bodyBag",100];

_CrewServedWepons addItemCargoGlobal ["ACE_EarPlugs",20];
_CrewServedWepons addItemCargoGlobal ["ACE_MapTools",20];
_CrewServedWepons addItemCargoGlobal ["ACE_RangeTable_82mm",20];
_CrewServedWepons addItemCargoGlobal ["UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D",20];


//Parachute
_ParaBox AddBackPackCargoGlobal ["ACE_NonSteerableParachute",40];

//Radio Box
_RadioBox AdditemCargoGlobal ["ACRE_PRC117F",40];
