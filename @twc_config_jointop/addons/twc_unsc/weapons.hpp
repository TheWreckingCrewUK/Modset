class OPTRE_M7;
class OPTRE_MA5CGL;
class OPTRE_MA5B;
class OPTRE_BR55HB;
class OPTRE_M392_DMR;
class OPTRE_M73;
class OPTRE_SRS99D;
class OPTRE_M6G;

class TWC_Weapon_M7: OPTRE_M7 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optre_m7_sight";
		};
	};
};
class TWC_Weapon_MA5CGL: OPTRE_MA5CGL {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optre_ma5c_smartlink";
		};
	};
};
class TWC_Weapon_MA5B: OPTRE_MA5B {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optre_ma5_smartlink";
		};
	};
};
class TWC_Weapon_M7S: OPTRE_M7 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic{
			slot = "CowsSlot";
			item = "optre_m7_sight";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "optre_m7_laser";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "optre_m7_silencer";
		};
	};
};
class TWC_Weapon_BR55HB: OPTRE_BR55HB {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optre_br55hb_scope";
		};
	};
};
class TWC_Weapon_M392: OPTRE_M392_DMR {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optre_m393_scope";
		};
	};
};
class TWC_Weapon_M73: OPTRE_M73 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optre_m393_eotech";
		};
	class LinkedItemsUnderbarrel{
			slot = "UnderBarrelSlot";
			item = "bipod_01_F_blk";
		};	
	};
};
class TWC_Weapon_SRS99D: OPTRE_SRS99D {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optre_srs99_scope";
		};
	};
};
class TWC_Weapon_M6G: OPTRE_M6G {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optre_m6g_scope";
		};
		class LinkedItemsMuzzle{
			slot = "MuzzleSlot";
			item = "optre_M6_silencer";
		};
	};
};