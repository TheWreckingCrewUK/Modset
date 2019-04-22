class CfgPatches {
	class twc_ww2_enemy {
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.1;
		requiredAddons[] = {
			"CSA38II_characters"
		};
	};
};

class Extended_Init_EventHandlers
{
	class TWC_B_Ju87_SingleSeat
	{
		TWC_Stuka_init = "(_this select 0) setVariable ['IFA3_sirenEnabled', 1]; (_this select 0) setVariable ['IFA3_sirenOn', true]";
	};
	class TWC_B_Ju87_SingleSeat_Italy
	{
		TWC_Stuka_init = "(_this select 0) setVariable ['IFA3_sirenEnabled', 1]; (_this select 0) setVariable ['IFA3_sirenOn', true]";
	};
	class TWC_B_Ju87_SingleSeat_Desert
	{
		TWC_Stuka_init = "(_this select 0) setVariable ['IFA3_sirenEnabled', 1]; (_this select 0) setVariable ['IFA3_sirenOn', true]";
	};
};

class CfgVehicles {
	class B_Soldier_base_F;

	class csa38_CZmanE;
	class CSA38_WH1: csa38_CZmanE {
		magazines[] = {
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_bodaksg84"
		};
		
		respawnMagazines[] = {
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_7_92_5xMauserkAR",
			"CSA38_bodaksg84"
		};
	};
	
	class CSA38_WH22: CSA38_WH1 {
		linkedItems[] = {"Headgear_csa38_M18WH", "V_csa38_equip_GE01"};
		respawnLinkedItems[] = {"Headgear_csa38_M18WH", "V_csa38_equip_GE01"};
	};
	
	class LIB_Ju87;
	class LIB_Ju87_Italy;
	class LIB_Ju87_Italy2;
	class TWC_B_Ju87_SingleSeat: LIB_Ju87
	{
		scope = 1;
		class Turrets
		{
			delete MainTurret;
		};
	};
	class TWC_B_Ju87_SingleSeat_Italy: LIB_Ju87_Italy
	{
		scope = 1;
		class Turrets
		{
			delete MainTurret;
		};
	};
	class TWC_B_Ju87_SingleSeat_Desert: LIB_Ju87_Italy2
	{
		scope = 1;
		class Turrets
		{
			delete MainTurret;
		};
	};
	class sab_he111;
	class TWC_B_He111_SingleSeat: sab_he111
	{
		scope = 1;
		class Turrets
		{
			delete MainTurret;
			delete GunnerTurret;
			delete GunnerTurret2;
			delete GunnerTurret3;
		};
	};
};