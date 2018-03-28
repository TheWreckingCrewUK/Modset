class Burnes_FV4034_01;
class TWC_Vehicle_FV4034_Base: Burnes_FV4034_01 {
	scope = 0;
	scopeCurator = 0;
	side = 1;
	faction = "TWC_General";

	displayname = "FV4034 (EMPTY)";
	editorSubcategory = "TWC_ForceType_Armoured";

	class TransportItems     { };
	class TransportMagazines { };
	class TransportWeapons   { };
	class TransportBackpacks { };

	accuracy = 1000;
	armor = 600;
	armorStructural = 5;

	camShakeCoef = 0;
	
	class CamShake {
		power = 5;
		minSpeed = 5;
		frequency = 20;
		distance = 50;
	};
};