class CfgPatches
{
	class twc_construct
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.7;
		requiredAddons[]={};
		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};
class cfgFunctions
{
	class TWC_Construct
	{
		class Functions
		{
			tag = "twc_construct";
			file="twc_construct\functions";
			class build{};
			class buildConfirm{};
		};
	};
};