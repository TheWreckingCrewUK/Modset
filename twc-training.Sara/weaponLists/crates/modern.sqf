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



//items
_RangeBoxAT additemcargoglobal ["tf47_optic_m3maaws",20];

_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_SpecterLDS_Dot_3D",20];
_RangeBoxRifle additemcargoglobal ["UK3CB_BAF_TA648_308",20];

//Parachute
//_ParaBox AddBackPackCargoGlobal ["ACE_NonSteerableParachute",40];

//Radio Box
_RadioBox AddBackPackCargoGlobal ["tf_rt1523g_green",40];
