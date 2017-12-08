class CfgPatches 
{
	class BRIDGE_ArmEn_siren
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"ace_interaction"};
		author[] = {""};
		authorUrl = "";
	};
};



class CfgFunctions 
{
	class TWC
	{
		class idf_Functions
		{
			file = "\twc_basedefence\functions";
			class init{postInit = 1;};
		};
	};
};

class CfgVehicles {

class staticweapon;
  class staticmortar: staticweapon {

	class EventHandlers{
   fired="[_this select 0, _this select 6] execVM ""insurgency_core\server\sys_basedefence\IDF_Alarmfire.sqf""";
};

	};
};

class CfgSounds
{
	class TWC_sound_idfsiren
	{
		name = "";
		sound[] = {"\sounds\idfalarm.wav", 2, 1};
		titles[] = {};
	};
	
	class TWC_sound_idfclear
	{
		name = "";
		sound[] = {"\sounds\idfclear.wav", 2, 1};
		titles[] = {};
	};
};

