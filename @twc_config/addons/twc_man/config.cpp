class CfgPatches
{
	class unit_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class CfgVehicles
{
	class Land;
	class Man: Land
	{
	};
	class CAManBase: Man
	{
	};
	class SoldierWB: CAManBase
	{
	};
	class B_Soldier_base_F: SoldierWB
	{
		threat[]={1,1,0.1};
		camouflage=3;
		accuracy = 0.5;
	};
};