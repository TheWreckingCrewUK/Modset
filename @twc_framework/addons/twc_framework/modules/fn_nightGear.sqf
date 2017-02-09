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
if(_era isEqualTo "modern" || _era isEqualTo "1990")then{
	player linkItem "UK3CB_BAF_HMNVS";
};
//If not ww2 then chemlights for everyone
if(_era != "ww2")then{
	player addItem "Chemlight_green";
	player addItem "Chemlight_green";
};
//If a grenadier then flare rounds
if(typeOf player == "Modern_British_Grenadier")then{
	player addItemToBackpack "UGL_FlareWhite_F";
	player addItemToBackpack "UGL_FlareWhite_F";
	player addItemToBackpack "UGL_FlareWhite_F";
};