class CfgPatches
{
	class twc_construct
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.7;
		requiredAddons[]=
		{
			"cba_ai",
			"A3_Modules_F"
		};
		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};
class cfgFunctions
{
	class TWC
	{
		class Functions
		{
			file="twc_construct\functions";
			class build{};
			class buildConfirm{};
		};
	};
};