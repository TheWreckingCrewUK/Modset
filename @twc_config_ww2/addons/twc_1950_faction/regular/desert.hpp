//UK, 1950 Desert
//Section
class TWC_Infantry_1950_Regular_Desert_Rifleman: TWC_Infantry_1950_Regular_Arctic_Rifleman
{
	scope = 2;
	displayName = "Rifleman";
	CATEGORY(TWC_Infantry_Regular_Desert)
	uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
	
	linkedItems[] =
	{
		"V_LIB_UK_P37_Rifleman",
		"cwr3_b_uk_headgear_parahelmet_black",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Rifleman",
		"H_LIB_UK_Helmet_Mk3_w",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_1950_Regular_Desert_Signaller: TWC_Infantry_1950_Regular_Desert_Rifleman
{
	scope = 2;
	displayName = "Signaller";
	backpack = "TWC_Backpack_1950_Signaller";
};
class TWC_Infantry_1950_Regular_Desert_Marksman: TWC_Infantry_1950_Regular_Desert_Rifleman
{
	displayName = "Marksman";
	weapons[] =
	{
		"LIB_LeeEnfield_No4_Scoped",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No4_Scoped",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_1950_Regular_Desert_Grenadier: TWC_Infantry_1950_Regular_Desert_Rifleman
{
	displayName = "Grenadier";
	weapons[] =
	{
		"LIB_LeeEnfield_No4_CUP",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No4_CUP",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_13("LIB_10Rnd_770x56"),
		MAG_8("LIB_1Rnd_G_MillsBomb")
	};
	respawnmagazines[] =
	{
		MAG_13("LIB_10Rnd_770x56"),
		MAG_8("LIB_1Rnd_G_MillsBomb")
	};
};
class TWC_Infantry_1950_Regular_Desert_SMG: TWC_Infantry_1950_Regular_Arctic_SMG
{
		CATEGORY(TWC_Infantry_Regular_Desert)
		uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";

	linkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"cwr3_b_uk_headgear_parahelmet_black",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"cwr3_b_uk_headgear_parahelmet_black",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_1950_Regular_Desert_MG: TWC_Infantry_1950_Regular_Arctic_MG
{
	CATEGORY(TWC_Infantry_Regular_Desert)
	uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"cwr3_b_uk_headgear_parahelmet_black",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"cwr3_b_uk_headgear_parahelmet_black",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_1950_Regular_Desert_MGASS: TWC_Infantry_1950_Regular_Desert_Rifleman
{
	displayName = "Assistant Machine Gunner";
	backpack = "TWC_Backpack_1950_MGASS";
};
class TWC_Infantry_1950_Regular_Desert_SectionCommander: TWC_Infantry_1950_Regular_Arctic_SectionCommander
{
	CATEGORY(TWC_Infantry_Regular_Desert)
	uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"cwr3_b_uk_headgear_parahelmet_black",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"cwr3_b_uk_headgear_parahelmet_black",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_1950_Regular_Desert_2iC: TWC_Infantry_1950_Regular_Desert_Rifleman
{
	displayName = "2iC";
	backpack = "TWC_Backpack_1950_2iC";
	TWC_isCommandRole = 1;
};

//Platoon Command
class TWC_Infantry_1950_Regular_Desert_Platoon_Commander: TWC_Infantry_1950_Regular_Arctic_Platoon_Commander
{
	CATEGORY(TWC_Infantry_Regular_Desert)
	displayName = "Platoon Commander";
	uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
};
class TWC_Infantry_1950_Regular_Desert_Platoon_Sergeant: TWC_Infantry_1950_Regular_Arctic_Platoon_Sergeant
{
	CATEGORY(TWC_Infantry_Regular_Desert)
	displayName = "Platoon Sergeant";
	uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"cwr3_b_uk_headgear_parahelmet_black",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"cwr3_b_uk_headgear_parahelmet_black",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_1950_Regular_Desert_Platoon_Medic: TWC_Infantry_1950_Regular_Arctic_Platoon_Medic
{
	CATEGORY(TWC_Infantry_Regular_Desert)
	uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"cwr3_b_uk_headgear_parahelmet_black",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"cwr3_b_uk_headgear_parahelmet_black",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_1950_Regular_Desert_Platoon_Mortar: TWC_Infantry_1950_Regular_Arctic_Platoon_Mortar
{
	CATEGORY(TWC_Infantry_Regular_Desert)
	uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
	backpack = "TWC_Backpack_1950_Platoon_Mortar";
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
};
class TWC_Infantry_1950_Regular_Desert_Platoon_CSM: TWC_Infantry_1950_Regular_Desert_Platoon_Sergeant
{
	displayName = "Company Sergeant Major";
	scope = 1;
	attendant = 1;
	engineer = 1;
};

//Company
class TWC_Infantry_1950_Regular_Desert_Company_Commander: TWC_Infantry_1950_Regular_Desert_Platoon_Commander
{
	displayName = "Company Commander";
};
class TWC_Infantry_1950_Regular_Desert_Company_2iC: TWC_Infantry_1950_Regular_Desert_Platoon_Commander
{
	displayName = "Company 2iC";
};
class TWC_Infantry_1950_Regular_Desert_Company_Sergeant: TWC_Infantry_1950_Regular_Desert_Platoon_CSM
{
	scope = 2;
};

//AT
class TWC_Infantry_1950_Regular_Desert_Bazooka_Gunner: TWC_Infantry_1950_Regular_Arctic_Bazooka_Gunner
{
	CATEGORY(TWC_Infantry_Regular_Desert)
	uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"cwr3_b_uk_headgear_parahelmet_black",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"cwr3_b_uk_headgear_parahelmet_black",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_1950_Regular_Desert_Bazooka_Ass: TWC_Infantry_1950_Regular_Desert_Rifleman
{
	uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
	displayName = "Bazooka Assistant";
	backpack = "TWC_Backpack_WW2_UK_Late_PIAT_Ass";
};

//Sniper Team
class TWC_Infantry_1950_Regular_Desert_Sniper: TWC_Infantry_1950_Regular_Arctic_Sniper
{
	CATEGORY(TWC_Infantry_Regular_Desert)
uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
};
class TWC_Infantry_1950_Regular_Desert_Spotter: TWC_Infantry_1950_Regular_Arctic_Spotter
{
	CATEGORY(TWC_Infantry_Regular_Desert)
	uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
};

//Artillery
class TWC_Infantry_1950_Regular_Desert_Artillery_Commander: TWC_Infantry_1950_Regular_Desert_Platoon_Commander
{
	displayName = "Artillery Commander";
	backpack = "TWC_Backpack_1950_Artillery_Commander";
	uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
};
class TWC_Infantry_1950_Regular_Desert_Artillery_Crew: TWC_Infantry_1950_Regular_Desert_Artillery_Commander
{
	displayName = "Artillery Crew";
	backpack = "fow_b_uk_bergenpack";
	uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
	TWC_isCommandRole = 0;
};
class TWC_Infantry_1950_Regular_Desert_FO: TWC_Infantry_1950_Regular_Desert_Artillery_Commander
{
	displayName = "Forward Observer";
	backpack = "TWC_Backpack_1950_FO";
	uniformClass = "SP_60PatCombatsRolled_KhakiOD_1_Item";
	TWC_isCommandRole = 0;
};

//Aircraft
class TWC_Infantry_1950_Regular_Desert_FAC: TWC_Infantry_1950_Regular_Desert_FO
{
	displayName = "Forward Air Controller";
	backpack = "TWC_Backpack_1950_FAC";
};

//FVs
class TWC_Infantry_1950_Regular_Desert_Vehicle_Commander: TWC_Infantry_1950_Regular_Desert_SMG
{
	displayName = "Vehicle Commander";
	TWC_isCommandRole = 1;
	engineer = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
	linkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"H_LIB_UK_Beret_Headset",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"H_LIB_UK_Beret",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_Sten_Mk2",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk2",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("LIB_32Rnd_9x19_Sten")
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_32Rnd_9x19_Sten")
	};
};
class TWC_Infantry_1950_Regular_Desert_Vehicle_Crew: TWC_Infantry_1950_Regular_Desert_Vehicle_Commander
{
	displayName = "Vehicle Crew";
	TWC_isCommandRole = 0;
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable ['twc_keepMap',false]";
	};
	weapons[] =
	{
		"LIB_Sten_Mk2",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk2",
		"Throw",
		"Put"
	};
};
