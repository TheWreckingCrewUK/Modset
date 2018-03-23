class CfgPatches {
	class TWC_Ropes {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.8;

		requiredAddons[] = {
			"cba_main",
			"ace_interaction"
		};

		author[] = {};
		authorUrl = "";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

class CfgFunctions {
	class TWC_Ropes {
		class init {
			file = "twc_ropes\functions";
			
			class init {};
			class adjustMass {};
			class areRopesDeployed {};
			class attachRopes {};
			class canAttachRope {};
			class canDropRope {};
			class canPickupRope {};
			class deployRopes {};
			class dropRopes {};
			class extendRopes {};
			class findNearbyCargoHeli {};
			class getLiftCapability {};
			class pickUpRopes {};
			class releaseCargo {};
			class retractRopes {};
			class ropeSetMass {};
			class setMass {};
			class shortenRopes {};
		};
	};
};

class Extended_InitPost_EventHandlers {
	class Helicopter_F {
		class TWC_Ropes_InitPos_eh {
			init = "";
		};
	};
};