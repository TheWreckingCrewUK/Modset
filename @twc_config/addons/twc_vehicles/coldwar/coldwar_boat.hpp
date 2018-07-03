#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE COLDWAR_BOAT
class I_C_Boat_Transport_02_F;
class TWC_Vehicle_ColdWar_RHIB_Black: I_C_Boat_Transport_02_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "RHIB (Black)";
	editorSubcategory = "TWC_ForceType_Amphibious";

	class TransportItems {};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};

	ace_interaction_canPush = 1;

	class AcreRacks {
		class Rack_1 {
			displayName = "Vehicle Radio";
			shortName = "Vehicle Radio";
			componentName = "ACRE_VRC64";
			allowedPositions[] = {"driver"};
			disabledPositions[] = {};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC77";
			isRadioRemovable = 0;
		};
	};
};