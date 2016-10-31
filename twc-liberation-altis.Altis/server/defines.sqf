bluControlledArray = [];
civillianCarList = ["C_Hatchback_01_F","C_Hatchback_01_sport_F","C_Offroad_01_F","C_Offroad_01_repair_F","C_SUV_01_F","C_Van_01_transport_F","C_Van_01_box_F"];
if(isNil "townInfoArray")then{
	townInfoArray = [];
	publicVariable "townInfoArray";
};
squad = (configfile >> "CfgGroups" >> "Indep" >> "IND_F" >> "Infantry" >> "HAF_InfSquad");
squadAA = (configfile >> "CfgGroups" >> "Indep" >> "IND_F" >> "Infantry" >> "HAF_InfTeam_AA");
squadAT = (configfile >> "CfgGroups" >> "Indep" >> "IND_F" >> "Infantry" >> "HAF_InfTeam_AT");