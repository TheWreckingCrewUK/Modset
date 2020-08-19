class CfgPatches {
	class twc_objects {
		units[]= {
		};
		
		weapons[]={"CUP_launch_RPG7V"};
		requiredVersion = 0.1;
		
		requiredAddons[] = {
			"a3_weapons_f",
			"cup_airvehicles_av8b",
			"uk3cb_baf_weapons_smallarms",
			"UK3CB_BAF_Vehicles",
			"cup_wheeledvehicles_mastiff",
			"cup_trackedvehicles_mcv80",
			"uk3cb_baf_vehicles_landrover",
			"uk3cb_baf_vehicles_coyote_jackal",
			"UK3CB_BAF_Equipment_Backpacks",
			"CUP_Creatures_Military_USArmy",
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds",
			"cup_weapons_ak",
			"CUP_Weapons_M1014",
			"CUP_Weapons_VehicleWeapons"
		};
	};
};

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
#include "qol.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"







class Extended_HitPart_EventHandlers {
	class man {
		class twc_vitalhit {
			HitPart = "(_this select 0) params ['_target', '_shooter', '_projectile', '_position', '_velocity', '_selection', '_ammo', '_vector', '_radius', '_surfaceType', '_isDirect'];if (isplayer _target) exitwith {_this call twc_fnc_playerheadshot};if (!alive _target) exitwith {};if (('head' in _selection) && (_isdirect)) exitwith {[_target, {if (isDamageAllowed _this) then {_this setdamage 1;};}] remoteExec ['call', 0];}; if (!(('head' in _selection) || ('spine1' in _selection)|| ('spine2' in _selection)|| ('spine3' in _selection))) exitwith {};_value = (_ammo select 0); if (_value > 8) then {[_target, {if (isDamageAllowed _this) then {_this setdamage 1;};}] remoteExec ['call', 0];};";
		};
	};
};

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
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_amount = 2.8; if ((_this select 1) in (missionnamespace getvariable ['twc_subguns', ['TWC_CUP_smg_MP5A5_flashlight_clean', 'rhsusf_weap_MP7A2_desert', 'TWC_CUP_smg_MP5SD6_clean', 'fow_w_sten_mk5', 'LIB_Sten_Mk5', 'LIB_Sten_Mk2', 'SP_smg_sterling']])) then {_amount = 0.8;};addCamShake [_amount, 0.4, 15]};";
		};
	};
	class Helicopter_Base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.6; addCamShake [_rec, 0.5, 15]};";
		};
	};
	class Plane {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2; addCamShake [_rec, 0.5, 15]};";
		};
	};
	class Car_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_time = 0.3;_rec = 2; _freq = 15; if (((_this select 1) isKindOf ['HMG_127', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['GMG_F', configFile >> 'CfgWeapons'])) then {_rec = 3} else {if ((_this select 4) isKindOf ['missilebase', configFile >> 'CfgAmmo']) then {_rec = 4; _time = 2; _freq = 15;};};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec, _time, _freq]};";
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
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2;_time = 0.5; if ((_this select 1) == 'CUP_Vlmg_L94A1_Coax') then {_rec = 0.1;_time = 0.3};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec, _time, 15]};";
		};
	};
	class CUP_B_FV432_GB_GPMG {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2;_time = 0.5; if ((_this select 1) == 'ukcw_l37a1_coax') then {_rec = 0.1;_time = 0.3};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15]};";
		};
	};
	class APC_Tracked_01_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 1;_time = 0.7};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec, _time, 15]};";
		};
	};
	class APC_Tracked_02_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 1;_time = 0.7};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec, _time, 15]};";
		};
	};
	class APC_Tracked_03_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 1;_time = 0.7};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec, _time, 15]};";
		};
	};
	class UK3CB_BAF_FV432_Mk3_Base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2; if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec, 0.3, 15]};";
		};
	};
	class MBT_01_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec * 0.1, _time * 3, 9]};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class MBT_02_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec * 0.1, _time * 3, 9]};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class MBT_03_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec * 0.1, _time * 3, 9]};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class MBT_04_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec * 0.1, _time * 3, 9]};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class rhs_tank_base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec * 0.1, _time * 3, 9]};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class rhs_a3t72tank_base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec * 0.1, _time * 3, 9]};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
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


class Extended_InitPost_EventHandlers {
	class CAManBase {
		class twc_moduleInitPos_eh {
			init = "[(_this select 0)] execVM 'twc_framework\init.sqf';";
		};
	};
};





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

class cfgcloudlets
{
	class AutoCannonFired;
	class twc_hitcloud_127_dirt: AutoCannonFired
	{
		position[] = {0,0,0};
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