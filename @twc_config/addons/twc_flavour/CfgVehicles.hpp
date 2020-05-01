class CfgVehicles {
	class Sign_Checkpoint_US_EP1;
	class TWC_Objects_Checkpoint_UK: Sign_Checkpoint_US_EP1 {
		displayName = "Checkpoint (UK)";
		hiddenSelectionsTextures[] = {"\twc_flavour\data\checkpoint_sign_co.paa"};
	};
	
	//Markerlight
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class TWC_Item_Markerlight_place {
					displayName = "Place Markerlight";
					condition = "[_player, 'TWC_Markerlight'] call ace_common_fnc_hasItem";
					statement = "[_player, 'TWC_Markerlight'] call twc_flavour_fnc_placeMarkerlight";
					showDisabled = 0;
				};
			};
		};
	};
	
	class Item_Base_F;
	class TWC_Item_Markerlight: Item_Base_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "Markerlight";
		vehicleClass = "Items";
		class TransportItems {
			class TWC_Markerlight {
				name = "TWC_Markerlight";
				count = 1;
			};
		};
	};
	
	class PortableHelipadLight_01_yellow_F;
	class TWC_Objects_Markerlight: PortableHelipadLight_01_yellow_F {
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1,0};
		ace_dragging_dragDirection = 0;
		editorCategory = "EdCat_Supplies";
		
		class ACE_Actions {
			class ACE_MainActions {
				class TWC_Markerlight_Pickup {
					displayName = "Pickup Markerlight";
					distance = 5;
					condition = "true";
					statement = "[_player, _target] call twc_flavour_fnc_pickupMarkerlight";
					exceptions[] = {};
				};
			};
		};
	};
};