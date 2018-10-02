/*
* Author: [TWC] jayman
* Adds night gear to players
*
* Arguments:
* 0: Enabled <BOOL>
* 1: ERA <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [true,"modern"] call twc_fnc_nightGear;
*
* Public: No
*/
params ["_enabled","_era"];

if(!hasInterface)exitWith{};

if !(_enabled) exitWith {};

waituntil {vehicle player isEqualTo player};
//Handflares for section leaders
if(leader player == player)then{
	player addItem "ACE_HandFlare_White";
	player addItem "ACE_HandFlare_White";
};
//If modern or 1990 give nvgs
if(_era isEqualTo "modern" || _era isEqualTo "1990") then {
	player addItem "ACE_Flashlight_MX991";
	player linkItem "UK3CB_BAF_HMNVS";
	if(leader player == player)then{
		player addItem "B_IR_Grenade";
	};
	//If a grenadier then flare rounds
	if(typeOf player in ["Modern_British_Grenadier","Modern_British_Grenadier_Mounted","Modern_British_Grenadier_COIN","Modern_British_Grenadier_COIN_Mounted"]) then {
		player addItem "UGL_FlareWhite_F";
		player addItem "UGL_FlareWhite_F";
		player addItem "UGL_FlareWhite_F";
	};
	//If a marksman then NV scope
	if(typeOf player in ["Modern_British_Marksman","Modern_British_Marksman_Mounted","Modern_British_Marksman_COIN","Modern_British_Marksman_COIN_Mounted"]) then {
		player addItem "UK3CB_BAF_MaxiKite";
	};
};
//If not ww2 then chemlights for everyone
if(_era != "ww2") then {
	player addItem "Chemlight_green";
	player addItem "Chemlight_green";
};

//Cold War Pilot NVGs.
if(_era == "coldwar") then {
	if (player getvariable "twc_keepMap") then
	{
		player addItem "ACE_Flashlight_MX991";
	};
	if (typeOf player == "ColdWar_JetPilot") then
	{
		player linkItem "CUP_NVG_PVS7";
	};
};