//Imported with missionConfigFile >> "options_menu"
class options_menu
{
	idd=-1
	movingenable=false;
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by jayman, v1.063, #Dozoro)
////////////////////////////////////////////////////////

class options: Box
{
	idc = 1800;
	text = ""; //--- ToDo: Localize;
	x = 0.2925 * safezoneW + safezoneX;
	y = 0.228352 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.55 * safezoneH;
};
class options_townInfo: RscButton
{
	idc = 1600;
	text = "Get town Info"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.088 * safezoneH;
	action = "closeDialog 0; _nil = []execVM ""client\eventHandlers\onMapSingleClick.sqf""";
};
class options_purchaseUnits: RscButton
{
	idc = 1601;
	text = "Purchase"; //--- ToDo: Localize;
	x = 0.314375 * safezoneW + safezoneX;
	y = 0.423 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.088 * safezoneH;
};
class options_missioninfo: RscButton
{
	idc = 1602;
	text = "Mission Info"; //--- ToDo: Localize;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.302 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.077 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

	};
};