_cache = _this select 0;

clearWeaponCargoGlobal _cache;
clearMagazineCargoGlobal _cache;

_cache addBackpackCargoGlobal ["B_kitbag_mcamo", 5];
_cache addBackpackCargoGlobal ["B_FieldPack_oli", 5];
_cache addBackpackCargoGlobal ["B_Carryall_cbr", 5];

waitUntil {InsP_enemyMorale <= -2};

