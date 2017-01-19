class cfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;
			class Combo;
			class CheckBox;
			class CheckBoxNumber;
			class ModuleDescription;
			class Units;
			
		};
		class ModuleDescription
		{
			class AnyBrain;
			
		};
	};
	class twc_ModuleMission: Module_F
	{
		scope = 2;
		displayName = "TWC Mission Module";
		category = "twc_missionSetup";
		
		function = "twc_fnc_moduleMission";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		author = "[TWC] jayman";
		class Arguments{
			class enabled
			{
				displayName = "Enabled";
				description = "Enable if this is a TWC Operation";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class boatSafety
			{
				displayName = "Added Protection From Boats";
				description = "Enable to keep players from being squished by rhibs.";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class civilianEquipment
			{
				displayName = "Remove Unnecessary Civilian Equipment";
				description = "Enable to remove goggles and backpacks from civilians";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class deadBodies
			{
				displayName = "Player Base Body Cleanup";
				description = "Enable to clean up dead bodies in the base";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class forwardBase
			{
				displayName = "Forward Base";
				description = "Enable to allow CSM and Platoon to create a forward base";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class giveRadio
			{
				displayName = "Give Long Range Radios";
				description = "Enable to give Long Range Radios to Command Units";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class rollSleeves
			{
				displayName = "Roll Sleeves";
				description = "Enable to allow Rolling Sleeves";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class run
			{
				displayName = "Running in Base";
				description = "Enable to allow Running in Base";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class safeZone
			{
				displayName = "Shooting in Base";
				description = "Set number to set size of base no-fire zone. 0 = no safezone";
				typeName = "NUMBER";
				defaultValue = 400;
			};
			class zuesObjects
			{
				displayName = "Zeus Objects";
				description = "Enable to give zeus access to all objects";
				typeName = "BOOL";
				defaultValue = 1;
			};
		};
		
	};
};