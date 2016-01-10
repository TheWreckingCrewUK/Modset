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
//_Parachute = ParaChuteBox;
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
/*
clearWeaponCargoGlobal _Parachute;
clearBackpackCargoGlobal _Parachute;
clearMagazineCargoGlobal _Parachute;
clearitemCargoGlobal _Parachute;
*/
clearWeaponCargoGlobal _RadioBox;
clearBackpackCargoGlobal _RadioBox;
clearMagazineCargoGlobal _RadioBox;
clearitemCargoGlobal _RadioBox;


//Range Box
//Weapons
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L7A2",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_RIS_AFG",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L110A2",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L129A1_AFG",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L85A2_UGL",20];
_RangeBoxRifle AddWeaponCargoGlobal ["UK3CB_BAF_L131A1",20];
_RangeBoxAT AddWeaponCargoGlobal ["UK3CB_BAF_NLAW_Launcher",20];
_RangeBoxAT AddWeaponCargoGlobal ["HAFM_LAW",20];
_RangeBoxAT addweaponCargoGlobal ["UK3CB_BAF_AT4_AT_Launcher",20];
_RangeBoxSniper AddWeaponCargoGlobal ["Trixie_AWM338",8];
_RangeBoxSniper AddWeaponCargoGlobal ["Trixie_AWM338_Ghillie",8];
_RangeBoxSniper AddWeaponCargoGlobal ["Trixie_M110",8];
_RangeBoxSniper AddWeaponCargoGlobal ["Trixie_M110_NG",8];
_RangeBoxSniper AddWeaponCargoGlobal  ["UK3CB_BAF_L131A1",8];
_RangeBoxSniper AddWeaponCargoGlobal ["UK3CB_BAF_L129A1_FGrip",8];
              

//Ammo
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd_T",10];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_75Rnd",10];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd",25];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_30Rnd_T",25];

_RangeBoxRifle AddMagazineCargoGlobal ["UGL_FlareWhite_F",25];
_RangeBoxRifle AddMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",25];
_RangeBoxRifle AddMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",25];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd",25];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_200Rnd_T",25];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd_T",25];
_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd",25];

_RangeBoxRifle AddMagazineCargoGlobal ["UK3CB_BAF_17Rnd_9mm",20];

_RangeBoxSniper AddMagazineCargoGlobal  ["Trixie_5x338_Mag",50];
_RangeBoxSniper AddMagazineCargoGlobal  ["Trixie_20x762_Mag",50];
_RangeBoxSniper AddMagazineCargoGlobal ["30Rnd_556x45_Stanag",50];
_RangeBoxSniper AddMagazineCargoGlobal ["UK3CB_BAF_20Rnd",50];

_RangeBoxGrenade AddMagazineCargoGlobal  ["1Rnd_HE_Grenade_shell",100];
_RangeBoxGrenade AddMagazineCargoGlobal  ["HandGrenade",100];
_RangeBoxGrenade AddMagazineCargoGlobal ["SmokeShell",100];
_RangeBoxGrenade AddMagazineCargoGlobal ["rhs_mag_m69",100];




//items

_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_SpecterLDS_Dot_3D",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_TA648_308",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_BFA_L129",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_BFA_L7",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_BFA_L85",20];


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


//Parachute
//_ParaBox AddBackPackCargoGlobal ["ACE_NonSteerableParachute",40];

//Radio Box
_RadioBox AddBackPackCargoGlobal ["tf_rt1523g_green",40];
