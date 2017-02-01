	class CUP_Mi24_D_Base;
	class CUP_Mi24_D_MEV_Base;
	class CUP_Mi24_P_Base;
	class CUP_Mi24_V_Base;
	
	class BCCCCP_Mi24_D: CUP_Mi24_D_Base
	{
		scope=2;
		side=0;
		accuracy=1000;
		author="$STR_CUP_AUTHOR_STRING";
		crew="BCCCCP_Heli_Pilot";
		typicalCargo[]=
		{
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot"
		};
		faction="BCCCCP";
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\skins\10_ru_national_dark_001_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\skins\10_ru_national_dark_002_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\preview\CUP_O_Mi24_V_RU.jpg";
	};
	class BCCCCP_Mi24_D_Tr: CUP_Mi24_D_MEV_Base
	{
		scope=2;
		side=0;
		accuracy=1000;
		displayName="Mi-24D (Transport)";
		author="$STR_CUP_AUTHOR_STRING";
		crew="BCCCCP_Heli_Pilot";
		typicalCargo[]=
		{
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot"
		};
		faction="BCCCCP";
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\skins\10_ru_national_dark_001_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\skins\10_ru_national_dark_002_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\preview\CUP_O_Mi24_V_RU.jpg";
	};
	class BCCCCP_Mi24_P: CUP_Mi24_P_Base
	{
		scope=2;
		side=0;
		accuracy=1000;
		author="$STR_CUP_AUTHOR_STRING";
		crew="BCCCCP_Heli_Pilot";
		typicalCargo[]=
		{
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot"
		};
		faction="BCCCCP";
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\skins\07_ru_grey_001_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\skins\07_ru_grey_002_co.paa"
		};
	};
	class BCCCCP_Mi24_V: CUP_Mi24_V_Base
	{
		scope=2;
		side=0;
		accuracy=1000;
		author="$STR_CUP_AUTHOR_STRING";
		crew="BCCCCP_Heli_Pilot";
		typicalCargo[]=
		{
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot"
		};
		faction="BCCCCP";
		hiddenSelectionsTextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\skins\08_ru_lightgreen_001_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\skins\08_ru_lightgreen_002_co.paa"
		};
	};
	
	class CUP_O_MI6A_RU;
	class CUP_O_MI6T_RU;
	
	class BCCCCP_Mi6A: CUP_O_MI6A_RU
	{
		faction="BCCCCP";
		crew="BCCCCP_Heli_Pilot";
		typicalCargo[]=
		{
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot"
		};
	};
	class BCCCCP_Mi6T: CUP_O_MI6T_RU
	{
		faction="BCCCCP";
		crew="BCCCCP_Heli_Pilot";
		typicalCargo[]=
		{
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot"
		};
	};
	
	class CUP_O_Mi8_medevac_RU;
	class CUP_O_Mi8_VIV_RU;
	class CUP_O_Mi8_RU;
	class CUP_B_Mi171Sh_ACR;
	
	class BCCCCP_Mi8T: CUP_O_Mi8_medevac_RU
	{
		
		displayName="Mi-8T";
		crew="BCCCCP_Heli_Pilot";
		typicalCargo[]=
		{
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot"
		};
		faction="BCCCCP";
	};
	class BCCCCP_Mi8T_VIV: CUP_O_Mi8_VIV_RU
	{
		
		displayName="Mi-8T (VIV)";
		crew="BCCCCP_Heli_Pilot";
		typicalCargo[]=
		{
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot"
		};
		faction="BCCCCP";
	};
	class BCCCCP_Mi8TV: CUP_O_Mi8_RU
	{
		
		displayName="Mi-8TV";
		crew="BCCCCP_Heli_Pilot";
		typicalCargo[]=
		{
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot"
		};
		faction="BCCCCP";
	};
	class BCCCCP_Mi8TVK: CUP_B_Mi171Sh_ACR
	{
		
		scope=2;
		side=0;
		displayName="Mi-8T (VIV)";
		crew="BCCCCP_Heli_Pilot";
		typicalCargo[]=
		{
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot",
			"BCCCCP_Heli_Pilot"
		};
		faction="BCCCCP";
		htextures[]=
		{
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_g_vsr_co.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"
		};
	};
	
	class CUP_O_Su25_RU_2;
	class CUP_O_Su25_RU_3;
	
	class BCCCCP_Su25_CAS: CUP_O_Su25_RU_3
	{
		displayName="Su-25 (CAS)";
		faction="BCCCCP";
		crew="BCCCCP_Jet_Pilot";
		typicalCargo[]=
		{
			"BCCCCP_Jet_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1_rus_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2_rus_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_Su25\Data\preview\CUP_O_Su25_RU_1.jpg";
	};
	class BCCCCP_Su25_AT: CUP_O_Su25_RU_2
	{
		displayName="Su-25 (AT)";
		faction="BCCCCP";
		crew="BCCCCP_Jet_Pilot";
		typicalCargo[]=
		{
			"BCCCCP_Jet_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1_rus_co.paa",
			"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2_rus_co.paa"
		};
		editorPreview="CUP\AirVehicles\CUP_AirVehicles_Su25\Data\preview\CUP_O_Su25_RU_1.jpg";
	};