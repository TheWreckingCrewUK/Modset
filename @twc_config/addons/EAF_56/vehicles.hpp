class CUP_O_T34_TKA;
class LIB_M4A2_SOV;
class LIB_Willys_MB;
class LIB_US6_Open;
class LIB_US6_Tent;
class LIB_US6_Ammo;

class EAF56_T34: CUP_O_T34_TKA
{
	displayName="T-34/85";
	faction="EAF56";
	crew="EAF56_Crewman";
	typicalCargo[]=
	{
		"EAF56_Crewman"
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_762x39_AK47_M
		{
			magazine="uns_ak47mag";
			count=9;
		};
	};
	class TransportWeapons
	{
		class TransportWeapons
		{
			class _xx_AKM
			{
				weapon="CUP_arifle_AKM";
				count=3;
			};
		};
	};
};
class EAF56_M4A3: LIB_M4A2_SOV
{
	displayName="M4A3 Sherman";
	faction="EAF56";
	crew="EAF56_Crewman";
	typicalCargo[]=
	{
		"EAF56_Crewman"
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_762x39_AK47_M
		{
			magazine="uns_ak47mag";
			count=9;
		};
	};
	class TransportWeapons
	{
		class TransportWeapons
		{
			class _xx_AKM
			{
				weapon="CUP_arifle_AKM";
				count=3;
			};
		};
	};
};
class EAF56_MB: LIB_Willys_MB
{
	displayName="MB Jeep";
	faction="EAF56";
	crew="EAF56_Rifleman_LE";
	typicalCargo[]=
	{
		"EAF56_Rifleman_LE"
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_762x39_AK47_M
		{
			magazine="uns_ak47mag";
			count=9;
		};
		class _xx_fow_10Rnd_303
		{
			magazine="fow_10Rnd_303";
			count=18;
		};
		class _xx_LIB_47Rnd_762x54
		{
			magazine="LIB_47Rnd_762x54";
			count=5;
		};
		class _xx_LIB_8Rnd_762x25
		{
			magazine="LIB_8Rnd_762x25";
			count=8;
		};
		class _xx_CUP_HandGrenade_RGD5
		{
			magazine="CUP_HandGrenade_RGD5";
			count=6;
		};
	};
	class TransportWeapons
	{
		class _xx_AKM
		{
			weapon="CUP_arifle_AKM";
			count=1;
		};
	};
};
class EAF56_US6_Open: LIB_US6_Open
{
	displayName="Studebaker (Open)";
	faction="EAF56";
	crew="EAF56_Rifleman_light";
	typicalCargo[]=
	{
		"EAF56_Rifleman_light"
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_762x39_AK47_M
		{
			magazine="uns_ak47mag";
			count=9;
		};
		class _xx_fow_10Rnd_303
		{
			magazine="fow_10Rnd_303";
			count=18;
		};
		class _xx_LIB_47Rnd_762x54
		{
			magazine="LIB_47Rnd_762x54";
			count=5;
		};
		class _xx_LIB_8Rnd_762x25
		{
			magazine="LIB_8Rnd_762x25";
			count=8;
		};
		class _xx_CUP_HandGrenade_RGD5
		{
			magazine="CUP_HandGrenade_RGD5";
			count=6;
		};
	};
};
class EAF56_US6_Tent: LIB_US6_Tent
{
	displayName="Studebaker (Tent)";
	faction="EAF56";
	crew="EAF56_Rifleman_light";
	typicalCargo[]=
	{
		"EAF56_Rifleman_light"
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_762x39_AK47_M
		{
			magazine="uns_ak47mag";
			count=9;
		};
		class _xx_fow_10Rnd_303
		{
			magazine="fow_10Rnd_303";
			count=18;
		};
		class _xx_LIB_47Rnd_762x54
		{
			magazine="LIB_47Rnd_762x54";
			count=5;
		};
		class _xx_LIB_8Rnd_762x25
		{
			magazine="LIB_8Rnd_762x25";
			count=4;
		};
		class _xx_CUP_HandGrenade_RGD5
		{
			magazine="CUP_HandGrenade_RGD5";
			count=6;
		};
	};
};
class EAF56_US6_Ammo: LIB_US6_Ammo
{
	displayName="Studebaker (Ammo)";
	faction="EAF56";
	crew="EAF56_Rifleman_light";
	typicalCargo[]=
	{
		"EAF56_Rifleman_light"
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_762x39_AK47_M
		{
			magazine="uns_ak47mag";
			count=45;
		};
		class _xx_fow_10Rnd_303
		{
			magazine="fow_10Rnd_303";
			count=90;
		};
		class _xx_LIB_47Rnd_762x54
		{
			magazine="LIB_47Rnd_762x54";
			count=25;
		};
		class _xx_LIB_8Rnd_762x25
		{
			magazine="LIB_8Rnd_762x25";
			count=20;
		};
		class _xx_fow_1Rnd_piat
		{
			magazine="fow_1Rnd_piat";
			count=10;
		};
		class _xx_CUP_HandGrenade_RGD5
		{
			magazine="CUP_HandGrenade_RGD5";
			count=25;
		};
	};
};