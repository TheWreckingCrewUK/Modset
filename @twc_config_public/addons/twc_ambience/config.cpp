class CfgPatches
{
	class TWC_Ambience
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
	};
};

class CfgMusic
{
	tracks[] = {};

	class ME_Song_1
	{
		name = "ME_Song_1";
		sound[] = {"\twc_ambience\me_songs\song1.ogg", db+0, 1.0};
	};
	
	class ME_Song_2
	{
		name = "ME_Song_2";
		sound[] = {"\twc_ambience\me_songs\song2.ogg", db+0, 1.0};
	};
	
	class ME_Song_3
	{
		name = "ME_Song_3";
		sound[] = {"\twc_ambience\me_songs\song3.ogg", db+0, 1.0};
	};	
	
	class ME_Song_4
	{
		name = "ME_Song_4";
		sound[] = {"\twc_ambience\me_songs\song4.ogg", db+0, 1.0};
	};
};

class CfgSounds
{
	sounds[] = {};
	
	class ME_Chatter_1
	{
		name = "ME_Chatter_1";
		sound[] = {"\twc_ambience\me_chatter\chatter1.ogg", db+0, 1};
	};
	
	class ME_Environment_Prayer_1
	{
		name = "ME_Environment_Prayer_1";
		sound[] = {"\twc_ambience\me_environment\prayer1.ogg", db+0, 1};
	};
	
	class ME_Environment_Radio_1
	{
		name = "ME_Environment_Radio_1";
		sound[] = {"\twc_ambience\me_environment\radio1.ogg", db+0, 1};
	};
};