//quality-of-life


//vitalhit system. rifle hits to chest kill, unless there's armour (basic calibre vs range system here). pistol doubletaps to chest kill. hits to player fire a function, but that function is blank by default and can be defined per-mission. In public PVE modes it's used for instakill on headshots, and in ops it can be used for CBRN scenarios where getting shot in the head could break the gas mask
//hobbsnote: spine1 is lower abdomen, spine3 is ribcage
class Extended_HitPart_EventHandlers {
	class man {
		class twc_vitalhit {
			HitPart = "(_this select 0) params ['_target', '_shooter', '_projectile', '_position', '_velocity', '_selection', '_ammo', '_vector', '_radius', '_surfaceType', '_isDirect'];if (isplayer _target) exitwith {_this call twc_fnc_playerheadshot};if (!alive _target) exitwith {};if (!_isdirect) exitwith {}; _value = (_ammo select 0); if (_value > 20) exitwith {[_target, {if (isDamageAllowed _this) then {_this setdamage 1;};}] remoteExec ['call', _target];}; if (('head' in _selection) || (('neck' in _selection) && ((random 1) > 0.5))) exitwith {[_target, {if (isDamageAllowed _this) then {_this setdamage 1;};}] remoteExec ['call', _target];}; if (!(('spine1' in _selection) || ('spine2' in _selection) || ('spine3' in _selection))) exitwith {};_armour = (getNumber (configFile >> 'CfgWeapons' >> vest _target >> 'iteminfo' >> 'HitpointsProtectionInfo' >> 'Chest' >> 'armor')); _hit = (((((_value) - 4) max 3) + ((vectorMagnitude _velocity) * 0.01) - (((_armour) max 0) * 0.1)) + (random 1));if ('spine3' in _selection) exitwith {if ((_hit > 10) || ((_hit > 6) && ((lifeState _target) != 'HEALTHY'))) then {[_target, {if (isDamageAllowed _this) then {_this setdamage 1;};}] remoteExec ['call', _target];};};if (('spine1' in _selection) || ('spine2' in _selection)) exitwith {if ((_hit > 12) || ((_hit > 6) && ((lifeState _target) != 'HEALTHY'))) then {[_target, {if (isDamageAllowed _this) then {_this setdamage 1;};}] remoteExec ['call', _target];};};";
		};
		
	};
};


//center of gravity improvements
class Extended_Init_EventHandlers
{
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
			serverinit = "params ['_car']; _car setCenterOfMass [0.0543661,3.2,-0.95]";
		};
	};
	class UK3CB_BAF_MAN_HX58_Fuel_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [0.0542845,-0.186793,-1]";
		};
	};
	class UK3CB_BAF_MAN_HX58_Repair_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [0.06,-0.04607,-1.05]";
		};
	};
	class UK3CB_BAF_MAN_HX58_Transport_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [-0.00687825,0.114309,-1.25]";
		};
	};
	/*
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
	*/
	
	class rhsusf_hmmwe_base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [-0.0644166,0.174903,-1.2]";
		};
	};
	
	class rhsgref_BRDM2
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [0.00923233,0.16117,-1.16]";
		};
	};
	
	class CUP_UAZ_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [-0.0,-0.1,0.65]";
		};
	};
	
	class UK3CB_BAF_LandRover_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [0.00841949,0.511681,-1.03113]";
		};
	};
};


//recoil profiles


/*hobbs recoil notes:


permanent is how much the muzzle raises after each shot. If you set it crazy high and then fire once, you'll finish staring at the sky. No effect when on bipod
temporary is how much the muzzle jumps mid-shot. Affected by muzzleouter and affects bipod as well.
kickback is not just how much the weapon kicks back visually. When on bipod the weapon (ad point-of-aim) jumps up a specific amount, and this is increased/decreased by kickback
*/
class cfgRecoils
{
	class recoil_mmg_01;
	//mmg 01 outerzone is muzzleOuter[] = {"0.6*0.2","1.5*1","0.8*1","0.3*1"};
	
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
	
	class twc_mg_556: recoil_mmg_01
	{
		muzzleOuter[]	= { 0.05,  0.15,  0.025,  0.1 };
		kickBack[]	= { 0.04, 0.07 }; //min/max force
		permanent	= 0.2; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.08; //muzzle jump
	};
	class twc_mg_556_prone
	{
		muzzleOuter[]	= { 0.05,  0.1,  0.02,  0.02 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.02, 0.035 };
		permanent	= 0.1;
		temporary	= 0.1;
	};
	
	class twc_rifle_762
	{
		muzzleOuter[]	= { 0.1,  0.5,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.06, 0.08 }; //min/max force
		permanent	= 0.4; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.05; //muzzle jump
	};
	class twc_rifle_762_prone
	{
		muzzleOuter[]	= { 0.05,  0.2,  0.01,  0.1 };
		kickBack[]	= { 0.05, 0.07 };
		permanent	= 0.4;
		temporary	= 0.2;
	};
	//For rifles on 762 long
	class twc_rifle_762L: twc_rifle_762
	{
		kickBack[]	= { 0.06, 0.08 }; //min/max force
		permanent	= 0.4; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.15; //muzzle jump
	};
	class twc_rifle_762L_prone: twc_rifle_762_prone
	{
		kickBack[]	= { 0.05, 0.07 };
		permanent	= 0.4;
		temporary	= 0.2;
	};
	
 class twc_mg_762: twc_mg_556
	{
		kickBack[]	= { 0.04, 0.08 };
		permanent	= 0.4; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.04; //muzzle jump
	};
	
 class twc_mg_prone
	{
		muzzleOuter[] = {0.07,0.22,0.012,0.15};
		kickBack[]	= { 0.01, 0.02 };
		permanent	= 0.1;
		temporary	= 0.015;
	};
	
	class twc_shotgun_1
	{
		muzzleOuter[]	= { 0.3,  0.5,  0.15,  0.15 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.09, 0.12 }; //min/max force
		permanent	= 0.9; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.1; //muzzle jump
	};
};



//camshake on weapon fired and gunwalk/mortarwalk. Walk means AI will not hit heavy weapons such as turrets and artillery on the first shot, but will self-correct with each shot
 
class Extended_FiredBIS_EventHandlers {
	class Car {
		class twc_gunwalk {
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7] call twc_fnc_gunwalk;";
		};
	};
	class Helicopter {
		class twc_gunwalk {
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7] call twc_fnc_gunwalk;";
		};
	};
	class Tank {
		class twc_gunwalk {
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7, 2] call twc_fnc_gunwalk;";
		};
	};
	class CAManBase {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_amount = 2.8; if ((_this select 1) in (missionnamespace getvariable ['twc_subguns', ['SMG_03C_black', 'CUP_smg_MP5A5', 'TWC_CUP_smg_MP5A5_flashlight_clean', 'rhsusf_weap_MP7A2_desert', 'TWC_CUP_smg_MP5SD6_clean', 'fow_w_sten_mk5', 'LIB_Sten_Mk5', 'LIB_Sten_Mk2', 'SP_smg_sterling']])) then {_amount = 1.0;};addCamShake [_amount, 0.4, 15]};";
		};
	};
	class Helicopter_Base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if (!((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player))) exitwith {}; _rec = 0.6;  if (!((((getShotParents (_this select 6)) select 1)) == (player))) then {_rec = 0.1;};addCamShake [_rec, 0.5, 15];";
		};
	};
	class Plane {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((typeof (_this select 0)) in ['USAF_AC130U']) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2; addCamShake [_rec, 0.5, 15]};";
		};
	};
	class Car_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if (!((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player))) exitwith {};_time = 0.3;_rec = 2; _freq = 15; if (((_this select 1) isKindOf ['HMG_127', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['GMG_F', configFile >> 'CfgWeapons'])) then {_rec = 3} else {if ((_this select 4) isKindOf ['missilebase', configFile >> 'CfgAmmo']) then {_rec = 4; _time = 2; _freq = 15;};};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 3)};addCamShake [_rec, _time, _freq];";
		};
	};
	class StaticMGWeapon {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2; if (((_this select 1) isKindOf ['HMG_127', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['GMG_F', configFile >> 'CfgWeapons'])) then {_rec = 3};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, 0.3, 15]};";
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7] call twc_fnc_gunwalk;";
		};
	};
	class StaticGrenadeLauncher {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 3; addCamShake [_rec, 0.5, 15]};";
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7] call twc_fnc_gunwalk;";
		};
	};
	class StaticATWeapon {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 3; addCamShake [_rec, 0.5, 15]};";
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7] call twc_fnc_gunwalk;";
		};
	};
	class StaticMortar {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 3; addCamShake [_rec, 0.8, 15]};";
			FiredBIS = "[_this select 6, _this select 4, _this select 7] call twc_fnc_mortarwalk;";
		};
	};
	class StaticCannon {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 9; addCamShake [_rec, 1, 15]};";
			FiredBIS = "[_this select 6, _this select 4, _this select 7] call twc_fnc_mortarwalk;";
		};
	};
	class CUP_MCV80_Base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2;_time = 0.5; if ((_this select 1) == 'CUP_Vlmg_L94A1_Coax') then {_rec = 0.1;_time = 0.3};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 3)};addCamShake [_rec, _time, 15]};";
		};
	};
	class CUP_B_FV432_GB_GPMG {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2;_time = 0.5; if ((_this select 1) == 'ukcw_l37a1_coax') then {_rec = 0.1;_time = 0.3};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 3)};addCamShake [_rec, _time, 15]};";
		};
	};
	class APC_Tracked_01_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 1;_time = 0.7};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 3)};addCamShake [_rec, _time, 15]};";
		};
	};
	class APC_Tracked_02_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 1;_time = 0.7};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 3)};addCamShake [_rec, _time, 15]};";
		};
	};
	class APC_Tracked_03_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 1;_time = 0.7};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 3)};addCamShake [_rec, _time, 15]};";
		};
	};
	class UK3CB_BAF_FV432_Mk3_Base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2; if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 3)};addCamShake [_rec, 0.3, 15]};";
		};
	};
	class MBT_01_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if (!((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player))) exitwith {}; _rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 3)};addCamShake [_rec * 0.1, _time * 3, 9]};";
		};
	};
	class MBT_02_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if (!((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player))) exitwith {}; _rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 3)};addCamShake [_rec * 0.1, _time * 3, 9]};";
		};
	};
	class MBT_03_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if (!((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player))) exitwith {}; _rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 3)};addCamShake [_rec * 0.1, _time * 3, 9]};";
		};
	};
	class MBT_04_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if (!((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player))) exitwith {}; _rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 3)};addCamShake [_rec * 0.1, _time * 3, 9]};";
		};
	};
	class rhs_tank_base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if (!((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player))) exitwith {}; _rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 3)};addCamShake [_rec * 0.1, _time * 3, 9]};";
		};
	};
	class rhs_a3t72tank_base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if (!((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player))) exitwith {}; _rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 3)};addCamShake [_rec * 0.1, _time * 3, 9]};";
		};
	};
	//ww2 tanks, not as much recoil management or optic magnification so a bit more shake
	class LIB_Tank_base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.2;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 15;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 1.5)};addCamShake [_rec * 0.1, _time * 3, 9]} else {if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 4)};};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class fow_v_cromwell {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.3;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 15;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 1.5)};addCamShake [_rec * 0.1, _time * 3, 9]} else {if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 4)};};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class csa38_tank_base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.3;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 15;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 1.5)};addCamShake [_rec * 0.1, _time * 3, 9]} else {if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 4)};};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class churchill_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.2;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 15;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 1.5)};addCamShake [_rec * 0.1, _time * 3, 9]} else {if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 4)};};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
};




//particlefx



class twc_APIbullet_effect
{
	class incendiary
	{
       simulation = "light";   //type of simulation - particles or light
       type = "CmeasuresLight";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.08;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 0.001;
	   interval = 1;
   };
	class smoke2
	{
       simulation = "particles";   //type of simulation - particles or light
       //type = "AutoCannonFired";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       type = "Cmeasures2";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.2;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
   };
	class smoke
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "AutoCannonFired";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.2;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
   };
};

class twc_APIbullet_effect_ground
{
	class hit_target
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "ImpactDust2";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.2;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
   };
};

class twc_127_hiteffect_grey
{
	class smoke
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "twc_hitcloud_127_dirt";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.3;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
   };
};

class twc_762_hiteffect_grey
{
	class smoke
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "twc_ImpactSmoke_762";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.1;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
   };
	class puff
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "ImpactConcrete";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 1.3;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
   };
};


class GrenadeExplosion
{
	class GrenadeExp1
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "GrenadeBubbles1";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.2;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = -1;                //1 effect is enabled, -1 effect is disabled
	   //Hobbs note, disabled intentionally
	   intensity = 1;
	};
	class GrenadeBubbles
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "GrenadeBubbles1";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.1;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
	};
	class GrenadeSmoke1
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "GrenadeSmoke1";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 1;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
	};
	class Light1
	{
       simulation = "light";   //type of simulation - particles or light
       type = "GrenadeExploLight";         //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.2;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 0.01;
	};
};
//more particle stuff
class cfgcloudlets
{
	class AutoCannonFired;
	class twc_hitcloud_127_dirt: AutoCannonFired
	{
		position[] = {0,0,0};
		angle = 0;
		moveVelocity[] = {0, 0, 0};
		rotationVelocity = 0;
		color[] = {{0.9,0.9,0.9,0.18},{0.9,0.9,0.9,0.06},{0.9,0.9,0.9,0.012},{0.9,0.9,0.9,0.001}};
	};
	
	class ImpactDustConcrete2;
	class twc_impactsmoke_762: ImpactDustConcrete2
	{
		size[] = {0.8,1.1,1.4};
		position[] = {0,0,0};
		color[] = {{0.9,0.9,0.9,0.48},{0.9,0.9,0.9,0.26},{0.9,0.9,0.9,0.12},{0.9,0.9,0.9,0.001}};
		moveVelocity[] = {"0","0","1.2*directionZ"};
	};
};