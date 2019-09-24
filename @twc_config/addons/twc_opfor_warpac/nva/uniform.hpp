//Uniform
class TWC_Uniform_NVA_Strichmuster: ItemCore {
	author = "[TWC] Rik";
	scope = 2;
	allowedSlots[] = {901};
	displayName = "NVA Strichmuster";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_u_o_tk_officer_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "TWC_OPFOR_WARPAC_NVA_Base"; //Change to actual classname
		containerClass = Supply30;
		mass = 20;
	};
};

//Helmet (not the correct one, but close enough)
class CUP_H_RUS_SSH68_base;
class CUP_H_RUS_SSH68_cover_base: CUP_H_RUS_SSH68_base {
	class ItemInfo;
};
class TWC_Helmet_NVA_SSH68_Cover_Strichmuster: CUP_H_RUS_SSH68_cover_base {
	scope = 2;
	displayName  = "SSH-68 Strichmuster";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_h_6b27_light_ca.paa";
	hiddenSelectionsTextures[] = {"TWC_OPFOR_WARPAC\nva\data\nva_ss68_strichmuster_co.paa"};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = {"TWC_OPFOR_WARPAC\nva\data\nva_ss68_strichmuster_co.paa"};
	};
};