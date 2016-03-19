_cache = _this select 0;

clearWeaponCargoGlobal _cache;
clearMagazineCargoGlobal _cache;

_cache addBackpackCargoGlobal ["B_kitbag_mcamo", 5];
_cache addBackpackCargoGlobal ["B_FieldPack_oli", 5];
_cache addBackpackCargoGlobal ["B_Carryall_cbr", 5];
_cache addItemCargoGlobal ["ACE_fieldDressing",20];
_cache addItemCargoGlobal ["ACE_morphine",20];
_cache addItemCargoGlobal ["ACE_EarPlugs",10];
_cache addItemCargoGlobal [	"ACE_SpraypaintBlack",10];
_cache addItemCargoGlobal [	"ACE_SpraypaintRed",10];
_cache addItemCargoGlobal [	"ACE_SpraypaintGreen",10];
_cache addItemCargoGlobal [	"ACE_SpraypaintBlue",10];

waitUntil {InsP_enemyMorale <= -2 || InsP_ammoCaches == 2};

_cache addweaponcargoGlobal ["CUP_arifle_AK74",3];
_cache addmagazineCargoGlobal ["CUP_30Rnd_545x39_AK_M",15];

_cache addweaponcargoGlobal ["CUP_arifle_AKS_Gold",3];
_cache addmagazineCargoGlobal ["CUP_30Rnd_762x39_AK47_M",15];

_cache addweaponcargoGlobal ["CUP_arifle_FNFAL",3];
_cache addmagazineCargoGlobal ["CUP_20Rnd_762x51_FNFAL_M",15];

_cache addBackpackCargoGlobal ["B_Mortar_01_weapon_F",1];
_cache addBackpackCargoGlobal ["B_Mortar_01_support_F",1];
_cache addmagazineCargoGlobal ["ACE_1Rnd_82mm_Mo_HE",5];
_cache addItemCargoGlobal ["ACE_RangeTable_82mm",10];

_cache addItemCargoGlobal ["ACE_DeadManSwitch",10];
_cache addItemCargoGlobal ["ACE_Cellphone",10];
_cache addItemCargoGlobal ["IEDUrbanSmall_Remote_Mag",10];
_cache addItemCargoGlobal ["IEDLandSmall_Remote_Mag",10];