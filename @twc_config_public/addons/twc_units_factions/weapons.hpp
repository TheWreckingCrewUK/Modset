

class cfgammo{
	class rocketbase;
class CUP_R_OG7_AT: rocketbase
{

scope = 2;
		maxSpeed=152;
		timeToLive=25;
		cost=80;
		fuseDistance=25;
		airFriction=-0.0035;
		deflecting = 10;
		indirectHit=40;

};



};


class cfgweapons{
		class Launcher_Base_F;
	class CUP_launch_RPG7V: Launcher_Base_F
	{
		scope=2;
		aiDispersionCoefX=1.03
		aiDispersionCoefY=1.05

		magazines[] = {"CUP_PG7V_M", "CUP_PG7VM_M", "CUP_PG7VL_M", "CUP_PG7VR_M", "CUP_OG7_M", "CUP_TBG7V_M", "twc_og7_c_m"};
		};
	};
	