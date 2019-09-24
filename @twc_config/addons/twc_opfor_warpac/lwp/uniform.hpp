class TWC_Uniform_LWP_Moro : ItemCore {
	author = "[TWC] Rik";
	scope = 2;
	allowedSlots[] = {901};
	displayName = "LWP Moro";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_u_o_tk_officer_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "CUP_O_TK_Soldier_01"; //Change to actual classname
		containerClass = Supply30;
		mass = 20;
	};
};