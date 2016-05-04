markerArray = ["aa1","airbase2","hq1","inf1","inf2","inf3","inf4","installation1","mainHQ","mech1","motorized1","outpost1","outpost2","radar1","radar2","support1"];

if(isNil "capturedArray") then{
	capturedArray = [];
	publicVariable "capturedArray";
};

if(isNil "remainingArray") then{
	remainingArray = ["aa1","airbase2","hq1","inf1","inf2","inf3","inf4","installation1","mainHQ","mech1","motorized1","outpost1","outpost2","radar1","radar2","support1"];
	publicVariable "remainingArray";
};

friendlyVehiclesArray = ["CUP_B_LR_Transport_GB_W","CUP_B_Jackal2_L2A1_GB_W", "CUP_B_Jackal2_GMG_GB_W", "CUP_B_FV432_Bulldog_GB_D", "CUP_B_Ridgeback_HMG_GB_D", "CUP_B_M1126_ICV_M2_Desert_Slat", "CUP_B_M113_USA", "CUP_B_HMMWV_M2_USA", "CUP_B_HMMWV_MK19_USA", "CUP_B_HMMWV_TOW_USA", "CUP_B_HMMWV_Transport_USA", "CUP_B_AAV_USMC", "CUP_B_HMMWV_M2_USMC", "CUP_B_HMMWV_MK19_USMC", "CUP_B_HMMWV_TOW_USMC", "CUP_B_HMMWV_Unarmed_USMC", "CUP_B_RG31_M2_USMC"];

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