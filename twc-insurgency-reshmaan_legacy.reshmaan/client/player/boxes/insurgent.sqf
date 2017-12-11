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
_box AddWeaponCargoGlobal ["rhs_weap_rpg7",10];
_box AddWeaponCargoGlobal ["rhs_weap_pya",4];
_box AddWeaponCargoGlobal ["CUP_srifle_SVD",4];
_box AddWeaponCargoGlobal ["CUP_srifle_M14",4];
_box AddWeaponCargoGlobal ["rhs_weap_M590_5RD",4];
_box AddWeaponCargoGlobal ["CUP_srifle_ksvk",4];


//supplies
_box AddMagazineCargoGlobal ["rhs_mag_9x19_17",10];

_box AddMagazineCargoGlobal ["rhs_rpg7_OG7V_mag",30];
_box AddMagazineCargoGlobal ["rhs_rpg7_PG7V_mag",20];
_box AddMagazineCargoGlobal ["CUP_10Rnd_762x54_SVD_M",15];
_box AddMagazineCargoGlobal ["CUP_20Rnd_762x51_DMR",15];
_box AddMagazineCargoGlobal ["rhsusf_5Rnd_00Buck",20];
_box AddMagazineCargoGlobal ["CUP_5Rnd_127x108_KSVK_M",15];



_box addItemCargoGlobal ["UK3CB_BAF_SmokeShell",20];
_box addItemCargoGlobal ["rhs_mag_rgo",20];
_box addItemCargoGlobal ["CUP_IED_V1_M",5];
_box addItemCargoGlobal ["rhsusf_acc_harris_bipod",5];
_box addItemCargoGlobal ["ACE_Cellphone",10];
_box addItemCargoGlobal ["ACE_CableTie",5];
_box addItemCargoGlobal ["rhs_acc_pso1m21",4];
_box addItemCargoGlobal ["rhsusf_acc_M8541_low",5];
_box addItemCargoGlobal ["CUP_optic_PSO_3",8];
_box addItemCargoGlobal ["CUP_O_TKI_Khet_Partug_01",1];
_box addItemCargoGlobal ["CUP_O_TKI_Khet_Partug_02",1];
_box addItemCargoGlobal ["CUP_O_TKI_Khet_Partug_03",1];
_box addItemCargoGlobal ["CUP_O_TKI_Khet_Partug_04",1];
_box addItemCargoGlobal ["CUP_O_TKI_Khet_Partug_05",1];
_box addItemCargoGlobal ["CUP_O_TKI_Khet_Partug_06",1];


_box addbackpackCargoGlobal ["CUP_B_AlicePack_Khaki",10];
_box addbackpackCargoGlobal ["rhsgref_hidf_alicepack",10];


[player, _box] call ace_cargo_fnc_startLoadIn;