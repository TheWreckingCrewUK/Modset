#include "basicDefines_A3.hpp"
class CfgPatches
{
	class Disclose_Berezka
	{
		author = "Disclose, Bosenator, Anschluss";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_BLUFOR"};
	};
};
class CfgVehicles
{
	class CUP_Creatures_Military_RUS_Soldier_Base;
	class B_DISCLOSE_BEREZKA: CUP_Creatures_Military_RUS_Soldier_Base
	{
		scope = 1;
		uniformClass = "DISCLOSE_BEREZKA";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Gorka.p3d";
		modelSides[] = {1,3};
		hiddenSelections[] = {"camo", "clan", "insignia"};
		hiddenSelectionsTextures[] = {"\berezka\gorka_green_co.paa","",""};
	};
};
class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
		type = UNIFORM_SLOT; /// to what slot does the uniform fit
	};
	class DISCLOSE_BEREZKA: ItemCore
	{
		author = "Disclose, Bosenator, Anschluss";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Berezka camo suit";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_u_o_gorka_olive_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = B_DISCLOSE_BEREZKA;
			containerClass = Supply60;
			mass = 20;
		};
	};
};