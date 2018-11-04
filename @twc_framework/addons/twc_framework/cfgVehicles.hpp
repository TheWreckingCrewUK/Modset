class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_MainActions {
			class TWC_AddToGroup {
				displayName = "Add To Group";
				condition = "group _target != group _player && { [_player, _target] call twc_fnc_isHigherRank }";
				statement = "[_target] joinSilent _player"; // can be function in future for notice
				exceptions[] = {"isNotSwimming"};
			};
		};
	};

	class Logic;
	class ModuleOrdnanceMortar_F;
	
	class Module_Base: Logic {
		class AttributesBase;
		class ModuleDescription;
	};
	
	class Module_F: Module_Base {
		class AttributesBase: AttributesBase {
			class Default;
			class Edit;
			class Combo;
			class CheckBox;
			class CheckBoxNumber;
			class ModuleDescription;
			class Units;
		};
		
		class ModuleDescription: ModuleDescription {
			class Player;
		};
	};
	
	class ModuleCAS_F;

	class twc_ModuleMission: Module_F {
		author = "[TWC] jayman";
		scope = 2;
		displayName = "TWC Mission Module";
		category = "twc_missionSetup";
		function = "twc_fnc_missionModuleInit";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;

		class Arguments {
			class enabled {
				displayName = "Enabled";
				description = "Enable if this is a TWC Operation";
				typeName = "BOOL";
				defaultValue = 1;
			};

			class era {
				displayName="ERA";
				description="Select the ERA";
				typeName="STRING";
				defaultValue="modern";

				class values {
					class modern {
						name = "Modern";
						value = "modern";
					};

					class millennial {
						name = "millennial";
						value = "millennial";
					};

					class coldwar {
						name="Cold War";
						value = "coldwar";
					};

					class ww2 {
						name = "WW2";
						value = "ww2";
					};

					class mmo {
						name = "MMO";
						value = "mmo";
					};
				};
			};

			class boatSafety {
				displayName = "Added Protection From Boats";
				description = "Enable to keep players from being squished by rhibs.";
				typeName = "BOOL";
				defaultValue = 0;
			};

			class civilianEquipment {
				displayName = "Civilian Equipment";
				description = "Enable to remove goggles and backpacks from civilians";
				typeName = "BOOL";
				defaultValue = 1;
			};

			class deadBodies {
				displayName = "Player Base Body Cleanup";
				description = "Range. Set to 0 to Disable";
				typeName = "NUMBER";
				defaultValue=250;
			};

			class disconectGear {
				displayName = "Disconect Gear";
				description = "Removes gear from the previous body when they disconect";
				typeName = "BOOL";
				defaultValue = 1;
			};

			class nightGear {
				displayName = "Nighttime Equipment";
				description = "Enable to give NVGs, Flares, and chemlights to units";
				typeName = "BOOL";
				defaultValue = 0;
			};

			class rollSleeves {
				displayName = "Roll Sleeves";
				description = "Enable to allow Rolling Sleeves";
				typeName = "BOOL";
				defaultValue = 0;
			};

			class run {
				displayName = "Running in Base";
				description = "Set base no run zone. 0 = Run anywhere";
				typeName = "NUMBER";
				defaultValue = 0;
			};

			class safeZone {
				displayName = "Shooting in Base";
				description = "Set number to set size of base no-fire zone. 0 = no safezone";
				typeName = "NUMBER";
				defaultValue = 400;
			};

			class zuesObjects {
				displayName = "Zeus Objects";
				description = "Enable to give zeus access to all objects";
				typeName = "BOOL";
				defaultValue = 1;
			};

			class disableIntro {
				displayName = "Legacy Intro";
				description = "Turns off the camera/intro credits system";
				typeName = "BOOL";
				defaultValue = 0;
			};

			class specialIntro {
				displayName = "Special Intro";
				description = "CfgSound entry of special intro here, otherwise leave blank";
				typeName = "STRING";
				defaultValue = 0;
			};
		};
	};
	
	class twc_ModuleOrdnanceMortar_Dummy_small: ModuleOrdnanceMortar_F {
		scope = 1;
		ammo = "twc_dummyround_artillery_small";
	};
	class twc_ModuleOrdnanceMortar_Dummy_medium: ModuleOrdnanceMortar_F {
		scope = 1;
		ammo = "twc_dummyround_artillery_medium";
	};
	class twc_ModuleOrdnanceMortar_Dummy_big: ModuleOrdnanceMortar_F {
		scope = 1;
		ammo = "twc_dummyround_artillery_big";
	};
	
	class twc_moduelHC: Module_F {
		author="[TWC] jayman";
		scope=2;
		displayName="TWC Headless Client Module";
		category="twc_missionSetup";
		function="twc_fnc_hcModuleInit";
		functionPriority=1;
		isGlobal=0;
		isTriggerActivated=0;
		isDisposable=0;
		class Arguments
		{
			class enabled
			{
				displayName="Enabled";
				description="Enable for headless clients";
				typeName="BOOL";
				defaultValue=1;
			};
			class delay
			{
				displayName="Delay";
				description="Adds a delay before HC begin. 120 is usually optimal.";
				typeName="NUMBER";
				defaultValue=120;
			};
			class endMission
			{
				displayName="End Mission";
				description="Ends mission when all players disconnect";
				typeName="BOOL";
				defaultValue=0;
			};
		};
	};
	
	class twc_moduelCache: Module_F {
		author="[TWC] jayman";
		scope=2;
		displayName="TWC Cache Module";
		category="twc_missionSetup";
		function="twc_fnc_cacheModuleInit";
		functionPriority=1;
		isGlobal=0;
		isTriggerActivated=0;
		isDisposable=0;
		class Arguments
		{
			class enabled
			{
				displayName="Enabled";
				description="Enable for unit caching";
				typeName="BOOL";
				defaultValue=1;
			};
			class aiRange
			{
				displayName="AI Range";
				description="Range at which AI will cache. 0 to disable.";
				typeName="NUMBER";
				defaultValue=1500;
			};
			class vehicleRange
			{
				displayName="Vehicle Caching";
				description="Range at which vehicles will cache. 0 to disable.";
				typeName="NUMBER";
				defaultValue=2000;
			};
		};
	};

	class twc_moduleDebug: Module_F {
		author = "[TWC] Bosenator";
		scope = 2;
		displayName = "Debug Mode";
		category = "twc_missionSetup";
		function = "twc_fnc_moduleDebug";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;

		class Arguments {
			class enabled {
				displayName = "Enabled";
				description = "Enable debug mode";
				typeName = "BOOL";
				defaultValue = 0;
			};
		};
	};

	class twc_moduleHealPlayer: Module_F {
		author="[TWC] jayman";
		category="twc_zeus";
		scope=1;
		scopeCurator = 2;
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=0;
		function="twc_fnc_healPlayer";
		curatorCanAttach = 1;
		displayName = "Heal Player";
	};
	
	class twc_moduleKillPlayer: Module_F {
		author="[TWC] jayman";
		category="twc_zeus";
		scope=1;
		scopeCurator = 2;
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=0;
		function="twc_fnc_killPlayer";
		curatorCanAttach = 1;
		displayName = "Kill Player";
	};
	
	class twc_modulesetSpectator: Module_F {
		author="[TWC] jayman";
		category="twc_zeus";
		scope=1;
		scopeCurator = 2;
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=0;
		function="twc_fnc_setSpectator";
		curatorCanAttach = 1;
		displayName = "Toggle Unit ACRE Spectator";
	};

	class twc_moduleMedicalInfo: Module_F {
		author="[TWC] jayman";
		category="twc_zeus";
		scope=1;
		scopeCurator = 2;
		functionPriority=1;
		isGlobal=1;
		isTriggerActivated=0;
		function="twc_fnc_medicalInfo";
		curatorCanAttach = 1;
		displayName = "Hint Unit Medical Info";
	};

	class TWC_Module_CreateTask: Module_F {
		author = "[TWC] Rik";
		category = "twc_mission_framework";
		displayName = "Create Task";
		function = "twc_fnc_moduleCreateTask";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\complete_task_ca.paa";
		functionPriority = 5;
		isDisposable = 0;

		class Arguments {
			class Id {
				displayName="Task ID";
				description="Unique Task ID";
				typeName="String";
				defaultValue="";
			};
			class Description {
				displayName="Description";
				description="Task Description";
				typeName="String";
				defaultValue="";
			};
			class Title {
				displayName="Title";
				description="Task Title";
				typeName="String";
				defaultValue="";
			};
			class Position {
				displayName="Position";
				description="Position can be either marker, object, or position.";
				typeName="String";
				defaultValue="";
			};
		};

		class ModuleDescription: ModuleDescription {
			description = "Creates a new Task.";
			sync[] = {"EmptyDetector"};
		};
	};
	
	class TWC_Module_GliderTakeOff: Module_F {
		author = "[TWC] Rik";
		category = "twc_mission_framework";
		displayName = "Glider Take Off Action";
		function = "twc_fnc_moduleGliderTakeOff";
		scope = 2;
		isGlobal = 2;
		isTriggerActivated = 0;
		icon = "\twc_framework\ui\airborne_ca.paa";
		functionPriority = 5;
		isDisposable = 1;

		class Arguments {
			class Capturedata {
				displayName="Capture Data";
				description="A variable that has the capture data.";
				//typeName="STRING";
				defaultValue="";
			};
		};

		class ModuleDescription: ModuleDescription {
			description = "Creates an action for commanders that allows them to control when the gliders take off.";
			sync[] = {"EmptyDetector", "Plane_F"};
		};
	};

	class TWC_Module_VirtualArtillery: Module_F {
		author = "[TWC] Bosenator & jayman & Rik";
		category = "twc_mission_framework";
		displayName = "Virtual Artillery";
		function = "twc_fnc_moduleVirtualArtillery";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\virtual_artillery_ca.paa";
		functionPriority = 1;
		class Arguments {
			class Type
			{
				displayName="Type";
				description="Type Of Ordinance";
				typeName="STRING";
				defaultValue="HE";
				class values
				{
					class HE
					{
						name="HE";
						value="HE";
					};
					class HE_Harmless_small
					{
						name="HE Harmless (Small)";
						value="HE_Harmless_Small";
					};
					class HE_Harmless_medium
					{
						name="HE Harmless (Medium)";
						value="HE_Harmless_Medium";
					};
					class HE_Harmless_big
					{
						name="HE Harmless (Big)";
						value="HE_Harmless_Big";
					};
					class Smoke
					{
						name="Smoke";
						value="SMOKE";
					};
					class Illum
					{
						name="Illum";
						value="ILLUM";
					};
				};
			};
			class Rounds
			{
				displayName = "Rounds";
				description="Number of rounds";
				typeName="Number";
				defaultValue=5;
			};
			class Dispersion
			{
				displayName = "Dispersion";
				description="Dispersion diameter";
				typeName="Number";
				defaultValue=250;
			};
			class Delay
			{
				displayName = "Delay";
				description="Delay between rounds";
				typeName="Number";
				defaultValue=10;
			};
			class SafeArea
			{
				displayName = "SafeArea";
				description="Area marker defined SafeZone";
				typeName="String";
				defaultValue="nil";
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Call in Virtual Artillery";
			sync[] = {"EmptyDetector"};
		};
	};
	
	class TWC_Module_Artillery: Module_F {
		author = "[TWC] Rik";
		category = "twc_mission_framework";
		displayName = "Artillery";
		function = "twc_fnc_moduleArtillery";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\virtual_artillery_ca.paa";
		functionPriority = 1;
		class Arguments {
			class Type
			{
				displayName="Type";
				description="Type Of Ordinance";
				typeName="STRING";
				defaultValue="HE";
				class values
				{
					class HE
					{
						name="HE";
						value="HE";
					};
					class Smoke
					{
						name="Smoke";
						value="SMOKE";
					};
					class Illum
					{
						name="Illum";
						value="ILLUM";
					};
				};
			};
			class Rounds
			{
				displayName = "Rounds";
				description="Number of rounds";
				typeName="Number";
				defaultValue=5;
			};
			class Dispersion
			{
				displayName = "Dispersion";
				description="Dispersion diameter";
				typeName="Number";
				defaultValue=250;
			};
			class Delay
			{
				displayName = "Delay";
				description="Delay between rounds";
				typeName="Number";
				defaultValue=10;
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Call in Virtual Artillery";
			sync[] = {"EmptyDetector"};
		};
	};
	
	class TWC_Module_CompleteTask: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Complete Task";
		function = "twc_fnc_moduleUpdateTask";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\complete_task_ca.paa";
		functionPriority = 1;
		class Arguments {
			class TaskID
			{
				displayName="TaskID";
				description="Task1, Task2, Task3 etc";
				typeName="STRING";
				defaultValue="";
			};
			class Status
			{
				displayName = "Task Status";
				description="Succeeded/Failed";
				typeName="String";
				defaultValue="Succeeded";
				class values
				{
					class SUCCEEDED
					{
						name="SUCCEEDED";
						value="SUCCEEDED";
					};
					class FAILED
					{
						name="FAILED";
						value="FAILED";
					};
					class CANCELED
					{
						name="CANCELLED";
						value="CANCELLED";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Update Task";
			sync[] = {"EmptyDetector"};
		};
	};
	
	class TWC_Module_Defend: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Defend";
		function = "twc_fnc_moduleDefend";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\defend_ca.paa";
		functionPriority = 1;
		class Arguments
		{
			class Radius
			{
				displayName="Radius";
				description="Radius";
				typeName="Number";
				defaultValue=100;
			};
			class Size
			{
				displayName="Size";
				description="Size";
				typeName="Number";
				defaultValue=2;
			};
			class Patrol
			{
				displayName="Patrol";
				description="Have units patrol?";
				typeName="BOOl";
				defaultValue=0;
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "TWC Defend Function";
			sync[] = {"AnyAI"};
		};
	};
	
	class TWC_Module_DummyBullets: Module_F {
		author = "[TWC] Rik";
		category = "twc_mission_framework";
		displayName = "Harmless Static";
		function = "twc_fnc_moduleDummyBullets";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\twc_framework\ui\stationary_units_ca.paa";
		functionPriority = 1;
		class ModuleDescription: ModuleDescription {
			description = "TWC Dummy Bullets Function";
			sync[] = {"AnyAI"};
		};
	};
	
	class TWC_Module_AirAssault: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Air Assault";
		function = "twc_fnc_moduleAirAssault";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\air_assault_ca.paa";
		functionPriority = 1;
		class Arguments
		{
			class LZ
			{
				displayName="LZ";
				description="Landing Zone";
				typeName="String";
				defaultValue="";
			};
			class InfantryMarker
			{
				displayName="Infantry Move";
				description="Marker that infantry will move to";
				typeName="String";
				defaultValue="";
			};
			class ERA
			{
				displayName="ERA";
				description="Era for type of units";
				typeName="String";
				defaultValue="Modern";
				class values
				{
					class Modern
					{
						name="Modern";
						value="Modern";
					};
					class Cold
					{
						name="Cold";
						value="Cold";
					};
					class Custom
					{
						name="Custom";
						value="Custom";
					};
				};
			};
			class HeloClass
			{
				displayName="Helicopter Classname";
				description="If custom please input helicopter classname";
				typeName="String";
				defaultValue="";
			};
			class InfClass
			{
				displayName="Infantry Classname";
				description="If custom please input infantry group classname";
				typeName="String";
				defaultValue="";
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Call in Air Assault";
			sync[] = {""};
		};
	};

	class TWC_Module_Airborne: Module_F {
		author = "[TWC] Rik";
		category = "twc_mission_framework";
		displayName = "Airborne Assault";
		function = "twc_fnc_moduleAirborne";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\airborne_ca.paa";
		functionPriority = 1;
		class Arguments
		{
			class Destination
			{
				displayName="Destination";
				description="Location where the plane will drop the units";
				typeName="String";
				defaultValue="";
			};
			class End
			{
				displayName="End Location";
				description="Location where the plane will delete";
				typeName="String";
				defaultValue="";
			};
			class Plane_Units
			{
				displayName="Plane/Units";
				description="Type of units and plane to spawn";
				typeName="String";
				defaultValue="Modern_VDV";
				class values
				{
					class Modern_British
					{
						name="Modern British Section (C-130)";
						value="Modern_British";
					};
					class Cold_British
					{
						name="Cold War British Section (C-130)";
						value="Cold_British";
					};
					class 1990_British
					{
						name="1990's British Section (C-130)";
						value="1990_British";
					};
					class WW2_British
					{
						name="WWII British Section (C-47)";
						value="WW2_British";
					};
					class Cold_VDV
					{
						name="Cold War VDV Section (An-12)";
						value="Cold_VDV";
					};
					class Modern_VDV
					{
						name="Modern VDV Section (An-12)";
						value="Modern_VDV";
					};
					class SLA
					{
						name="SLA Section (Li-2)";
						value="SLA";
					};
					class RACS
					{
						name="RACS Section (C-130)";
						value="RACS";
					};
					class Takistani_Army_1
					{
						name="Takistani Section (C-130)";
						value="Takistani_Army_1";
					};
					class Takistani_Army_2
					{
						name="Takistani Section (An-2)";
						value="Takistani_Army_2";
					};
				};
			};
			class Type_Plane
			{
				displayName="Type (Plane)";
				description="Class name of a plane that overrides the selection";
				typeName="String";
				defaultValue="";
			};
			class Type_Cargo
			{
				displayName="Type (Cargo)";
				description="An array of units to make a group that overrides the selection";
				typeName="String";
				defaultValue="";
			};
			class Amount_Cargo
			{
				displayName="Size";
				description="Amount of groups to drop";
				typeName="Number";
				defaultValue=0;
			};
			class Infantry_Attack_Location
			{
				displayName="Infantry Attack";
				description="Location the infantry will move to after their drop";
				typeName="String";
				defaultValue="";
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Call in airborne group";
			sync[] = {""};
		};
	};
	
	class TWC_Module_AttackPlane: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Attack Plane";
		function = "twc_fnc_moduleAttackPlane";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\attack_plane_ca.paa";
		functionPriority = 1;
		class Arguments
		{
			class Patrol
			{
				displayName="Patrol";
				description="Marker plane will patrol around";
				typeName="String";
				defaultValue="";
			};
			class Radius
			{
				displayName="Radius";
				description="Radius plane will fly around marker";
				typeName="Number";
				defaultValue=0;
			};
			class Type
			{
				displayName="Type Of Attack Plane";
				description="ClassName";
				typeName="String";
				defaultValue="";
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Call in Attack Plane";
			sync[] = {""};
		};
	};
	
	class TWC_Module_Amient_AttackPlane: ModuleCAS_F
	{
		author = "[TWC] Rik";
		category = "twc_mission_framework";
		displayName = "Ambient Attack Plane";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\attack_plane_ca.paa";
		functionPriority = 1;
		class Arguments
		{
			class Type
			{
				description = "";
				displayName = "Type";
				typeName = "NUMBER";
				class values
				{
					class Bomb
					{
						name = "CAS - Bomb Strike";
						value = 3;
					};
					class Gun
					{
						default = 1;
						name = "CAS - Gun Run";
						value = 0;
					};
					class GunMissiles
					{
						name = "CAS - Gun and Missiles";
						value = 2;
					};
					class Missiles
					{
						name = "CAS - Missile Strike";
						value = 1;
					};
				};
			};
			class Vehicle
			{
				description = "";
				displayName = "Plane";
				class values
				{
					/*class Spitfire
					{
						name = "Spitfire";
						value = "spitfire_v_G";
					}; Todo after the spitfire gets fixed.*/
					class Hellcat_US
					{
						name = "Hellcat (US)";
						value = "fow_va_f6f_c";
					};
					class Hellcat_UK
					{
						name = "Hellcat (UK)";
						value = "fow_va_f6f_c_faa";
					};
				};
			};
		};
		class ModuleDescription  {
			description = "Call in Ambient Attack Plane, automatically despawned";
			sync[] = {""};
		};
	};
	
	class TWC_Module_CommandMessage: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Command Message";
		function = "twc_fnc_moduleCommandMessage";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\command_message_ca.paa";
		functionPriority = 5;
		isDisposable = 0;

		class Arguments {
			class Message {
				displayName="Message";
				description="Text To Display";
				typeName="String";
				defaultValue="";
			};
		};

		class ModuleDescription: ModuleDescription {
			description = "Send Command A Message";
			sync[] = {"EmptyDetector"};
		};
	};
	
	class TWC_Module_IntelHint: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Intel Action Hint";
		function = "twc_fnc_moduleIntelHint";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		icon = "\twc_framework\ui\intel_action_ca.paa";
		functionPriority = 1;
		isDisposable = 0;
		class Arguments
		{
			class Title
			{
				displayName="Title";
				description="Title To Display";
				typeName="String";
				defaultValue="";
			};
			class Message
			{
				displayName="Message";
				description="Text To Display";
				typeName="String";
				defaultValue="";
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Intel Hint";
			sync[] = {""};
		};
	};
	
	class TWC_Module_IntelHintWithVariable: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_mission_framework";
		displayName = "Intel Action Hint with Variable";
		function = "twc_fnc_moduleIntelHintWithVariable";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		icon = "\twc_framework\ui\intel_action_variable_ca.paa";
		functionPriority = 1;
		isDisposable = 0;
		
		class Arguments {
			class Title {
				displayName = "Title";
				description = "Title To Display";
				typeName = "String";
				defaultValue = "";
			};

			class Message {
				displayName = "Message";
				description = "Text To Display";
				typeName = "String";
				defaultValue = "";
			};

			class VariableName {
				displayName = "Variable Name";
				description = "Name of the GLOBAL variable to use";
				typeName = "String";
				defaultValue = "";
			};
		};

		class ModuleDescription: ModuleDescription {
			description = "Intel Hint with Variable";
			sync[] = {""};
		};
	};
	
	class TWC_Module_LightsSwitch: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Lights Switch";
		function = "twc_fnc_moduleLightsSwitch";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		icon = "\twc_framework\ui\light_switch_ca.paa";
		functionPriority = 1;
		isDisposable = 0;
		class Arguments
		{
			class Status
			{
				displayName="On/Off";
				description="Select On or Off";
				typeName="Number";
				defaultValue=0.95;
				class values
				{
					class On
					{
						name="On";
						value=0;
					};
					class Off
					{
						name="Off";
						value=0.95;
					};
				};
			};
			class Radius
			{
				displayName="Radius";
				description="Radius from module to disable lights";
				typeName="Number";
				defaultValue=0;
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Turn off the lights";
			sync[] = {""};
		};
	};
	
	class TWC_Module_DaisyCutter: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Daisy Cutter";
		function = "twc_fnc_moduleDaisyCutter";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\daisy_cutter_ca.paa";
		functionPriority = 1;
		class ModuleDescription: ModuleDescription {
			description = "Boom";
			sync[] = {""};
		};
	};
		
	class TWC_Module_StationaryUnits: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Set Stationary Units";
		function = "twc_fnc_moduleStationaryUnits";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\twc_framework\ui\stationary_units_ca.paa";
		functionPriority = 1;
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Set Unit(s) as Stationary";
			sync[] = {"AnyAI"};
		};
	};
	
	class TWC_Module_MovableUnits: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_mission_framework";
		displayName = "Set Movable Units";
		function = "twc_fnc_moduleMovableUnits";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		icon = "\twc_framework\ui\movable_units_ca.paa";
		functionPriority = 1;
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Set Unit(s) as Movable";
			sync[] = {"AnyAI"};
		};
	};

	class TWC_Module_DisableCaching: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Disable Caching on Units";
		function = "twc_fnc_moduleDisableCaching";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\twc_framework\ui\disable_caching_ca.paa";
		functionPriority = 1;
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Disable Cache On Unit(s)";
			sync[] = {"AnyAI", "AnyVehicle"};
		};
	};

	class TWC_Module_GrabComposition: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_missionSetup";
		displayName = "Log Composition to RPT file";
		function = "twc_fnc_moduleGrabComposition";
		scope = 2;
		scopeCurator = 0;
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 1;
		functionPriority = 1;
	};
	
	class TWC_Module_IgnoreForwardBase: Module_F {
		author = "[TWC] Bosenator & jayman";
		category = "twc_mission_framework";
		displayName = "Ignore Forward Base";
		function = "twc_fnc_moduleIgnoreForwardBase";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\twc_framework\ui\ignore_foward_base_ca.paa";
		functionPriority = 1;
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Make unit ignore the Forward Base";
			sync[] = {"AnyAI"};
		};
	};

	/* class TWC_Module_ArtillerySpotter: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_mission_framework";
		displayName = "Artillery System - Set Spotter(s)";
		function = "twc_fnc_moduleArtillerySpotter";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		icon = ""; // TODO
		functionPriority = 1;
		class Arguments {
			class maxRange {
				displayName = "Maximum Range";
				description = "How far can the spotter(s) spot out to? Targets beyond this range, or go further than this range won't be fired upon. Set in meters.";
				typeName = "NUMBER";
				defaultValue = 1000;
			};

			class minDelay {
				displayName = "Minimum Delay";
				description = "How fast after spotting the target, should the call be made. In seconds. Set to 0 to be random between 2 and 5 minutes.";
				typeName = "NUMBER";
				defaultValue = 120;
			};

			class startingRadius {
				displayName = "Starting Radius";
				description = "The initial radius before zeroing correction narrows it down, closer to the target. Set in meters.";
				typeName = "NUMBER";
				defaultValue = 500;
			};

			class skillLevel {
				displayName = "Skill Level";
				description = "Sets the Skill Level of the Spotter(s). Affects correction accuracy, and speed of communication.";
				typeName = "STRING";
				defaultValue = "untrained";
				
				class values {
					class trained {
						name = "Trained";
						value = "trained";
					};
					
					class untrained {
						name = "Untrained";
						value = "untrained";
					};
				};
			};

			class illuminationOnly {
				displayName = "Illumination Only";
				description = "Should this spotter only call in for Illumination? Tick to enable.";
				typeName = "BOOL";
				defaultValue = 0;
			};
		};
		class ModuleDescription: ModuleDescription {
			description = "Set Unit(s) as Artillery Spotter(s)";
			sync[] = {"AnyAI"};
		};
	};
	
	class TWC_Module_ArtilleryPieces: Module_F {
		author = "[TWC] Bosenator";
		category = "twc_mission_framework";
		displayName = "Artillery System - Set Piece(s)";
		function = "twc_fnc_moduleArtilleryPieces";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		icon = ""; // TODO
		functionPriority = 1;
		class Arguments {};
		class ModuleDescription: ModuleDescription {
			description = "Set Piece(s) Available to Spotter(s)";
			sync[] = {"AnyVehicle"};
		};
	};	*/
};