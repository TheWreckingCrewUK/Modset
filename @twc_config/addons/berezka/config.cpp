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
class cfgWeapons
{
	class Uniform_Base;
	class HeadgearItem;
	class ItemInfo;
	class UniformItem;
	class DISCLOSE_BEREZKA: Uniform_Base
	{
		scope = 2;
		displayName = "Berezka camo suit";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_DISCLOSE_BEREZKA";
			containerClass = "Supply60";
			mass = 60;
		};
	};
};