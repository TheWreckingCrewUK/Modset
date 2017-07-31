class BCCCCP_T55;
class uns_m48a3;

class ARVN_M48: uns_m48a3
{
	displayName="M-48 Patton";
	armor=750;
};

class PAVN_T54: BCCCCP_T55
{
	scope=2;
	displayName="T-54";
	side=0;
	hiddenSelectionsTextures[]=
	{
		"uns_t34_t55\t55skins\t55_body_v_co.paa",
		"uns_t34_t55\t55skins\t55_tower_nva_co.paa"
	};
	vehicleclass="Armour_PAVN";
	editorSubcategory="Armour_PAVN";
	faction="TWC_PAVN";
	crew="PAVN_TankCrew";
	typicalCargo[]=
	{
		"PAVN_TankCrew"
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_762x39_AK47_M
		{
			magazine="CUP_30Rnd_762x39_AK47_M";
			count=6;
		};
		class _xx_uns_sksmag_NT
		{
			magazine="uns_sa58mag";
			count=12;
		};
		class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
		{
			magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
			count=3;
		};
		class _xx_uns_ppshmag
		{
			magazine="uns_ppshmag";
			count=6;
		};
		class _xx_RPG_Round
		{
			magazine="PipeBomb";
			count=4;
		};
		class _xx_uns_t67gren
		{
			magazine="uns_t67gren";
			count=6;
		};
		class _xx_SmokeShell
		{
			magazine="SmokeShell";
			count=3;
		};
	};
	class TransportWeapons {};
	class TransportItems
	{
		 class _xx_Bandage
		{
			name = "ACE_fieldDressing";
			count = 8;
		};
		class _xx_Morphine
		{
			name = "ACE_morphine";
			count = 5;
		};
		class _xx_ACE_elasticBandage
		{
			name = "ACE_elasticBandage";
			count = 10;
		};
		class _xxACE_quikclot
		{
			name = "ACE_quikclot";
			count = 6;
		};
		class _xxACE_packingBandage
		{
			name = "ACE_packingBandage";
			count = 10;
		};
		class _xxACE_tourniquet
		{
			name = "ACE_tourniquet";
			count = 4;
		};
	};
};