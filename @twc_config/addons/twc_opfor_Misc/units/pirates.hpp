/////////////////////////////
///////// GREENFOR //////////
/////////////////////////////

//////////// Africans//////////
class Afr_Pirate_Base: I_G_Soldier_base_F
{
	author="Saxon";
	scope=1;
	displayName="African Pirate Base";
	faction="TWC_Afr_Pirates";
	nakedUniform="U_BasicBody";
	uniformClass="U_C_Poor_1";
	genericNames="AfroMen";
	identityTypes[]=
	{
		"LanguageENG_F",
		"Head_African"
	};
	Items[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing"
	};
	respawntems[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing"
	};
	class EventHandlers: EventHandlers
	{
		class PirateBase
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	
};
class Afr_Pirate_SquadLeader_Random: Afr_Pirate_Base
{
	scope=2;
	displayName="Pirate SquadLeader (Random)";
	icon="iconManOfficer";
	uniformClass="CUP_I_B_PMC_Unit_3";
	backpack="";
	capnPirateHeadgear
	linkedItems[]=
	{
		"H_Cap_blk",
		"V_LegStrapBag_coyote_F",
		"ItemMap",
		"ItemCompass",
		"Binocular"
	};
	respawnLinkedItems[]=
	{
		"H_Cap_blk",
		"V_LegStrapBag_coyote_F",
		"ItemMap",
		"ItemCompass",
		"Binocular"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_glaunch_M79",
		"CUP_hgun_Colt1911"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_glaunch_M79",
		"CUP_hgun_Colt1911"
	};
	magazines[]=
	{
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	class EventHandlers: EventHandlers
	{
		class pirateSpecific
		{
			init = "if (local (_this select 0)) then {[(_this select 0)] execVM ""\twc_opfor_misc\eventHandlers\commanderPirates.sqf"";};";
		};
	};
};
/*
class Afr_Pirate_Captain: Afr_Pirate_Base
{
	scope=2;
	displayName="Cap'n";
	icon="iconManLeader";
	uniformClass="U_I_C_Soldier_Para_5_F";
	backpack="";
	capnPirateHeadgear
	linkedItems[]=
	{
		"CUP_H_NAPA_Fedora",
		"V_LegStrapBag_coyote_F",
		"ItemMap",
		"ItemCompass",
		"Binocular"
	};
	respawnLinkedItems[]=
	{
		"CUP_H_NAPA_Fedora",
		"V_LegStrapBag_coyote_F",
		"ItemMap",
		"ItemCompass",
		"Binocular"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_hgun_SA61"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_hgun_SA61"
	};
	magazines[]=
	{
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_20Rnd_B_765x17_Ball_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
*/
class Afr_Pirate_Rifleman_Random: Afr_Pirate_Base
{
	scope=2;
	displayName="Pirate Rifleman (Random)";
	uniformClass="U_I_C_Soldier_Bandit_1_F";
	backpack="";
	normalPirateHeadgear
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_01",
		"G_Bandanna_blk"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_01",
		"G_Bandanna_blk"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AK47"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AK47"
	};
	magazines[]=
	{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	class EventHandlers: EventHandlers
	{
		class pirateSpecific
		{
			init = "if (local (_this select 0)) then {[(_this select 0)] execVM ""\twc_opfor_misc\eventHandlers\riflePirates.sqf"";};";
		};
	};
};
class Afr_Pirate_Grenadier_Random: Afr_Pirate_Base
{
	scope=2;
	displayName="Pirate Grenadier (Random)";
	uniformClass="U_I_C_Soldier_Bandit_3_F";
	backpack="";
	normalPirateHeadgear
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_03",
		"G_Shades_Black",
		"H_Booniehat_khk"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_03",
		"G_Shades_Black",
		"H_Booniehat_khk"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AKM"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AKM"
	};
	class EventHandlers: EventHandlers
	{
		class pirateSpecific
		{
			init = "if (local (_this select 0)) then {[(_this select 0)] execVM ""\twc_opfor_misc\eventHandlers\grenadierPirates.sqf"";};";
		};
	};
};
class Afr_Pirate_RPG_Random: Afr_Pirate_Base
{
	scope=2;
	displayName="AT-Pirate (Random)";
	uniformClass="CUP_U_I_GUE_Anorak_01";
	backpack="Afr_Backpack_AT";
	normalPirateHeadgear
	linkedItems[]=
	{
		"CUP_V_O_Ins_Carrier_Rig_Light",
		"H_Bandanna_gry"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_O_Ins_Carrier_Rig_Light",
		"H_Bandanna_gry"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AKM",
		"CUP_launch_RPG7V"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_AKM",
		"CUP_launch_RPG7V"
	};
	magazines[]=
	{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_PG7V_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_PG7V_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	class EventHandlers: EventHandlers
	{
		class pirateSpecific
		{
			init = "if (local (_this select 0)) then {[(_this select 0)] execVM ""\twc_opfor_misc\eventHandlers\atPirates.sqf"";};";
		};
	};
};

class Afr_Pirate_MachineGunner: Afr_Pirate_Base
{
	scope=2;
	displayName="Pirate MachineGunner (Random)";
	uniformClass="U_I_C_Soldier_Bandit_2_F";
	backpack="";
	normalPirateHeadgear
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_03",
		"G_Bandanna_blk",
		"H_Cap_tan"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_03",
		"G_Bandanna_blk",
		"H_Cap_tan"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"TWC_RPD"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"TWC_RPD"
	};
	magazines[]=
	{
		"twc_100Rnd_762x39_RPD",
		"twc_100Rnd_762x39_RPD",
		"twc_100Rnd_762x39_RPD",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"twc_100Rnd_762x39_RPD",
		"twc_100Rnd_762x39_RPD",
		"twc_100Rnd_762x39_RPD",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	class EventHandlers: EventHandlers
	{
		class pirateSpecific
		{
			init = "if (local (_this select 0)) then {[(_this select 0)] execVM ""\twc_opfor_misc\eventHandlers\MachineGunPirates.sqf"";};";
		};
	};
};

class Afr_Pirate_Marksman_Random: Afr_Pirate_Base
{
	scope=2;
	displayName="Pirate Marksman (Random)";
	uniformClass="U_I_C_Soldier_Camo_F";
	backpack="";
	marksmenPirateHeadgear
	linkedItems[]=
	{
		"V_TacChestrig_oli_F",
		"H_Booniehat_oli",
		"G_Bandanna_oli"
	};
	respawnLinkedItems[]=
	{
		"V_TacChestrig_oli_F",
		"H_Booniehat_oli",
		"G_Bandanna_oli"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_srifle_SVD"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_srifle_SVD"
	};
	magazines[]=
	{
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	class EventHandlers: EventHandlers
	{
		class pirateSpecific
		{
			init = "if (local (_this select 0)) then {[(_this select 0)] execVM ""\twc_opfor_misc\eventHandlers\marksmanPirates.sqf"";};";
		};
	};
};
/*
//////////// Asians//////////

class Asn_Pirate_Base: I_G_Soldier_base_F
{
	author="Saxon";
	scope=1;
	displayName="Asian Pirate Base";
	faction="TWC_Asn_Pirates";
	nakedUniform="U_BasicBody";
	uniformClass="U_C_Poor_1";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
	Items[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage"
	};
	respawntems[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage"
	};
	
};

class Asn_Pirate_SquadLeader_Random: Afr_Pirate_SquadLeader_Random
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_Captain: Afr_Pirate_Captain
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AK: Afr_Pirate_AK
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AKS: Afr_Pirate_AKS
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AKM: Afr_Pirate_AKM
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_RPG: Afr_Pirate_RPG
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AK74: Afr_Pirate_AK74
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AKS74: Afr_Pirate_AKS74
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AK74GP25: Afr_Pirate_AK74GP25
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_FAL: Afr_Pirate_FAL
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_M14: Afr_Pirate_M14
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_SMLE: Afr_Pirate_SMLE
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AR_RPD: Afr_Pirate_AR_RPD
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_AR_RPK: Afr_Pirate_AR_RPK
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_MG_M60: Afr_Pirate_MG_M60
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_MG_PKM: Afr_Pirate_MG_PKM
{
	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};
class Asn_Pirate_MM_SVD: Afr_Pirate_MM_SVD
{

	faction="TWC_Asn_Pirates";
	genericNames="ChineseMen";
	identityTypes[] =
	{
		"LanguageCHI_F",
		"Head_Asian",
		"G_CIVIL_male"
	};
};