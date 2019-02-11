class CfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	
	class ACE_wirecutter: ACE_ItemCore {
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 15;
		};
	};
	
	// Invisible NVGs for AI
	class NVGoggles;
	class NVGoggles_AI: NVGoggles {
		author = "[TWC] Bosenator";
		descriptionShort = "Night Vision Goggles - AI Only";
		displayName = "NVG (AI Only)";
		model = "\A3\Weapons_F\empty.p3d";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		picture = "\A3\Weapons_F\Data\UI\gear_nvg_CA.paa";
		scope = 1;

		class ItemInfo {
			hmdType = 0;
			mass = 20;
			modelOff = "\A3\Weapons_F\empty.p3d";
			type = 616;
			uniformModel = "\A3\Weapons_F\empty.p3d";
		};
	};
};