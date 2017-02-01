	class CUP_BMP1_base;
	class CUP_I_BMP2_NAPA;
	class CUP_I_BMP_HQ_NAPA;
	class CUP_I_BMP2_AMB_NAPA;
	class CUP_O_BMP2_ZU_TKA;
	class CUP_O_BRDM2_SLA;
	class CUP_O_BRDM2_ATGM_SLA;
	class CUP_O_BRDM2_HQ_SLA;
	class CUP_O_BTR60_SLA;
	class CUP_I_T55_TK_GUE;
	class CUP_I_T72_NAPA;
	class CUP_O_T72_RU;
	class CUP_O_ZSU23_SLA;
	
	class BCCCCP_BMP1: CUP_BMP1_base
	{
		scope=2;
		side=0;
		faction="BCCCCP";
		crew="BCCCCP_Crewman_Black";
		typicalCargo[]=
		{
			"BCCCCP_Crewman_Black"
		};
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Vehicles";
		hiddenSelectionsTextures[]=
		{
			"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp\data\trup_ext0_co.paa",
			"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp\data\veza0_co.paa"
		};
		editorPreview="CUP\TrackedVehicles\CUP_TrackedVehicles_BMP\Data\preview\CUP_I_BMP1_TK_GUE.jpg";
	};
	class BCCCCP_BMP2: CUP_I_BMP2_NAPA
	{
		side=0;
		faction="BCCCCP";
		crew="BCCCCP_Crewman_Black";
		typicalCargo[]=
		{
			"BCCCCP_Crewman_Black"
		};
	};
	class BCCCCP_BMP2_HQ: CUP_I_BMP_HQ_NAPA
	{
		side=0;
		faction="BCCCCP";
		crew="BCCCCP_Crewman_Camo";
		typicalCargo[]=
		{
			"BCCCCP_Crewman_Camo"
		};
	};
	class BCCCCP_BMP2_Amb: CUP_I_BMP2_AMB_NAPA
	{
		side=0;
		faction="BCCCCP";
		crew="BCCCCP_Crewman_Camo";
		typicalCargo[]=
		{
			"BCCCCP_Crewman_Camo"
		};
	};
	class BCCCCP_BMP2_ZU23: CUP_O_BMP2_ZU_TKA
	{
		faction="BCCCCP";
		crew="BCCCCP_Crewman_Camo";
		typicalCargo[]=
		{
			"BCCCCP_Crewman_Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_khk_01_co.paa",
			"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_khk_02_co.paa"
		};
	};
	class BCCCCP_BRDM: CUP_O_BRDM2_SLA
	{
		faction="BCCCCP";
		crew="BCCCCP_Crewman_Black";
		typicalCargo[]=
		{
			"BCCCCP_Crewman_Black"
		};
	};
	class BCCCCP_BRDM_ATGM: CUP_O_BRDM2_ATGM_SLA
	{
		faction="BCCCCP";
		crew="BCCCCP_Crewman_Black";
		typicalCargo[]=
		{
			"BCCCCP_Crewman_Black"
		};
	};
	class BCCCCP_BRDM_HQ: CUP_O_BRDM2_HQ_SLA
	{
		faction="BCCCCP";
		crew="BCCCCP_Crewman_Camo";
		typicalCargo[]=
		{
			"BCCCCP_Crewman_Camo"
		};
	};
	class BCCCCP_BTR60: CUP_O_BTR60_SLA
	{
		faction="BCCCCP";
		crew="BCCCCP_Crewman_Camo"
		typicalCargo[]=
		{
			"BCCCCP_Crewman_Camo"
		};
	};
	class BCCCCP_T55: CUP_I_T55_TK_GUE
	{
		side=0;
		faction="BCCCCP";
		crew="BCCCCP_Crewman_Black";
		typicalCargo[]=
		{
			"BCCCCP_Crewman_Black"
		};
	};
	class BCCCCP_T72: CUP_I_T72_NAPA
	{
		side=0;
		faction="BCCCCP";
		crew="BCCCCP_Crewman_Black";
		typicalCargo[]=
		{
			"BCCCCP_Crewman_Black"
		};
		armor=650;
	};
	class BCCCCP_T72A: CUP_O_T72_RU
	{
		displayName="T-72A";
		faction="BCCCCP";
		crew="BCCCCP_Crewman_Black";
		typicalCargo[]=
		{
			"BCCCCP_Crewman_Black"
		};
	};
	class BCCCCP_ZSU23: CUP_O_ZSU23_SLA
	{
		faction="BCCCCP";
		crew="BCCCCP_Crewman_Black";
		typicalCargo[]=
		{
			"BCCCCP_Crewman_Black"
		};
	};