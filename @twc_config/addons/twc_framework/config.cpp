class CfgPatches
{
	class twc_framework
	{
		units[]=
		{
			
		};
		weapons[]={};
		requiredVersion=1.54;
		requiredAddons[]=
		{

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
			file="twc_framework\functions";
			class Hint
			{
			};
			class Defend
			{
			};
			class Patrol
			{
			};
			class AirAssault
			{
			};
			class AttackPlane
			{
			};
			class AttackHelicopter
			{
			};
			class spawnIed
			{
			};
			class IEDpopulate
			{
			};
			class Artillery
			{
			};
			class Attack
			{
			};
			class CommandMessage
			{
			};
			class LightsSwitch
			{
			};
			class Retreat
			{
			};
			class RollShirt
			{
			};
			class Maxspeed
			{
			};
			class Convoy
			{
			};
		};
	};
};

class Extended_PostInit_EventHandlers
{
	class Twc_framework_init
	{
		init="execVM '\twc_framework\init.sqf';";
	};
};