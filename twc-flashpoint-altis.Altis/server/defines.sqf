markerArray = ["warning1", "radar1", "mech1", "mech2","helo1","hq1","hq2","installation1","motorized1","inf1","inf2","inf3","support1","armour1","aa1"];

if(isNil "capturedArray") then{
	capturedArray = [];
	publicVariable "capturedArray";
};

if(isNil "remainingArray") then{
	remainingArray = ["warning1", "radar1", "mech1", "mech2","helo1","hq1","hq2","installation1","motorized1","inf1","inf2","inf3","support1","armour1","aa1"];
};

friendlyVehiclesArray = ["CUP_B_LR_Transport_GB_W","CUP_B_Jackal2_L2A1_GB_W","CUP_B_HMMWV_M2_GPK_USA","CUP_B_HMMWV_MK19_USMC","CUP_B_AAV_USMC","CUP_B_HMMWV_TOW_USMC","CUP_B_HMMWV_Unarmed_USMC","CUP_B_AW159_Cannon_GB","CUP_B_UH60M_US","CUP_B_MV22_USMC"];

radar = "Landradar_Small_F";

ATteam = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionAT");

AAteam = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionAA");

squadMG = (configfile >> "CfgGroups" >> "Independent" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionMG");

squad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySquad");

mechCrew = ["CUP_O_sla_Crew","CUP_O_sla_Crew","CUP_O_sla_Crew"];

shilka = ["CUP_O_ZSU23_SLA"];

tunguska = ["CUP_O_2S6M_RU"];

BRDM = ["CUP_OBRDM2_SLA"];

BRDMAT= ["CUP_OBRDM2_ATGM_SLA"];

mechSquad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySquad");

bmp = ["CUP_O_BMP2_SLA"];

tanks = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Armored" >> "CUP_O_SLA_TankPlatoon");

hind = ["CUP_O_Mi24_V_RU"];

transportPlane = "CUP_O_C130J_Cargo_TKA";

uaz = "CUP_O_UAZ_OPEN_RU";

ural = "CUP_O_Ural_SLA";