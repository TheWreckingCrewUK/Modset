params ["_enabled","_era"];

if(!hasInterface)exitWith{};

if !(_enabled) exitWith {};

waituntil {vehicle player isEqualTo player};

if(leader player == player)then{
	player addItem "ACE_HandFlare_White";
	player addItem "ACE_HandFlare_White";
};
if(_era isEqualTo "modern" || _era isEqualTo "1990")then{
	player linkItem "UK3CB_BAF_HMNVS";
};

if(_era != "ww2")then{
	player addItem "Chemlight_green";
	player addItem "Chemlight_green";
};