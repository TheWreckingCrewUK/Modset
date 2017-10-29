/*
*    TWC public sevrer
*   Sling loadable ammo crates
*
*  Box with insurgent kit to allow faster creation of sneaky breekis by zeus. Only spawnable by QM
*
*
*/
_boxClass = "cup_guerillacachebox";

_box = _boxClass createVehicle [0,0,0];

clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearitemCargoGlobal _box;

//Weapons
_box AddWeaponCargoGlobal ["CUP_launch_RPG7V",10];
_box AddWeaponCargoGlobal ["rhs_weap_pya",2];
_box AddWeaponCargoGlobal ["rhs_weap_svdp",2];
_box AddWeaponCargoGlobal ["CUP_srifle_LeeEnfield_rail",2];
_box AddWeaponCargoGlobal ["rhs_weap_Izh18",2];
_box AddWeaponCargoGlobal ["CUP_srifle_ksvk",2];


//supplies
_box AddMagazineCargoGlobal ["rhs_mag_9x19_17",10];

_box AddMagazineCargoGlobal ["CUP_OG7_M",30];
_box AddMagazineCargoGlobal ["CUP_PG7VL_M",20];
_box AddMagazineCargoGlobal ["rhs_10Rnd_762x54mmR_7N1",7];
_box AddMagazineCargoGlobal ["CUP_10x_303_M",7];
_box AddMagazineCargoGlobal ["rhsgref_1Rnd_Slug",20];
_box AddMagazineCargoGlobal ["rhsgref_1Rnd_00Buck",20];
_box AddMagazineCargoGlobal ["CUP_5Rnd_127x108_KSVK_M",7];



_box addItemCargoGlobal ["UK3CB_BAF_SmokeShell",20];
_box addItemCargoGlobal ["rhs_mag_rgo",20];
_box addItemCargoGlobal ["CUP_IED_V1_M",5];
_box addItemCargoGlobal ["ACE_Cellphone",10];
_box addItemCargoGlobal ["ACE_CableTie",5];
_box addItemCargoGlobal ["rhs_acc_pso1m21",2];
_box addItemCargoGlobal ["rhsusf_acc_M8541_low",5];
_box addItemCargoGlobal ["CUP_optic_PSO_3",5];
_box addItemCargoGlobal ["CUP_O_TKI_Khet_Partug_01",1];
_box addItemCargoGlobal ["CUP_O_TKI_Khet_Partug_02",1];
_box addItemCargoGlobal ["CUP_O_TKI_Khet_Partug_03",1];
_box addItemCargoGlobal ["CUP_O_TKI_Khet_Partug_04",1];
_box addItemCargoGlobal ["CUP_O_TKI_Khet_Partug_05",1];
_box addItemCargoGlobal ["CUP_O_TKI_Khet_Partug_06",1];


_box addbackpackCargoGlobal ["CUP_B_AlicePack_Khaki",10];


[player, _box] call ace_cargo_fnc_startLoadIn;