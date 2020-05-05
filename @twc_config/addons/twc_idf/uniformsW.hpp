//Uniform
class ItemCore;
class CUP_U_B_BDUv2_base: ItemCore {
	class ItemInfo;
};
class TWC_Uniform_BDUv2_LightOlive: CUP_U_B_BDUv2_base
{
	displayName = "BDU (Light Olive)";
	class ItemInfo: ItemInfo
	{
		uniformClass = TWC_Uniform_BDUv2_LightOlive;
	};
	scope = 2;
	hiddenSelectionsTextures[] = {
		"\twc_idf\data\BDUv2_LightOlive_CO.paa",
		"\twc_idf\data\BDUv2_LightOlive_CO.paa",
		"\twc_idf\data\BDUv2_LightOlive_CO.paa",
		"\twc_idf\data\BDUv2_LightOlive_CO.paa"
	};
};
class TWC_Uniform_BDUv2_dirty_LightOlive: TWC_Uniform_BDUv2_LightOlive
{
	displayName = "BDU (Light Olive, Dirty)";
	class ItemInfo: ItemInfo
	{
		uniformClass = TWC_Uniform_BDUv2_dirty_LightOlive;
	};
};
class TWC_Uniform_BDUv2_roll_LightOlive: TWC_Uniform_BDUv2_LightOlive
{
	displayName = "BDU (Light Olive, Rolled)";
	class ItemInfo: ItemInfo
	{
		uniformClass = TWC_Uniform_BDUv2_roll_LightOlive;
	};
};
class TWC_Uniform_BDUv2_roll_dirty_LightOlive : TWC_Uniform_BDUv2_LightOlive
{
	displayName = "BDU (Light Olive, Rolled/Dirty)";
	class ItemInfo: ItemInfo
	{
		uniformClass = TWC_Uniform_BDUv2_roll_dirty_LightOlive;
	};
};
class TWC_Uniform_BDUv2_roll2_LightOlive : TWC_Uniform_BDUv2_LightOlive
{
	displayName = "BDU (Light Olive, Rolled High)";
	class ItemInfo: ItemInfo
	{
		uniformClass = TWC_Uniform_BDUv2_roll2_LightOlive;
	};
};
class TWC_Uniform_BDUv2_roll2_dirty_LightOlive : TWC_Uniform_BDUv2_LightOlive
{
	displayName = "BDU (Light Olive, Rolled High/Dirty)";
	class ItemInfo: ItemInfo
	{
		uniformClass = TWC_Uniform_BDUv2_roll2_dirty_LightOlive;
	};
};
class TWC_Uniform_BDUv2_gloves_LightOlive : TWC_Uniform_BDUv2_LightOlive
{
	displayName = "BDU (Light Olive, Gloves)";
	class ItemInfo: ItemInfo
	{
		uniformClass = TWC_Uniform_BDUv2_gloves_LightOlive;
	};
	hiddenSelections[] = {"Camo1", "Camo2","Camo3", "Camo4", "Camo5", "Flag","insignia"};
	hiddenSelectionsTextures[] = {
		"\twc_idf\data\BDUv2_LightOlive_CO.paa",
		"\twc_idf\data\BDUv2_LightOlive_CO.paa",
		"\twc_idf\data\BDUv2_LightOlive_CO.paa",
		"\twc_idf\data\BDUv2_LightOlive_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_co.paa"
	};
};
class TWC_Uniform_BDUv2_gloves_dirty_LightOlive : TWC_Uniform_BDUv2_gloves_LightOlive
{
	displayName = "BDU (Light Olive, Gloves/Dirty)";
	class ItemInfo: ItemInfo
	{
		uniformClass = TWC_Uniform_BDUv2_gloves_dirty_LightOlive;
	};
};
class TWC_Uniform_BDUv2_roll_gloves_LightOlive : TWC_Uniform_BDUv2_gloves_LightOlive
{
	displayName = "BDU (Light Olive, Rolled/Gloves)";
	class ItemInfo: ItemInfo
	{
		uniformClass = TWC_Uniform_BDUv2_roll_gloves_LightOlive;
	};
};
class TWC_Uniform_BDUv2_roll_gloves_dirty_LightOlive : TWC_Uniform_BDUv2_gloves_LightOlive
{
	displayName = "BDU (Light Olive, Rolled/Gloves/Dirty)";
	class ItemInfo: ItemInfo
	{
		uniformClass =TWC_Uniform_BDUv2_roll_gloves_dirty_LightOlive;
	};
};
class TWC_Uniform_BDUv2_roll2_gloves_LightOlive : TWC_Uniform_BDUv2_gloves_LightOlive
{
	displayName = "BDU (Light Olive, Rolled High/Gloves)";
	class ItemInfo: ItemInfo
	{
		uniformClass = TWC_Uniform_BDUv2_roll2_gloves_LightOlive;
	};
};
class TWC_Uniform_BDUv2_roll2_gloves_dirty_LightOlive : TWC_Uniform_BDUv2_gloves_LightOlive
{
	displayName = "BDU (Light Olive, Rolled High/Gloves/Dirty)";
	class ItemInfo: ItemInfo
	{
		uniformClass = TWC_Uniform_BDUv2_roll2_gloves_dirty_LightOlive;
	};
};

//Vest
class CUP_Vest_Camo_Base;
class CUP_V_B_PASGT: CUP_Vest_Camo_Base {
	class ItemInfo;
};
class TWC_Vest_PASGT_LightOlive: CUP_V_B_PASGT {
	displayName  = "PASGT Vest (Light Olive)";
	hiddenSelections[] = {"camo1", "camo2"};
	hiddenSelectionsTextures[] = {
		"\twc_idf\data\US_PASGT_vest_LightOlive_CO.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\US_PASGT_gear_CO.paa"
	};
	class ItemInfo: ItemInfo {
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {
			"\twc_idf\data\US_PASGT_vest_LightOlive_CO.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\US_PASGT_gear_CO.paa"
		};
	};
};

//Helmets
class SP_Helmet_RAC;
class SP_Helmet_RAC_ODMedic;
class SP_Helmet_RAC_OD_FoliageArid;
class TWC_Helmet_RAC_LightOlive: SP_Helmet_RAC {
	displayName = "RAC Helmet (Light Olive)";
	hiddenSelectionsTextures[] = {
		"\twc_idf\data\helmet_rac_lightolive_co.paa",
		"#(rgb,8,8,3)color(35,39,32,0)",
		"#(rgb,8,8,3)color(35,39,32,0)"
	};
};
class TWC_Helmet_RAC_LightOlive_FoliageArid: SP_Helmet_RAC_OD_FoliageArid {
	displayName = "RAC Helmet (Light Olive) (Foliage/Arid)";
	hiddenSelectionsTextures[] = {
		"\twc_idf\data\helmet_rac_lightolive_co.paa",
		"#(rgb,8,8,3)color(35,39,32,0)",
		"\sp_headgear\data\foliage_arid_co.paa"
	};
};
class TWC_Helmet_RAC_LightOlive_Medic: SP_Helmet_RAC_ODMedic {
	displayName = "RAC Helmet (Light Olive/Medic)";
	hiddenSelectionsTextures[] = {
		"\twc_idf\data\helmet_rac_lightolive_medic_co.paa",
		"#(rgb,8,8,3)color(35,39,32,0)",
		"#(rgb,8,8,3)color(35,39,32,0)"
	};
};