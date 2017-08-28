class CfgPatches
{
	class twc_ammoboxes
	{
		units[]=
		{
			"twc_radioTable"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			
		};
	};
};
class CfgVehicles
{
	class Land_CampingTable_F;
	class twc_radioTable:Land_CampingTable_F
	{
		displayname = "TWC RadioTable";
		ace_dragging_canDrag = 1;
		ace_dragging_carryDirection = 0;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;
		class ACE_Actions{
			class ACE_MainActions{
				selection = "";
				distance = 2;
				condition = "true";
				position = "[0,0,0.4]";
				class twc_placeRadio{
					displayName = "Setup Radio";
					condition = "true";
					statement = "_radio = ""Vysilacka"" createVehicle (position this); _radio attachTo [this,[0,0,1.5]]; _radio setDir ((getDir this)+270);";
                    icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa";
				};
			};
		};
	};
};