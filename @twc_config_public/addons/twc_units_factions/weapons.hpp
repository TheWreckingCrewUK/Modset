

class cfgammo{
	class rocketbase;
class CUP_R_OG7_AT;

class twc_og7_nofuse: CUP_R_OG7_AT
{

scope = 2;
		maxSpeed=152;
		timeToLive=25;
		fuseDistance=25;
		airFriction=-0.0035;
		deflecting = 10;
		indirectHit=40;
		weaponType = "cannon";

};

};

class cfgmagazines{
	class CA_LauncherMagazine;
	class CUP_OG7_M;
	
class twc_og7_c_m: CUP_OG7_M
{
	Author="Hobbs";
	
	
		displayName="OG-7C";
		scope=2;
		displaynameshort="OG-7C";
		ammo="twc_og7_nofuse";
		initspeed="152";
		
		descriptionShort="OG-7 With No Fuse";
};
	
};

class cfgweapons{
		class Launcher_Base_F;
	class CUP_launch_RPG7V;

	
	class CUP_launch_RPG7V_twc: CUP_launch_RPG7V
	{
		
		displayname = "RPG7";
		scope=2;
		aiDispersionCoefX=1.05
		aiDispersionCoefY=1.05

		magazines[] = {"CUP_PG7V_M", "CUP_PG7VM_M", "CUP_PG7VL_M", "CUP_PG7VR_M", "CUP_OG7_M", "CUP_TBG7V_M", "twc_og7_c_m"};
		};
	};
	