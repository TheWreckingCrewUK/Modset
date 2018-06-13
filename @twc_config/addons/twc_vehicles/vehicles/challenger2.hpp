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
	/*armor = 600;
	armorStructural = 5;*/
	class complexGearbox {
		GearboxRatios[] = {"R1",-0.4,"N",0,"D1",6.00,"D2",5.0,"D3",3.5,"D4",1.6};
		TransmissionRatios[] = {"High",6.0};
		gearBoxMode = "auto";
		moveOffGear = 3;
		driveString = "D";
		neutralString = "N";
		reverseString = "R";
		transmissionDelay = 0.1;
	};

	camShakeCoef = 0;
	
	class CamShake {
		power = 5;
		minSpeed = 5;
		frequency = 20;
		distance = 50;
	};
};