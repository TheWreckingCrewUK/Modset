//Calls all the functions on player start.
params["_unit"];
if (player != _unit)exitWith {};

waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

ACE_maxWeightDrag = 100000;
ACE_maxWeightCarry = 100000;
/*
//storing an extra weapon on the back.  will soon put weapon animation on it as well
//made mostly for coin rifleman and csms.
//fuck ace for not adding it themselves
twc_weaponOnBack = [];

player addEventHandler ["InventoryOpened",{
	_handle = []spawn{
		disableSerialization;
		waituntil {!(isnull (findDisplay 602))};
		 
		_ctrl3 = findDisplay 602 ctrlCreate ["RscBackground", -1]; 
		_ctrl3 ctrlSetPosition [1.075,0.1,0.3,0.58]; 
		_ctrl3 ctrlSetBackgroundColor [0.2,0.2,0.2, 0.69999999];
		_ctrl3 ctrlCommit 0; 
		 
		_ctrl = findDisplay 602 ctrlCreate ["RscButton", -1]; 
		_ctrl ctrlSetPosition [1.075,0.1,0.3,0.125];
		_ctrl ctrlSetBackgroundColor [0.1,0.1,0.1,1];
		_ctrl ctrlCommit 0; 
		_ctrl ctrlSetText "Weapon on Back"; 
		_ctrl ctrlAddEventHandler ["ButtonClick", {[] call twc_fnc_putWeaponOnBack}];
		
		_ctrl2 = findDisplay 602 ctrlCreate ["RscPicture", -1]; 
		_ctrl2 ctrlSetPosition [1.125,0.24,0.2,0.13];
		_ctrl2 ctrlCommit 0;
		if(str twc_weaponOnBack != "[]")then{
			_ctrl2 ctrlSetText (getText (configFile >> "CfgWeapons" >> (uiNamespace getVariable "twc_uiGun") >> "picture"));
		}else{
			_ctrl2 ctrlSetText "a3\ui_f\data\GUI\Rsc\RscDisplayGear\ui_gear_primary_gs.paa";
		};

		_ctrl3 = findDisplay 602 ctrlCreate ["RscPicture", -1]; 
		_ctrl3 ctrlSetPosition [1.125,0.455,0.2,0.13];
		_ctrl3 ctrlCommit 0;
		if(str twc_weaponOnBack != "[]")then{
			_ctrl3 ctrlSetText (getText (configFile >> "CfgWeapons" >> (uiNamespace getVariable "twc_uiGun") >> "picture"));
		}else{
			_ctrl3 ctrlSetText "a3\ui_f\data\GUI\Rsc\RscDisplayGear\ui_gear_secondary_gs.paa";
		};		
		
		uiNamespace setVariable ["twc_uiGun",(twc_weaponOnBack select 0)];		
		uiNamespace setVariable ["twc_uiGun_old",_ctrl2];
	};
}];

player addEventHandler ["Killed",{
	if(str twc_weaponOnBack == "[]")exitWith{};
	if(vehicle (_this select 0) != (_this select 0))then{
		(vehicle (_this select 0)) addWeaponCargoGlobal [(twc_weaponOnBack select 0),1];
		(vehicle (_this select 0)) addMagazineCargoGlobal [(((twc_weaponOnBack select 1) select 0) select 0),1];		
		if(count ((twc_weaponOnBack select 1) select 0) == 2)then{
			(vehicle (_this select 0)) addMagazine (((twc_weaponOnBack select 1) select 0) select 1);
		};
	}else{
		_ground = "groundweaponHolder" createVehicle (getPos (_this select 0));
		_ground setPos (getPos (_this select 0));
		_ground addWeaponCargoGlobal [(twc_weaponOnBack select 0),1];
		_ground addMagazineCargoGlobal [(((twc_weaponOnBack select 1) select 0) select 0),1];		
		if(count ((twc_weaponOnBack select 1) select 0) == 2)then{
			_ground addMagazineCargoGlobal [(((twc_weaponOnBack select 1) select 0) select 1),1];
		};
	};
}];

*/
["twc_evh_fnc_setSpectator", { [(_this select 0)] call twc_fnc_toggleSpectator; }] call CBA_fnc_addEventHandler;
["twc_evh_createDiaryRecord", { player createDiaryRecord ["Diary", ["Radio Message", (_this select 0)]]; }] call CBA_fnc_addEventHandler;
["twc_evh_createConvoRecord", { player createDiaryRecord ["Convo", ["Conversation", (_this select 0)]]; }] call CBA_fnc_addEventHandler;

if (isNil {missionNameSpace getVariable "twcModuleEnabled"})exitWith {systemChat "twcModuleEnabled was Nil"};


waitUntil{missionNameSpace getVariable "twcModuleFinished"};

[(missionNameSpace getVariable "era")] spawn twc_fnc_era;
[(missionNameSpace getVariable "nightGear"),(missionNameSpace getVariable "era")] spawn twc_fnc_nightGear;
[(missionNameSpace getVariable "rollSleeves")] spawn twc_fnc_rollShirt;
[(missionNameSpace getVariable "run")] spawn twc_fnc_run;
[(missionNameSpace getVariable "safeZone")] spawn twc_fnc_safeZone;
[(missionNameSpace getVariable "zuesObjects")] spawn twc_fnc_zeus;

EM_blacklist_obj = [
	"Land_Mil_WiredFence_F", 
	"Land_New_WireFence_5m_F",
	"Land_New_WiredFence_5m_F",
	"Land_New_WireFence_10m_F",
	"Land_New_WiredFence_10m_F",
	"Land_I44_Buildings_Barbedwire2",
	"Land_I44_Buildings_Barbedwire",
	"Land_CSA38_zataras2",
	"Land_fow_Barbedwire",
	"WireFence",
	"Wire",
	"Fort_RazorWire",
	"Land_WW2_wire_1",
	"LIB_B_Hedgerows_big",
	"Land_I44_bwf_6_mlod",
	"Land_WW2_wire_bruno",
	"Land_I44_HedgeHog",
	"Land_I44_Buildings_Barbedwire",
	"Land_I44_Buildings_Barbedwire2",
	"Land_I44_Buildings_Bush_Long",
	"Land_I44_Buildings_Wirefence",
	"Land_I44_Buildings_Trench2",
	"Land_I44_Buildings_Trench2_W",
	"Land_I44_Buildings_Stake1",
	"Land_I44_Buildings_Stake2",
	"Land_I44_Buildings_Stake3",
	"Land_I44_Buildings_Stake4",
	"Land_I44_Buildings_Stake5",
	"Land_I44_Buildings_Stake6",
	"Land_I44_Buildings_Hrt1",
	"Land_I44_Buildings_Hrt1a",
	"Land_I44_Buildings_Hrt1p",
	"Land_I44_Buildings_Hrt3",
	"Land_I44_Misc_Hedge1",
	"Land_I44_Misc_Hedge2",
	"Land_fow_BarbGate",
	"Land_I44_Buildings_Logramp1",
	"Land_I44_Buildings_Logramp2",
	"Land_I44_Buildings_Logramp3",
	"Land_I44_Element_C",
	"Land_WW2_Element_C",
	"Land_WW2_Hemmbalken_1",
	"Land_I44_HedgeHog",
	"Land_WW2_wire_3",
	"Land_WW2_wire_2",
	"Land_WW2_wire_bruno",
	"Land_WW2_wire_1",
	"Land_CSA38_zataras",
	"Land_CSA38_zatkol2",
	"Land_CSA38_zataras3",
	"Land_CSA38_typA_full_pruchod",
	"Land_CSA38_ocas",
	"Land_CSA38_ocas2",
	"Land_CSA38_ocas3",
	"Land_CSA38_ocas4",
	"Land_CSA38_ocas2_end",
	"Land_CSA38_ocas3_end",
	"Land_CSA38_ocas_end",
	"Land_CSA38_zataras4",
	"Land_fow_Barbedwire",
	"Land_CSA38_jezci",
	"Land_WW2_wire_bruno"
];