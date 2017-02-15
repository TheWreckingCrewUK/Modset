/*
* Sets up the player for the correct arsenal based on their role
*
* Step 1: Create empty Arsenal, then add basic gear.
* Step 2 Figure out what the player is and then execute his client script
*/
//Step 1
[arsenalAmmoBox,[""],false] call Bis_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["HandGrenade","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellYellow","SmokeShellPurple","SmokeShellPurple","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_red","Chemlight_yellow","Chemlight_blue"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["FirstAidKit","ItemMap","ItemCompass","ItemWatch","NVGoggles"],false] call Bis_fnc_addVirtualItemCargo;
//step 2
if (!isNil "tank1" && {player == tank1}) then {
	execVM "client\arsenal\armour_co.sqf";
};
if (!isNil "tank2" && {player == tank2}) then {
	execVM "client\arsenal\armour_cr.sqf";
};
if (!isNil "tank3" && {player == tank3}) then {
	execVM "client\arsenal\armour_cr.sqf";
};

if (!isNil "helo1" && {player == helo1}) then {
	execVM "client\arsenal\helo.sqf";
};
if (!isNil "helo2" && {player == helo2}) then {
	execVM "client\arsenal\helo.sqf";
};
if (!isNil "helo3" && {player == helo3}) then {
	execVM "client\arsenal\helo.sqf";
};
if (!isNil "apache1" && {player == apache1}) then {
	execVM "client\arsenal\helo.sqf";
};
if (!isNil "apache2" && {player == apache2}) then {
	execVM "client\arsenal\helo.sqf";
};

if (!isNil "jet1" && {player == jet1}) then {
	execVM "client\arsenal\jet.sqf";
	execVM "client\spawning\jet.sqf";
};
if (!isNil "p1" && {player == p1}) then {
	execVM "client\arsenal\alpha_sl.sqf";
};
if (!isNil "p2" && {player == p2}) then {
	execVM "client\arsenal\alpha_rf.sqf";
};
if (!isNil "p3" && {player == p3}) then {
	execVM "client\arsenal\alpha_grn.sqf";
};
if (!isNil "p4" && {player == p4}) then {
	execVM "client\arsenal\alpha_ar.sqf";
};
if (!isNil "p5" && {player == p5}) then {
	execVM "client\arsenal\alpha_med.sqf";
};
if (!isNil "p6" && {player == p6}) then {
	execVM "client\arsenal\bravo_sl.sqf";
};
if (!isNil "p7" && {player == p7}) then {
	execVM "client\arsenal\bravo_rf.sqf";
};
if (!isNil "p8" && {player == p8}) then {
	execVM "client\arsenal\bravo_grn.sqf";
};
if (!isNil "p9" && {player == p9}) then {
	execVM "client\arsenal\bravo_ar.sqf";
};
if (!isNil "p10" && {player == p10}) then {
	execVM "client\arsenal\bravo_med.sqf";
};
if (!isNil "p11" && {player == p11}) then {
	execVM "client\arsenal\charlie_sl.sqf";
};
if (!isNil "p12" && {player == p12}) then {
	execVM "client\arsenal\charlie_rf.sqf";
};
if (!isNil "p13" && {player == p13}) then {
	execVM "client\arsenal\charlie_grn.sqf";
};
if (!isNil "p14" && {player == p14}) then {
	execVM "client\arsenal\charlie_ar.sqf";
};
if (!isNil "p15" && {player == p15}) then {
	execVM "client\arsenal\bravo_med.sqf";
};
if (!isNil "p16" && {player == p16}) then {
	execVM "client\arsenal\delta_sl.sqf";
};
if (!isNil "p17" && {player == p17}) then {
	execVM "client\arsenal\delta_rf.sqf";
};
if (!isNil "p18" && {player == p18}) then {
	execVM "client\arsenal\delta_grn.sqf";
};
if (!isNil "p19" && {player == p19}) then {
	execVM "client\arsenal\delta_ar.sqf";
};
if (!isNil "p20" && {player == p20}) then {
	execVM "client\arsenal\delta_med.sqf";
};