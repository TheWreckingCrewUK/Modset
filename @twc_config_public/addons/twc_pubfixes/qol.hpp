
class Extended_Init_EventHandlers
{
	class CBA_B_InvisibleTarget
	{
		class baseobject
		{
			serverinit = "params ['_entity']; [_entity] spawn {params ['_entity']; waituntil {!isnil 'twc_fnc_baseobject'};[_entity] spawn twc_fnc_baseobject}";
		};
	};
	class CUP_Ural_BaseTurret
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [-0.00687825,-0.001,-0.85]";
		};
	};
	class UK3CB_BAF_Husky_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [-0.0933615,0.20011,-1.2]";
		};
	};
	class UK3CB_BAF_MAN_HX60_Cargo_Base
	{
		class cog
		{
			serverinit = "params ['_car']; if (_car isKindOf 'UK3CB_BAF_MAN_HX58_Base') exitwith {}; _car setCenterOfMass [0.0543661,3.1,-0.95]";
		};
	};
	class UK3CB_BAF_MAN_HX60_Fuel_Base
	{
		class cog
		{
			serverinit = "params ['_car']; if (_car isKindOf 'UK3CB_BAF_MAN_HX58_Base') exitwith {}; _car setCenterOfMass [0.0545745,0.171793,-1.0]";
		};
	};
	class UK3CB_BAF_MAN_HX60_Repair_Base
	{
		class cog
		{
			serverinit = "params ['_car']; if (_car isKindOf 'UK3CB_BAF_MAN_HX58_Base') exitwith {}; _car setCenterOfMass [0.0564885,0.171587,-1.05]";
		};
	};
	class UK3CB_BAF_MAN_HX60_Transport_Base
	{
		class cog
		{
			serverinit = "params ['_car']; if (_car isKindOf 'UK3CB_BAF_MAN_HX58_Base') exitwith {}; _car setCenterOfMass [0.0546674,0.514337,-1.1]";
		};
	};
	
	//hx58, the 6 wheeled variant
	class UK3CB_BAF_MAN_HX58_Cargo_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [0.0543661,3.0,-0.95]";
		};
	};
	class UK3CB_BAF_MAN_HX58_Fuel_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [0.0542845,0.0186793,-1.0]";
		};
	};
	class UK3CB_BAF_MAN_HX58_Repair_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [0.0542845,0.024607,-1.05]";
		};
	};
	class UK3CB_BAF_MAN_HX58_Transport_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [-0.00687825,-0.814309,1.5]";
		};
	};
	class CUP_Wolfhound_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [0.0542845,0.395569,-1.1]";
		};
	};
	
	class CUP_Mastiff_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [-0.00687825,-0.814309,1.7]";
		};
	};
	
	
	class rhsusf_hmmwe_base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [-0.0644166,0.174903,-1.2]";
		};
	};
	
	class CUP_UAZ_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [-0.0,0.3,0.65]";
		};
	};
	
};



class cfgRecoils
{
	class twc_rifle_556
	{
		muzzleOuter[]	= { 0.06,  0.2,  0.1,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.02, 0.04 }; //min/max force
		permanent	= 0.3; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.1; //muzzle jump
	};
	class twc_rifle_556_prone
	{
		muzzleOuter[]	= { 0.06,  0.2,  0.02,  0.1 };
		kickBack[]	= { 0.02, 0.04 };
		permanent	= 0.3;
		temporary	= 0.1;
	};
	class twc_rifle_556_short
	{
		muzzleOuter[]	= { 0.07,  0.22,  0.012,  0.15 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.04, 0.06 }; //min/max force
		permanent	= 0.3; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.12; //muzzle jump
	};
	class twc_rifle_556_short_prone
	{
		muzzleOuter[]	= { 0.05,  0.3,  0.1,  0.3 };
		kickBack[]	= { 0.04, 0.06 };
		permanent	= 1;
		temporary	= 0.1;
	};
	
	class twc_rifle_556_long
	{
		muzzleOuter[]	= { 0.07,  0.15,  0.05,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.02, 0.04 }; //min/max force
		permanent	= 0.25; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.1; //muzzle jump
	};
	class twc_rifle_556_long_prone
	{
		muzzleOuter[]	= { 0.05,  0.1,  0.02,  0.1 };
		kickBack[]	= { 0.04, 0.06 };
		permanent	= 0.25;
		temporary	= 0.1;
	};
	
	class twc_mg_556
	{
		muzzleOuter[]	= { 0.15,  0.15,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.03, 0.05 }; //min/max force
		permanent	= 0.1; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.04; //muzzle jump
	};
	class twc_mg_556_prone
	{
		muzzleOuter[]	= { 0.05,  0.1,  0.02,  0.02 };
		kickBack[]	= { 0.04, 0.06 };
		permanent	= 0.1;
		temporary	= 0.3;
	};
	
	class twc_rifle_762
	{
		muzzleOuter[]	= { 0.1,  0.5,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.05, 0.06 }; //min/max force
		permanent	= 0.4; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.05; //muzzle jump
	};
	class twc_rifle_762_prone
	{
		muzzleOuter[]	= { 0.05,  0.2,  0.02,  0.1 };
		kickBack[]	= { 0.05, 0.07 };
		permanent	= 0.4;
		temporary	= 0.05;
	};
	
 class twc_mg_762
	{
		muzzleOuter[]	= { 0.1,  0.15,  0.03,  0.1 };
		kickBack[]	= { 0.03, 0.04 };
		permanent	= 0.4;
		temporary	= 0.07;
	};
	
 class twc_mg_prone
	{
		muzzleOuter[]	= { 1.5,  1.5,  0.5,  0.45 };
		kickBack[]	= { 0.02, 0.03 };
		permanent	= 0.1;
		temporary	= 0.1;
	};
	
	class twc_shotgun_1
	{
		muzzleOuter[]	= { 0.3,  0.5,  0.15,  0.15 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.09, 0.12 }; //min/max force
		permanent	= 1.1; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.1; //muzzle jump
	};
};

