class CfgPatches {
	class TWC_gearFixes {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;
		requiredAddons[] = {
			"uk3cb_baf_weapons_smallarms"};
		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};
class cfgWeapons{
	class Rifle_Long_Base_F;
	class UK3CB_BAF_L7A2: Rifle_Long_Base_F{
		displayname = "L7A2 GPMG";
		class WeaponSlotsInfo{
			class asdg_OpticRail_UK3CB_BAF_L7A2{
				
			};
		};
	};
};