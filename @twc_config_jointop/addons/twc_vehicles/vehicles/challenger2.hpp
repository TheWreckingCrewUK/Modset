class CUP_Challenger2_base;
class TWC_Vehicle_FV4034_Base: CUP_Challenger2_base {
	scope = 0;
	scopeCurator = 0;
	side = 1;
	faction = "TWC_General";

	maximumLoad = 2500;

	displayname = "FV4034 (EMPTY)";
	editorSubcategory = "TWC_ForceType_Armoured";

	class TransportItems     { };
	class TransportMagazines { };
	class TransportWeapons   { };
	class TransportBackpacks { };

	camShakeCoef = 0;

	class CamShake {
		power = 5;
		minSpeed = 2;
		frequency = 20;
		distance = 30;
	};
};