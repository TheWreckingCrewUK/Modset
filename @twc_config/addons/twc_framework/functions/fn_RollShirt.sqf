/*
* Written by [TWC] jayman. Replaces your uniform with the short sleeve equivalent or vice versa
* Switch statement determines then literally switches to the new one
*/
_uniform = uniform player;
_newUniform = switch (_uniform)do{
//Modern
	case "UK3CB_BAF_U_CombatUniform_MTP": {"UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve"};
	case "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve": {"UK3CB_BAF_U_CombatUniform_MTP"};
//Woodland 90
	case "UK3CB_BAF_U_CombatUniform_DPMT": {"UK3CB_BAF_U_CombatUniform_DPMT_ShortSleeve"};
	case "UK3CB_BAF_U_CombatUniform_DPMT_ShortSleeve": {"UK3CB_BAF_U_CombatUniform_DPMT"};
//Desert 90
	case "UK3CB_BAF_U_CombatUniform_DDPM_RM": {"UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve"};
	case "UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve": {"UK3CB_BAF_U_CombatUniform_DDPM_RM"};
};
_items = uniformitems player;
Removeuniform player;
player adduniform _newUniform;
{
	if !(_x isKindOf ["CA_Magazine",configFile >> "CfgMagazines"]) then{
		player addItemToUniform _x;
	};
}foreach _items;