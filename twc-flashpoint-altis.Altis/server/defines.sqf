markerArray = ["aa1","hq1","inf1","inf2","inf3","inf4","installation1","mainHQ","mech1","motorized1","outpost1","outpost2","radar1","radar2","support1"];

if(isNil "capturedArray") then{
	capturedArray = [];
	publicVariable "capturedArray";
};

if(isNil "remainingArray") then{
	remainingArray = ["aa1","hq1","inf1","inf2","inf3","inf4","installation1","mainHQ","mech1","motorized1","outpost1","outpost2","radar1","radar2","support1"];
	publicVariable "remainingArray";
};

friendlyVehiclesArray = [
	"UK3CB_BAF_Wildcat_AH1_CAS_8A","RHS_UH60M_w",
	
	"CUP_B_LR_Transport_GB_W","UK3CB_BAF_Jackal2_L2A1_W", "UK3CB_BAF_Jackal2_GMG_W", "CUP_B_FV432_Bulldog_GB_D", "CUP_B_Ridgeback_HMG_GB_D",
	
	"CUP_B_M1126_ICV_M2_Desert_Slat", "rhsusf_m113_usarmy", "rhsusf_m1025_w_m2", "rhsusf_m1025_w_mk19", "CUP_B_HMMWV_TOW_USA", "rhsusf_m998_w_4dr_fulltop",
	
	"CUP_B_AAV_USMC","CUP_B_RG31_M2_USMC",
	
	"rhsusf_m1a2sep1Tuskiwd_usarmy","RHS_M2A3_BUSKIII_wd","CUP_B_FV510_GB_D_Slat","CUP_B_LAV25_USMC","CUP_B_M6LineBacker_USA_D","CUP_B_M1128_MGS_Desert_Slat"
	
	];
if (isModded == 0)then{
	radar = "Landradar_Small_F";
	ATteam = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionAT");
	AAteam = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionAA");
	squadMG = (configfile >> "CfgGroups" >> "Independent" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionMG");
	squad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySquad");
	mechCrew = ["CUP_O_sla_Crew","CUP_O_sla_Crew","CUP_O_sla_Crew"];
	uralZu23 = ["CUP_O_Ural_Zu23_SLA"];
	shilka = ["CUP_O_ZSU23_SLA"];
	tunguska = ["CUP_O_2S6M_RU"];
	BRDM = ["CUP_OBRDM2_SLA"];
	BRDMAT= ["CUP_OBRDM2_ATGM_SLA"];
	mechSquad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySquad");
	bmp = ["CUP_O_BMP2_SLA"];
	tank = ["CUP_O_T72_SLA"];
	tanks = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Armored" >> "CUP_O_SLA_TankPlatoon");
	hind = ["CUP_O_Mi24_V_RU"];
	transportPlane = "CUP_O_C130J_Cargo_TKA";
	bmpString = "CUP_O_BMP2_SLA";
	uaz = "CUP_O_UAZ_OPEN_RU";
	ural = "CUP_O_Ural_SLA";
};
if (isModded == 1)then{
	radar = "Landradar_Small_F";
	ATteam = (configfile >> "CfgGroups" >> "East" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry_emr" >> "rhs_group_rus_msv_infantry_emr_section_AT");
	AAteam = (configfile >> "CfgGroups" >> "East" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry_emr" >> "rhs_group_rus_msv_infantry_emr_section_AA");
	squadMG = (configfile >> "CfgGroups" >> "East" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry_emr" >> "rhs_group_rus_msv_infantry_emr_section_mg");
	squad = (configfile >> "CfgGroups" >> "East" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry_emr" >> "rhs_group_rus_msv_infantry_emr_squad");
	mechCrew = ["rhs_msv_emr_armoredCrew","rhs_msv_emr_armoredCrew","rhs_msv_emr_armoredCrew"];
	uralZu23 = ["RHS_Ural_Zu23_MSV_01"];
	shilka = ["rhs_zsu234_aa"];
	tunguska = ["CUP_O_2S6M_RU"];
	BRDM = ["rhsgref_BRDM2_msv"];
	BRDMAT= ["rhsgref_BRDM2_ATGM_msv"];
	mechSquad = (configfile >> "CfgGroups" >> "East" >> "rhs_faction_msv" >> "rhs_group_rus_msv_bmp1" >> "rhs_group_rus_msv_bmp1_squad");
	bmp = ["rhs_bmp1_msv"];
	bmpString = "rhs_bmp1_msv";
	tank = ["rhs_t72ba_tv"];
	tanks = (configfile >> "CfgGroups" >> "East" >> "rhs_faction_tv" >> "rhs_group_rus_tv_72" >> "RHS_T72BAPlatoon");
	hind = ["RHS_Mi24P_CAS_vdv"];
	transportPlane = "CUP_O_C130J_Cargo_TKA";
	uaz = "RHS_UAZ_MSV_01";
	ural = "RHS_Ural_MSV_01";
};