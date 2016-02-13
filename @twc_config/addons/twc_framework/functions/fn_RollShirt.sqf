if (uniform player == "UK3CB_BAF_U_CombatUniform_MTP") then {
	_items = uniformitems player;
		Removeuniform player;
		player adduniform "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
		{
			if !(_x isKindOf ["CA_Magazine",configFile >> "CfgMagazines"]) then{
				player addItemToUniform _x;
			};
		}foreach _items;
}else{
	if (uniform player == "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve") then {
		_items = uniformitems player;
		Removeuniform player;
		player adduniform "UK3CB_BAF_U_CombatUniform_MTP";
		{
			if !(_x isKindOf ["CA_Magazine",configFile >> "CfgMagazines"]) then{
				player addItemToUniform _x;
			};
		}foreach _items;
	};
};