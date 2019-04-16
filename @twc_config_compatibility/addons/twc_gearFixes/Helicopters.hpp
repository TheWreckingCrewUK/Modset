class Heli_light_03_base_F;
class UK3CB_BAF_Wildcat_Base: Heli_light_03_base_F {
	TWC_getOut = 1;
};

class Helicopter_Base_H;
class CUP_SA330_Base: Helicopter_Base_H {
	TWC_getOut = 1;
};

class CUP_CH47F_base: Helicopter_Base_H {
	backRotorForceCoef = 0.9;
	cyclicForwardForceCoef = 1.5;
	cyclicAsideForceCoef = 1.3;
	bodyFrictionCoef = 1.4;
	armorStructural = 20;
};