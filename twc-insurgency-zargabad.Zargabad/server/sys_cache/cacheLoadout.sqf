_cache = _this select 0;

clearWeaponCargoGlobal _cache;
clearMagazineCargoGlobal _cache;

_cache addBackpackCargoGlobal ["B_kitbag_mcamo", 5];
_cache addBackpackCargoGlobal ["B_FieldPack_oli", 5];
_cache addBackpackCargoGlobal ["B_Carryall_cbr", 5];

waitUntil {InsP_enemyMorale <= -2};

_cache addWeaponCargoGlobal ["rhs_weap_ak74m", 5];
_cache addWeaponCargoGlobal ["rhs_weap_ak74m_folded", 5];
_cache addWeaponCargoGlobal ["rhs_weap_pkp", 5];
_cache addWeaponCargoGlobal ["rhs_weap_svdp_wd", 5];
_cache addWeaponCargoGlobal ["hgun_Rook40_F", 5];
_cache addWeaponCargoGlobal ["rhs_weap_rpg7_pgo", 5];

_cache addMagazineCargoGlobal ["rhs_30Rnd_545x39_AK", 20];
_cache addMagazineCargoGlobal ["rhs_100Rnd_762x54mmR", 10];
_cache addMagazineCargoGlobal ["rhs_10Rnd_762x54mmR_7N1", 10];
_cache addMagazineCargoGlobal ["rhs_mag_9x19_17", 10];
_cache addMagazineCargoGlobal ["rhs_rpg7_PG7VL_mag", 10];
_cache addMagazineCargoGlobal ["APERSTripMine_Wire_Mag", 15];
_cache addMagazineCargoGlobal ["IEDUrbanSmall_Remote_Mag", 2]; 
_cache addMagazineCargoGlobal ["IEDLandBig_Remote_Mag", 2]; 
_cache addMagazineCargoGlobal ["IEDLandSmall_Remote_Mag", 2]; 
_cache addMagazineCargoGlobal ["IEDUrbanBig_Remote_Mag", 2];

_cache addItemCargoGlobal ["ACE_Cellphone", 8];
_cache addItemCargoGlobal ["rhs_acc_pso1m2", 8];
_cache addItemCargoGlobal ["rhs_acc_1p29", 8];
_cache addItemCargoGlobal ["rhs_acc_pkas", 8];
_cache addItemCargoGlobal ["ACE_EarPlugs", 20];
_cache addItemCargoGlobal ["ACE_fieldDressing", 40];
_cache addItemCargoGlobal ["ACE_morphine", 40];