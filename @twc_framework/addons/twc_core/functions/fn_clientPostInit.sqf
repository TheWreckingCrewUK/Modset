if (!hasInterface) exitWith {};

ACE_maxWeightDrag = 10000000;
ACE_maxWeightCarry = 700;

["TWC_AddedToGroup", {
	_this call TWC_Core_fnc_addedToGroup;
}] call CBA_fnc_addEventHandler;

/**
 * Enhanced Movement Blacklist.
 * Doesn't require mod to be loaded.
**/
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

["CBA_settingsInitialized", {
	// OP only stuff below
	if (TWC_Core_isPublic) exitWith {};

	player createDiarySubject ["loadout", "Loadouts"];
	[player] call twc_fnc_briefingLoadout;

	[player, currentWeapon player, currentMuzzle player] call TWC_fnc_silentSafety;
	enableRadio false;
	player disableConversation true;
	//player action ["WeaponOnBack", player];

	if !((goggles player) in approvedFacewear) then {
		removeGoggles player;
	};

	[{ time > 0 }, {
		/** Reconnect spot? **/
		if (!isNil "ForwardBasePos" && !(player getVariable ["twc_ignoreForwardBase", false])) then {
			player setPos ForwardBasePos;
			["ForwardBasePos"] spawn twc_fnc_reconnected;
		} else {
			["NormalBase"] spawn twc_fnc_reconnected;
		};
		
		/** Should you be having this? **/
		if !(player getVariable ["twc_keepMap", false]) then {
			player unassignItem "itemMap"; 
			player removeItem "itemMap"; 
		};
		/*If medic force seeing blood volume*/
		if(getNumber (configfile >> "CfgVehicles" >> typeOf player >> "attendant") == 1)then{
			ace_medical_gui_showbloodlossentry = 1;
		};
	}] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_addEventHandler;