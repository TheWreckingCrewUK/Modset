class CfgVehicles {
	class LandVehicle;
	class StaticWeapon: LandVehicle {
         class Turrets;
    };
	class fow_w_6Pounder: StaticWeapon {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
	class TWC_Vehicle_WW2_6pounder: fow_w_6Pounder {
		author = "[TWC] Ross";
		scope = 2;
		scopeCurator = 2;
		typicalCargo[] = {"TWC_Infantry_WW2_UK_Early_Woodland_Rifleman"};
		side = 3;
		displayName = "6 Pounder";
		faction = "TWC_WW2";
		crew = "TWC_Infantry_WW2_UK_Early_Woodland_Rifleman";
		
			class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"TWC_Weapon_57mm_6pounder_Vehicle"};
				magazines[] = {};
				gunnerForceOptics = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0, 50};
				maxHorizontalRotSpeed = 0.5;
			};
		};
			class ace_csw {
			enabled = 1;
			proxyWeapon = "TWC_Weapon_57mm_6pounder_Vehicle";
			magazineLocation = "_target selectionPosition 'NabojniceStart'";
			disassembleWeapon = ""; // What the weapon will disassemble to
			disassembleTurret = ""; // Which tripod will appear when weapon has been disassembled
			ammoLoadTime = 5;
			ammoUnloadTime = 4;
			desiredAmmo = 1; // When the weapon is reloaded it will try and reload to this ammo capacity
			disassembleFunc = ""; // A callback function for when the CSW gets disassembled. Arguments: [tripod, staticWeapon]
		};
	};
};