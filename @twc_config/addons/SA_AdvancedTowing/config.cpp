class CfgPatches
{
	class SA_AdvancedTowing
	{
		units[]=
		{
			"SA_AdvancedTowing"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Modules_F"
		};
	};
};
class CfgNetworkMessages
{
	class AdvancedTowingRemoteExecClient
	{
		module="AdvancedTowing";
		parameters[]=
		{
			"ARRAY",
			"STRING",
			"OBJECT",
			"BOOL"
		};
	};
	class AdvancedTowingRemoteExecServer
	{
		module="AdvancedTowing";
		parameters[]=
		{
			"ARRAY",
			"STRING",
			"BOOL"
		};
	};
};
class CfgFunctions
{
	class SA
	{
		class AdvancedTowing
		{
			file="\SA_AdvancedTowing\functions";
			class advancedTowingInit
			{
				postInit=1;
			};
		};
	};
};
class cfgMods
{
	author="76561198131707990";
	timepacked="1460535878";
};

class CfgVehicles {

  class LandVehicle;
  class Tank: LandVehicle {
    class ACE_Actions {
			class ACE_MainActions {
				class Tow_hub {
					displayName = "Towing";
					condition = "true";
					statement = "";
					showDisabled = 0;
					priority = 1;
					distance = 4.500000;
					icon = "";
					class Deploy_Ropes {
						displayName = "Deploy Ropes";
						condition = "call SA_Take_Tow_Ropes_Action_Check";
						statement = "[] call SA_Take_Tow_Ropes_Action";
						showDisabled = 0;
						priority = 1;
						distance = 4.500000;
						icon = "";
					};
					class Attach_Ropes {
						displayName = "Attach Ropes";
						condition = "call SA_Attach_Tow_Ropes_Action_Check";
						statement = "[] call SA_Attach_Tow_Ropes_Action";
						showDisabled = 0;
						priority = 1;
						distance = 4.500000;
						icon = "";
					};
					class Put_Away_Ropes {
						displayName = "Put Away Tow Ropes";
						condition = "call SA_Put_Away_Tow_Ropes_Action_Check";
						statement = "[] call SA_Put_Away_Tow_Ropes_Action";
						showDisabled = 0;
						priority = 1;
						distance = 4.500000;
						icon = "";
					};
				};
			};
		};
	};
	class Car: LandVehicle {
    class ACE_Actions {
			class ACE_MainActions {
				class Tow_hub {
					displayName = "Towing";
					condition = "true";
					statement = "";
					showDisabled = 0;
					priority = 1;
					distance = 4.500000;
					icon = "";
					class Deploy_Ropes {
						displayName = "Deploy Ropes";
						condition = "call SA_Take_Tow_Ropes_Action_Check";
						statement = "[] call SA_Take_Tow_Ropes_Action";
						showDisabled = 0;
						priority = 1;
						distance = 4.500000;
						icon = "";
					};
					class Attach_Ropes {
						displayName = "Attach Ropes";
						condition = "call SA_Attach_Tow_Ropes_Action_Check";
						statement = "[] call SA_Attach_Tow_Ropes_Action";
						showDisabled = 0;
						priority = 1;
						distance = 4.500000;
						icon = "";
					};
					class Put_Away_Ropes {
						displayName = "Put Away Tow Ropes";
						condition = "call SA_Put_Away_Tow_Ropes_Action_Check";
						statement = "[] call SA_Put_Away_Tow_Ropes_Action";
						showDisabled = 0;
						priority = 1;
						distance = 4.500000;
						icon = "";
					};
				};
			};
		};
	};
	
	class man;
	class CAManBase:man {
		class ACE_SelfActions {
			class Tow_hub {
				displayName = "Towing";
				condition = "";
				statement = "";
				showDisabled = 0;
				priority = 1;
				distance = 4.500000;
				icon = "";
				class Drop_Tow_Ropes {
					displayName = "Drop Tow Ropes";
					condition = "call SA_Drop_Tow_Ropes_Action_Check";
					statement = "[] call SA_Drop_Tow_Ropes_Action";
					showDisabled = 0;
					priority = 1;
					distance = 4.500000;
					icon = "";
				};
				class Pick_Up_Tow_Ropes {
					displayName = "Pickup Tow Ropes";
					condition = "call SA_Pickup_Tow_Ropes_Action_Check";
					statement = "[] call SA_Pickup_Tow_Ropes_Action";
					showDisabled = 0;
					priority = 1;
					distance = 4.500000;
					icon = "";
				};
			};
		};
	};
};
