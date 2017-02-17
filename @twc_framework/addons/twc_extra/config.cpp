class CfgPatches
{
	class twc_extra
	{
		units[]=
		{
			
		};
		weapons[]={};
		requiredVersion=1.54;
		requiredAddons[]=
		{
			"ace_dragging"
		};
		author[]=
		{

		};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};
class CfgFunctions
{
	class TWC
	{
		class Functions
		{
			file="twc_extra\functions";
			class putWeaponOnBack {};
		};
	};
};
#include cfgEventHandlers