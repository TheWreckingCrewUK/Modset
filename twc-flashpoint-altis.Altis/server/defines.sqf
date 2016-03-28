markerArray = ["warning1", "radar1", "mech1", "mech2","helo1","hq1","hq2","installation1","motorized1","inf1","inf2","inf3","support1","armour1","aa1"];

if(isNil "capturedArray") then{
	capturedArray = [];
	publicVariable "capturedArray";
};

if(isNil "remainingArray") then{
	remainingArray = ["warning1", "radar1", "mech1", "mech2","helo1","hq1","hq2","installation1","motorized1","inf1","inf2","inf3","support1","armour1","aa1"];
};

friendlyVehiclesArray = ["CUP_B_LR_Transport_GB_W","CUP_B_Jackal2_L2A1_GB_W","CUP_B_HMMWV_M2_USMC","CUP_B_HMMWV_MK19_USMC","CUP_B_AAV_USMC","CUP_B_HMMWV_TOW_USMC","CUP_B_HMMWV_Unarmed_USMC","CUP_B_AW159_Cannon_GB","CUP_B_UH60M_US","CUP_B_MV22_USMC"];