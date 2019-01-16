class CfgAmmo{
	class fow_e_no82;
	class twc_no82: fow_e_no82 {
		hit = 100;
		indirectHit = 325;
		indirectHItRange = 2;
		caliber = 4;
		deflectionSlowDown = 0;
	};
	
	class F_40mm_Green;
	class TWC_Ammo_SignalFlare_Green: F_40mm_Green {
		intensity = 30000;
		timeToLive = 45;
		coefGravity = 0.25;
	};
	
	class F_40mm_Red;
	class TWC_Ammo_SignalFlare_Red: F_40mm_Red {
		intensity = 30000;
		timeToLive = 45;
		coefGravity = 0.25;
	};
	
	class F_40mm_Yellow;
	class TWC_Ammo_SignalFlare_Yellow: F_40mm_Yellow {
		intensity = 30000;
		timeToLive = 45;
		coefGravity = 0.25;
	};
	
	class TWC_Ammo_SignalFlare_Blue: F_40mm_Yellow {
		lightColor[] = {0.25,0.25,0.5,0}; // default has no blue flare ...
		intensity = 30000; // brighter
		timeToLive = 45; // longer
		coefGravity = 0.25; // slower
	};
	
	class G_40mm_SmokeGreen;
	class TWC_Ammo_SignalSmoke_Green: G_40mm_SmokeGreen {
		simulation = "shotSmoke";
		deflectionSlowDown = 0.1;
		timeToLive = 45;
		coefGravity = 0.25;
		airFriction = 0;
	};
	
	class G_40mm_SmokeRed;
	class TWC_Ammo_SignalSmoke_Red: G_40mm_SmokeRed {
		simulation = "shotSmoke";
		deflectionSlowDown = 0.1;
		timeToLive = 45;
		coefGravity = 0.25;
		airFriction = 0;
	};
	
	class G_40mm_SmokeYellow;
	class TWC_Ammo_SignalSmoke_Yellow: G_40mm_SmokeYellow {
		simulation = "shotSmoke";
		deflectionSlowDown = 0.1;
		timeToLive = 45;
		coefGravity = 0.25;
		airFriction = 0;
	};
	
	class G_40mm_SmokeBlue;
	class TWC_Ammo_SignalSmoke_Blue: G_40mm_SmokeBlue {
		simulation = "shotSmoke";
		deflectionSlowDown = 0.1;
		timeToLive = 45;
		coefGravity = 0.25;
		airFriction = 0;
	};
};