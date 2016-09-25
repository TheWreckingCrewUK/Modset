class CfgPatches
{
	class utg_mine_detector
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"CBA_Extended_EventHandlers"
		};
		magazines[]={};
		ammo[]={};
		author[]=
		{
			"gpgpgpgp (aka Ms), modified by Tachi"
		};
	};
};
class CfgSounds
{
	class Mine_Detector_Sound_5
	{
		sound[]=
		{
			"Mine_detector\sound\5.ogg",
			"db-20",
			1
		};
		titles[]={};
	};
	class Mine_Detector_Sound_4
	{
		sound[]=
		{
			"Mine_detector\sound\4.ogg",
			"db-18",
			1
		};
		titles[]={};
	};
	class Mine_Detector_Sound_3
	{
		sound[]=
		{
			"Mine_detector\sound\3.ogg",
			"db-16",
			1
		};
		titles[]={};
	};
	class Mine_Detector_Sound_2
	{
		sound[]=
		{
			"Mine_detector\sound\2.ogg",
			"db-14",
			1
		};
		titles[]={};
	};
	class Mine_Detector_Sound_1
	{
		sound[]=
		{
			"Mine_detector\sound\1.ogg",
			"db-12",
			1
		};
		titles[]={};
	};
};
class Extended_PostInit_EventHandlers
{
	class Mine_Detector_Init
	{
		init="execVM 'Mine_detector\init.sqf';";
	};
	class Mine_Detector_Respawn
	{
		init="execVM 'Mine_detector\respawn_init.sqf';";
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1423674341";
};
