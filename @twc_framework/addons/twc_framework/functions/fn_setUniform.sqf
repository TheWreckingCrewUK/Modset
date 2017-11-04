params["_unit"];

_newUniform = ["U_BG_Guerilla2_2","CUP_I_B_PMC_Unit_11","CUP_U_C_Citizen_02","CUP_U_O_CHDKZ_Lopotev","U_BG_Guerilla2_3","U_C_Poloshirt_salmon"] call bis_fnc_selectRandom;

_items = uniformitems _unit;
_magazines = magazinesAmmo (uniformContainer _unit);
Removeuniform _unit;
_unit adduniform _newUniform;
{
	if !(_x isKindOf ["CA_Magazine",configFile >> "CfgMagazines"]) then{
		_unit addItemToUniform _x;
	};
}foreach _items;
{
	_unit addMagazine [(_x select 0),(_x select 1)];
}forEach _magazines;