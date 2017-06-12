/* // Cold War
"TWC_AmmoBox_ColdWar_Base",
"TWC_AmmoBox_ColdWar_Section_Portable",

"TWC_AmmoBox_ColdWar_Sniper_Portable",
"TWC_AmmoBox_ColdWar_Blowpipe_Portable", */

class TWC_AmmoBox_ColdWar_Base: TWC_AmmoBox_Base {
	scope       = 2;
	displayName = "Base (Immobile)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
	TransportItems = {
		item_nc(DemoCharge_Remote_Mag, 5);
		item_nc(ACE_Clacker, 5);
	};
	
	TransportMagazines = {
		// todo
	};
	
	TransportWeapons = {
		weap_nc(ukcw_L1A1_law, 4);
	};
};