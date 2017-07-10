class CfgPatches
{
	class ww2_flags
	{
		author = "Anschluss";
		name = "WWII Flags";
		requiredAddons[] = {"A3_Data_F","A3_UiFonts_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class FlagCarrier;	
	class Flag_Japan_F: FlagCarrier
	{
		author="Anschluss";
		class SimpleObject
		{
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_White_F.jpg";
		_generalMacro="Flag_Japan_F";
		scope=2;
		scopeCurator=2;
		displayName="Flag (Empire of Japan)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\ww2_flags\Data\ww2_japan_object.paa'";
		};
	};
	class Flag_Japan_IJN_F: FlagCarrier
	{
		author="Anschluss";
		class SimpleObject
		{
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_White_F.jpg";
		_generalMacro="Flag_Japan_IJN_F";
		scope=2;
		scopeCurator=2;
		displayName="Flag (IJN)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\ww2_flags\Data\ww2_japan_ijn_object.paa'";
		};
	};	
};
class CfgMarkers
{
	class flag;
	class ww2_USA_flag: Flag
	{
		name = "United States of America";
		icon = "ww2_flags\data\ww2_usa";
		texture = "ww2_flags\data\ww2_usa";
		size = 32;
		scope = 1;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
	class ww2_japan_flag: Flag
	{
		name = "Empire of Japan";
		icon = "ww2_flags\data\ww2_japan";
		texture = "ww2_flags\data\ww2_japan";
		size = 32;
		scope = 1;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
	class ww2_japan_ijn_flag: Flag
	{
		name = "IJN";
		icon = "ww2_flags\data\ww2_japan_ijn";
		texture = "ww2_flags\data\ww2_japan_ijn";
		size = 32;
		scope = 1;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
	class ww2_germany_flag: Flag
	{
		name = "Nazi-Germany";
		icon = "ww2_flags\data\ww2_germany";
		texture = "ww2_flags\data\ww2_japan";
		size = 32;
		scope = 1;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
};