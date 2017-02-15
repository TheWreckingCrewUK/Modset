//Imported with missionConfigFile >> "options_menu"
class options_menu
{
	idd=-1;
	movingenable=false;
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by jayman, v1.063, #Cotejo)
////////////////////////////////////////////////////////

class options: BOX
{
	idc = 1800;

	x = 0.292512 * safezoneW + safezoneX;
	y = 0.2283 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.55 * safezoneH;
};
class options_townInfo: RscButton
{
	idc = 1600;
	action = "closeDialog 0; _nil = []execVM ""client\eventHandlers\onMapSingleClick.sqf""";

	text = "Get town Info"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.088 * safezoneH;
};
class options_baseMenu: RscButton
{
	idc = 1601;
	action = "closeDialog 0; if((getPos player) distance2D (getMarkerPos ""playerBase"") < 200)then{createDialog ""base_menu""}else{hint ""You are too far from base to enter this Dialog""}";

	text = "Base Menu"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.088 * safezoneH;
};
class options_missioninfo: RscButton
{
	idc = 1602;
	action = "[] call twc_fnc_missionInfo";

	text = "Mission Info"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.088 * safezoneH;
};
class options_close: RscButton
{
	idc = 1603;
	actions = "closeDialog 0";

	text = "Close"; //--- ToDo: Localize;
	x = 0.561875 * safezoneW + safezoneX;
	y = 0.61 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.121 * safezoneH;
};
class Settings: RscButton
{
	idc = 1604;
	action = "closeDialog 0; createDialog ""settings_menu""";

	text = "Settings"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.088 * safezoneH;
};
class other: RscButton
{
	idc = 1605;

	text = "Other"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.088 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

	};
};

//Imported with missionConfigFile >> "base_menu"
class base_menu
{
	idd=-1;
	movingenable=false;
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by jayman, v1.063, #Kapexe)
////////////////////////////////////////////////////////

class options: BOX
{
	idc = 1800;

	x = 0.292512 * safezoneW + safezoneX;
	y = 0.2283 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.55 * safezoneH;
};
class options_buyUnits: RscButton
{
	idc = 1600;
	action = "closeDialog 0; createDialog ""purchase_units_menu""";

	text = "Buy Units"; //--- ToDo: Localize;
	x = 0.515469 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.170156 * safezoneW;
	h = 0.077 * safezoneH;
};
class options_buyVehicles: RscButton
{
	idc = 1601;
	action = "closeDialog 0; createDialog ""purchase_Vehicles_menu""";

	text = "Buy Vehicles"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.170156 * safezoneW;
	h = 0.088 * safezoneH;
};
class options_upgradeBase: RscButton
{
	idc = 1602;
	action = "closeDialog 0; createDialog ""upgradeBase_menu""";

	text = "Upgrade Base"; //--- ToDo: Localize;
	x = 0.314376 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.170156 * safezoneW;
	h = 0.077 * safezoneH;
};
class options_back: RscButton
{
	idc = 1603;
	action = "closeDialog 0; createDialog ""options_menu""";

	text = "Go Back"; //--- ToDo: Localize;
	x = 0.561875 * safezoneW + safezoneX;
	y = 0.61 * safezoneH + safezoneY;
	w = 0.12375 * safezoneW;
	h = 0.143 * safezoneH;
};
class storeingarage: RscButton
{
	idc = 1604;
	action = "[] call twc_fnc_storeVehicleInGarage"
	text = "Store Vehicle in Garage"; //--- ToDo: Localize;
	x = 0.515469 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.170156 * safezoneW;
	h = 0.088 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////


	};
};

//Imported with missionConfigFile >> "upgradeBase_menu"
class upgradeBase_menu
{
	idd=-1;
	movingenable=false;
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by jayman, v1.063, #Kizezu)
////////////////////////////////////////////////////////

class options: Box
{
	idc = 1800;

	x = 0.2925 * safezoneW + safezoneX;
	y = 0.228352 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.55 * safezoneH;
};
class options_baseMarksman: RscButton
{
	idc = 1600;
	action = "_nul = [] execVM ""server\sys_playerBase\addMarksman.sqf""";

	text = "Base Marksman"; //--- ToDo: Localize;
	x = 0.515469 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.180469 * safezoneW;
	h = 0.077 * safezoneH;
};
class options_baseRoadBlock: RscButton
{
	idc = 1601;
	action = "_nul = [] execVM ""server\sys_playerBase\addRoadBlock.sqf""";

	text = "Base RoadBlock"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.077 * safezoneH;
};
class options_upgradeBase: RscButton
{
	idc = 1602;
	action = "_nul = execVM ""server\sys_playerBase\addGarage.sqf""";

	text = "Garage"; //--- ToDo: Localize;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.077 * safezoneH;
};
class options_back: RscButton
{
	idc = 1603;
	action = "closeDialog 0; createDialog ""base_menu""";
	text = "Go Back"; //--- ToDo: Localize;
	x = 0.561876 * safezoneW + safezoneX;
	y = 0.61 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.154 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

	};
};

//Imported with missionConfigFile >> "purchase_units_menu"
class purchase_units_menu
{
	idd=-1;
	movingenable=false;
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by jayman, v1.063, #Fytake)
////////////////////////////////////////////////////////

class options: Box
{
	idc = 1800;

	x = 0.2925 * safezoneW + safezoneX;
	y = 0.228352 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.55 * safezoneH;
};
class Automatic_Rifleman: RscButton
{
	idc = 1600;
	action = "[""B_G_Soldier_AR_F"",250] call twc_fnc_purchaseUnits";

	text = "Automatic Rifleman (250)"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};
class medic: RscButton
{
	idc = 1601;
	action = "[""B_G_medic_F"",250] call twc_fnc_purchaseUnits";

	text = "Medic (250)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.066 * safezoneH;
};
class rifleman: RscButton
{
	idc = 1602;
	action = "[""B_G_Soldier_F"",100] call twc_fnc_purchaseUnits";

	text = "Rifleman (100)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.066 * safezoneH;
};
class goBack: RscButton
{
	idc = 1603;
	action = "closeDialog 0; createDialog ""base_menu""";

	text = "Go Back"; //--- ToDo: Localize;
	x = 0.567031 * safezoneW + safezoneX;
	y = 0.709 * safezoneH + safezoneY;
	w = 0.139219 * safezoneW;
	h = 0.066 * safezoneH;
};
class engineer: RscButton
{
	idc = 1604;
	action = "[""B_G_engineer_F"",250] call twc_fnc_purchaseUnits";
	
	text = "Engineer (250)"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};
class explosive_specialist: RscButton
{
	idc = 1605;
	action = "[""B_G_Soldier_exp_F"",250] call twc_fnc_purchaseUnits";
	
	text = "Explosives Specialist (250)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.066 * safezoneH;
};
class grenadier: RscButton
{
	idc = 1606;
	action = "[""B_G_Soldier_GL_F"",250] call twc_fnc_purchaseUnits";
	
	text = "Grenadier (250)"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};
class marksman: RscButton
{
	idc = 1607;
	action = "[""B_G_Soldier_M_F"",250] call twc_fnc_purchaseUnits";
	text = "Marksman (250)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.066 * safezoneH;
};
class Riflemanat: RscButton
{
	idc = 1608;
	action = "[""B_G_Soldier_LAT_F"",250] call twc_fnc_purchaseUnits";
	text = "Rifleman AT (250)"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};
class aaUnit: RscButton
{
	idc = 1609;
	action = "[""AA"",500] call twc_fnc_purchaseUnits";
	
	text = "AA Specialist (500)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.066 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////


	};
};

//Imported with missionConfigFile >> "purchase_Vehicles_menu"
class purchase_Vehicles_menu
{
	idd=-1;
	movingenable=false;
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by jayman, v1.063, #Fytake)
////////////////////////////////////////////////////////

class options: Box
{
	idc = 1800;

	x = 0.2925 * safezoneW + safezoneX;
	y = 0.228352 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.55 * safezoneH;
};
class Cars: RscButton
{
	idc = 1600;
	action = "closeDialog 0; createDialog ""purchase_cars_menu""";

	text = "Cars"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};
class Helicopters: RscButton
{
	idc = 1601;
	action = "closeDialog 0; createDialog ""purchase_helo_menu""";

	text = "Helicopters"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.066 * safezoneH;
};
class Trucks: RscButton
{
	idc = 1602;
	action = "closeDialog 0; createDialog ""purchase_trucks_menu""";

	text = "Trucks"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.066 * safezoneH;
};
class options_back: RscButton
{
	idc = 1603;
	action = "closeDialog 0; createDialog ""base_menu""";
	text = "Go Back"; //--- ToDo: Localize;
	x = 0.561876 * safezoneW + safezoneX;
	y = 0.61 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.154 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////


	};
};

//Imported with missionConfigFile >> "purchase_cars_menu"
class purchase_cars_menu
{
	idd=-1;
	movingenable=false;
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by jayman, v1.063, #Fytake)
////////////////////////////////////////////////////////

class options: Box
{
	idc = 1800;

	x = 0.2925 * safezoneW + safezoneX;
	y = 0.228352 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.55 * safezoneH;
};
class hatchback: RscButton
{
	idc = 1600;
	action = "[""C_Hatchback_01_F"",300] call twc_fnc_purchaseVehicles";

	text = "Hatchback (300)"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};
class hatchbackSport: RscButton
{
	idc = 1601;
	action = "[""C_Hatchback_01_sport_F"",400] call twc_fnc_purchaseVehicles";

	text = "Hatchback Sport (400)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.066 * safezoneH;
};
class suv: RscButton
{
	idc = 1602;
	action = "[""C_SUV_01_F"",300] call twc_fnc_purchaseVehicles";

	text = "SUV (300)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.066 * safezoneH;
};
class goBack: RscButton
{
	idc = 1603;
	action = "closeDialog 0; createDialog ""purchase_Vehicles_menu""";

	text = "Go Back"; //--- ToDo: Localize;
	x = 0.567031 * safezoneW + safezoneX;
	y = 0.709 * safezoneH + safezoneY;
	w = 0.139219 * safezoneW;
	h = 0.066 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////


	};
};

//Imported with missionConfigFile >> "purchase_trucks_menu"
class purchase_trucks_menu
{
	idd=-1;
	movingenable=false;
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by jayman, v1.063, #Fytake)
////////////////////////////////////////////////////////

class options: Box
{
	idc = 1800;

	x = 0.2925 * safezoneW + safezoneX;
	y = 0.228352 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.55 * safezoneH;
};
class offRoad: RscButton
{
	idc = 1600;
	action = "[""C_Offroad_01_F"",400] call twc_fnc_purchaseVehicles";

	text = "Offroad (400)"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};
class truck: RscButton
{
	idc = 1601;
	action = "[""C_Van_01_transport_F"",400] call twc_fnc_purchaseVehicles";

	text = "Truck (400)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.066 * safezoneH;
};
class boxTruck: RscButton
{
	idc = 1602;
	action = "[""C_Van_01_box_F"",300] call twc_fnc_purchaseVehicles";

	text = "Box Truck (300)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.066 * safezoneH;
};
class goBack: RscButton
{
	idc = 1603;
	action = "closeDialog 0; createDialog ""purchase_Vehicles_menu""";

	text = "Go Back"; //--- ToDo: Localize;
	x = 0.567031 * safezoneW + safezoneX;
	y = 0.709 * safezoneH + safezoneY;
	w = 0.139219 * safezoneW;
	h = 0.066 * safezoneH;
};
class jeep: RscButton
{
	idc = 1604;
	action = "[""C_Offroad_02_unarmed_F"",300] call twc_fnc_purchaseVehicles";
	
	text = "Jeep *Apex* (300)"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};
class zamak: RscButton
{
	idc = 1605;
	action = "[""C_Truck_02_transport_F"",500] call twc_fnc_purchaseVehicles";
	
	text = "Zamak Uncovered (500)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.066 * safezoneH;
};
class zamakcovered: RscButton
{
	idc = 1606;
	action = "[""C_Truck_02_covered_F"",600] call twc_fnc_purchaseVehicles";
	
	text = "Zamak Covered (600)"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////


	};
};

//Imported with missionConfigFile >> "purchase_helo_menu"
class purchase_helo_menu
{
	idd=-1;
	movingenable=false;
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by jayman, v1.063, #Fytake)
////////////////////////////////////////////////////////

class options: Box
{
	idc = 1800;

	x = 0.2925 * safezoneW + safezoneX;
	y = 0.228352 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.55 * safezoneH;
};
class m900: RscButton
{
	idc = 1600;
	action = "[""C_heli_Light_01_civil_F"",1000] call twc_fnc_purchaseVehicles";

	text = "M-900 (1000)"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};

class goBack: RscButton
{
	idc = 1603;
	action = "closeDialog 0; createDialog ""purchase_Vehicles_menu""";

	text = "Go Back"; //--- ToDo: Localize;
	x = 0.567031 * safezoneW + safezoneX;
	y = 0.709 * safezoneH + safezoneY;
	w = 0.139219 * safezoneW;
	h = 0.066 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////


	};
};

//Imported with missionConfigFile >> "settings_menu"
class settings_menu
{
	idd=-1;
	movingenable=false;
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by jayman, v1.063, #Fytake)
////////////////////////////////////////////////////////

class options: Box
{
	idc = 1800;

	x = 0.2925 * safezoneW + safezoneX;
	y = 0.228352 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.55 * safezoneH;
};
class townellipses: RscButton
{
	idc = 1600;
	action = "[] call twc_fnc_showTownEllipses";

	text = "Show/Hide Town Ellipses"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};
class medic: RscButton
{
	idc = 1601;
	action = "[""B_G_medic_F"",250] call twc_fnc_purchaseUnits";

	text = "Medic (250)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.066 * safezoneH;
};
class rifleman: RscButton
{
	idc = 1602;
	action = "[""B_G_Soldier_F"",100] call twc_fnc_purchaseUnits";

	text = "Rifleman (100)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.066 * safezoneH;
};
class goBack: RscButton
{
	idc = 1603;
	action = "closeDialog 0; createDialog ""base_menu""";

	text = "Go Back"; //--- ToDo: Localize;
	x = 0.567031 * safezoneW + safezoneX;
	y = 0.709 * safezoneH + safezoneY;
	w = 0.139219 * safezoneW;
	h = 0.066 * safezoneH;
};
class engineer: RscButton
{
	idc = 1604;
	action = "[""B_G_engineer_F"",250] call twc_fnc_purchaseUnits";
	
	text = "Engineer (250)"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};
class explosive_specialist: RscButton
{
	idc = 1605;
	action = "[""B_G_Soldier_exp_F"",250] call twc_fnc_purchaseUnits";
	
	text = "Explosives Specialist (250)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.066 * safezoneH;
};
class grenadier: RscButton
{
	idc = 1606;
	action = "[""B_G_Soldier_GL_F"",250] call twc_fnc_purchaseUnits";
	
	text = "Grenadier (250)"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};
class marksman: RscButton
{
	idc = 1607;
	action = "[""B_G_Soldier_M_F"",250] call twc_fnc_purchaseUnits";
	text = "Marksman (250)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.066 * safezoneH;
};
class Riflemanat: RscButton
{
	idc = 1608;
	action = "[""B_G_Soldier_LAT_F"",250] call twc_fnc_purchaseUnits";
	text = "Rifleman AT (250)"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.066 * safezoneH;
};
class aaUnit: RscButton
{
	idc = 1609;
	action = "[""AA"",500] call twc_fnc_purchaseUnits";
	
	text = "AA Specialist (500)"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.066 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////


	};
};