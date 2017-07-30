class CfgPatches
{
	class twc_weapons
	{
		units[]={
			
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"uk3cb_baf_weapons",
			"uk3cb_baf_equipment",
			"ace_medical"
		};
		version="1";
		projectName="TWC";
		author="jayman";
	};
};
class cfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class TWC_AssembleTent
				{
					displayname = "Assemble Field Tent";
					condition = "(secondaryWeapon player) == 'twc_fieldTent'";
					statement = "[player,'AinvPknlMstpSnonWnonDr_medicUp0S',0,false] call ace_common_fnc_doAnimation;[120, [], {[player] spawn twc_weapons_fnc_assembleFieldTent;}, {}, 'Creating Forward Base...'] call ace_common_fnc_progressBar;";
					showDisabled = 0;
					priority = 1;
					icon="";
				};
			};
		};
	};
};
class cfgFunctions
{
	class TWC_Weapons
	{
		class Functions
		{
			file="twc_weapons\functions";
			class assembleFieldTent {};
			class disassembleFieldTent {};
		};
	};
};
class cfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponsSlotsInfo;
	};
	class twc_fieldTent: Launcher_Base_F
	{
		author="jayman";
		_generalMacro="Launch_NLAW_F";
		scope=2;
		displayname="Field Tent";
		model = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Static\Static_Tripod_Bag_equipped.p3d";
		picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Static\data\gear_L16_tripod_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[]={};
		class weaponSlotsInfo: WeaponsSlotsInfo
		{
			mass=220;
		};
	};
};