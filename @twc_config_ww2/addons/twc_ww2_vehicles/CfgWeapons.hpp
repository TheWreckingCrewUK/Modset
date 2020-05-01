class CfgWeapons {
	class HMG_M2;
	class Bomb_04_Plane_CAS_01_F;
	class GMG_20mm;
	
	//Spitfire CAS Module Compatibility
	class 4xBrowning_303: HMG_M2 {
		cursor = "EmptyCursor";
		cursoraim = "mg";
	};

	class hispano_mkII_20mm: GMG_20mm {
		cursor = "EmptyCursor";
		cursoraim = "mg";
	};

	class 7Y_Bomblauncher: Bomb_04_Plane_CAS_01_F {
		cursor = "EmptyCursor";
		cursorAim = "bomb";
	};
	
	//P-47 CAS Module Compatibility
	class LIB_PlaneMGun_base;
	class RocketPods;
	class LIB_8xM2_P47: LIB_PlaneMGun_base {
		cursoraim = "mg";
	};

	class LIB_M8_Launcher_P47: RocketPods {
		cursorAim = "missile";
	};
	
	//Ju-87 CAS Module Compatibility
	class LIB_PlaneCannon_base;
	class LIB_2xMG151_JU87: LIB_PlaneCannon_base {
		cursorAim = "mg";
	};
};