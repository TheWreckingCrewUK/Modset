class CfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;

	class TWC_Markerlight: ACE_ItemCore {
		scope = 2;
		displayName = "Markerlight";
		descriptionShort = "";
		model = "\A3\Structures_F_Heli\Items\Airport\PortableHelipadLight_01_F.p3d";
		picture = "";

		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 10;
		};
	};
};