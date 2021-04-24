//Calls all the functions on player start.
params["_unit"];

if (!hasInterface || isDedicated) exitWith {};
if (player != _unit) exitWith {};

waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

ACE_maxWeightDrag = 10000000;
ACE_maxWeightCarry = 700;

_action = ["CheckID", "Check Vehicle ID", "", {[_target] call twc_fnc_checkvehicleid}, {true}] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;


["twc_evh_fnc_setSpectator", { [(_this select 0)] call twc_fnc_toggleSpectator; }] call CBA_fnc_addEventHandler;
["twc_evh_createDiaryRecord", { player createDiaryRecord ["Diary", ["Radio Message", (_this select 0)]]; }] call CBA_fnc_addEventHandler;
["twc_evh_createConvoRecord", { player createDiaryRecord ["Diary", ["Conversation", (_this select 0)]]; }] call CBA_fnc_addEventHandler;

EM_blacklist_obj = [
	"Land_Mil_WiredFence_F", 
	"Land_New_WireFence_5m_F",
	"Land_New_WiredFence_5m_F",
	"Land_New_WireFence_10m_F",
	"Land_New_WiredFence_10m_F",
	"Land_CSA38_zataras2",
	"WireFence",
	"Wire",
	"Fort_RazorWire",
	"LIB_B_Hedgerows_big",
	"Land_I44_Bwf_6_Mlod",
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
	"Land_WW2_Wire_3",
	"Land_WW2_Wire_2",
	"Land_WW2_Wire_1",
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
	"Land_WW2_Wire_Bruno",
	"Land_I44_Buildings_Bunker_AA",
	"Land_I44_Buildings_CT_Straight"
];

[{
	if (isNil {missionNameSpace getVariable "twcModuleEnabled"}) exitWith {
		systemChat "TWC Mission Module wasn't placed down, or enabled.";
	};

	waitUntil { missionNameSpace getVariable ["twcModuleFinished", false] };

	[(missionNameSpace getVariable ["era", "modern"])] spawn twc_fnc_era;
	[(missionNameSpace getVariable ["rollSleeves", false])] spawn twc_fnc_rollShirt;
	[(missionNameSpace getVariable ["run", 0])] spawn twc_fnc_run;
	[(missionNameSpace getVariable ["safeZone", 0])] spawn twc_fnc_safeZone;
	[(missionNameSpace getVariable ["zuesObjects", true])] spawn twc_fnc_zeus;
	
	_worldName = missionNameSpace getVariable ["TWC_worldName", worldName];
	_hasWorld = isClass (configFile >> "CfgWorlds" >> _worldName);
	
	if !(_hasWorld) then {
		for [{_i=0}, {_i<5}, {_i=_i+1}] do {
			systemChat "You are missing the map required for this mission!";
		};
	};

	["twc_framework_initComplete", []] call CBA_fnc_localEvent;
}, [], 1] call CBA_fnc_waitAndExecute;