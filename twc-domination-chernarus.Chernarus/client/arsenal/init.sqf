[arsenalAmmoBox,[""],false] call Bis_fnc_addVirtualWeaponCargo;
[arsenalAmmoBox,["FirstAidKit","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellYellow","SmokeShellPurple","SmokeShellPurple","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_red","Chemlight_yellow","Chemlight_blue"],false] call BIS_fnc_addVirtualMagazineCargo;
[arsenalAmmoBox,["ItemMap","ItemCompass","ItemWatch","NVGoggles"],false] call Bis_fnc_addVirtualItemCargo;

if (!isNil "armour1" && {player == armour1}) then {
	execVM "client\arsenal\armour_co.sqf";
	execVM "client\spawning\armour.sqf";	
	{armour1 customChat [joinCustomChat, format["%1 has joined as Armour Commander", name armour1]];} remoteExec ["bis_fnc_call", armour1, false];
};
if (!isNil "armour2" && {player == armour2}) then {
	execVM "client\arsenal\armour_cr.sqf";
	{armour1 customChat [joinCustomChat, format["%1 has joined as Armour Crewman", name armour2]];} remoteExec ["bis_fnc_call", armour1, false];
};
if (!isNil "armour3" && {player == armour3}) then {
	execVM "client\arsenal\armour_cr.sqf";
	{armour1 customChat [joinCustomChat, format["%1 has joined as Armour Crewman", name armour3]];} remoteExec ["bis_fnc_call", armour1, false];
};

if (!isNil "helo1" && {player == helo1}) then {
	execVM "client\arsenal\helo.sqf";
	execVM "client\spawning\heli.sqf";
};
if (!isNil "helo2" && {player == helo2}) then {
	execVM "client\arsenal\helo.sqf";
	execVM "client\spawning\heli.sqf";
};
if (!isNil "helo3" && {player == helo3}) then {
	execVM "client\arsenal\helo.sqf";
	execVM "client\spawning\heli.sqf";
};

if (!isNil "jet1" && {player == jet1}) then {
	execVM "client\arsenal\jet.sqf";
	execVM "client\spawning\jet.sqf";
};
if (!isNil "p1" && {player == p1}) then {
	execVM "client\arsenal\alpha_sl.sqf";
	{p1 customChat [joinCustomChat, format["%1 has joined as Alpha Section Leader", name p1]];} remoteExec ["bis_fnc_call", p1, false];
};
if (!isNil "p2" && {player == p2}) then {
	execVM "client\arsenal\alpha_rf.sqf";
	{p1 customChat [joinCustomChat, format["%1 has joined as Alpha Rifleman", name p2]];} remoteExec ["bis_fnc_call", p1, false];
};
if (!isNil "p3" && {player == p3}) then {
	execVM "client\arsenal\alpha_grn.sqf";
	{p1 customChat [joinCustomChat, format["%1 has joined as Alpha Grenadier", name p3]];} remoteExec ["bis_fnc_call", p1, false];
};
if (!isNil "p4" && {player == p4}) then {
	execVM "client\arsenal\alpha_ar.sqf";
	{p1 customChat [joinCustomChat, format["%1 has joined as Alpha Automatic Rifleman", name p4]];} remoteExec ["bis_fnc_call", p1, false];
};
if (!isNil "p5" && {player == p5}) then {
	execVM "client\arsenal\alpha_2ic.sqf";
	{p1 customChat [joinCustomChat, format["%1 has joined as Alpha 2IC", name p5]];} remoteExec ["bis_fnc_call", p1, false];
};
if (!isNil "p6" && {player == p6}) then {
	execVM "client\arsenal\alpha_mg.sqf";
	{p1 customChat [joinCustomChat, format["%1 has joined as Machine Gunner", name p6]];} remoteExec ["bis_fnc_call", p1, false];
};
if (!isNil "p7" && {player == p7}) then {
	execVM "client\arsenal\alpha_mark.sqf";
	{p1 customChat [joinCustomChat, format["%1 has joined as Alpha Marksman", name p7]];} remoteExec ["bis_fnc_call", p1, false];
};
if (!isNil "p8" && {player == p8}) then {
	execVM "client\arsenal\alpha_med.sqf";
	{p1 customChat [joinCustomChat, format["%1 has joined as Alpha Medic", name p8]];} remoteExec ["bis_fnc_call", p1, false];
};

if (!isNil "p9" && {player == p9}) then {
	execVM "client\arsenal\bravo_sl.sqf";
	{p9 customChat [joinCustomChat, format["%1 has joined as Bravo Section Leader", name p9]];} remoteExec ["bis_fnc_call", p9, false];
};
if (!isNil "p10" && {player == p10}) then {
	execVM "client\arsenal\bravo_tl.sqf";
	{p9 customChat [joinCustomChat, format["%1 has joined as Bravo Team Leader", name p10]];} remoteExec ["bis_fnc_call", p9, false];
};
if (!isNil "p11" && {player == p11}) then {
	execVM "client\arsenal\bravo_rf.sqf";
	{p9 customChat [joinCustomChat, format["%1 has joined as Bravo Rifleman", name p11]];} remoteExec ["bis_fnc_call", p9, false];
};
if (!isNil "p12" && {player == p12}) then {
	execVM "client\arsenal\bravo_grn.sqf";
	{p9 customChat [joinCustomChat, format["%1 has joined as Bravo Grenadier", name p12]];} remoteExec ["bis_fnc_call", p9, false];
};
if (!isNil "p13" && {player == p13}) then {
	execVM "client\arsenal\bravo_ar.sqf";
	{p9 customChat [joinCustomChat, format["%1 has joined as Bravo Automatic Rifleman", name p13]];} remoteExec ["bis_fnc_call", p9, false];
};
if (!isNil "p14" && {player == p14}) then {
	execVM "client\arsenal\bravo_tl.sqf";
	{p9 customChat [joinCustomChat, format["%1 has joined as Bravo Team Leader", name p14]];} remoteExec ["bis_fnc_call", p9, false];
};
if (!isNil "p15" && {player == p15}) then {
	execVM "client\arsenal\bravo_ar.sqf";
	{p9 customChat [joinCustomChat, format["%1 has joined as Bravo Automatic Rifleman", name p15]];} remoteExec ["bis_fnc_call", p9, false];
};
if (!isNil "p16" && {player == p16}) then {
	execVM "client\arsenal\bravo_mark.sqf";
	{p9 customChat [joinCustomChat, format["%1 has joined as Bravo Marksman", name p16]];} remoteExec ["bis_fnc_call", p9, false];
};
if (!isNil "p17" && {player == p17}) then {
	execVM "client\arsenal\bravo_med.sqf";
	{p9 customChat [joinCustomChat, format["%1 has joined as Bravo Medic", name p17]];} remoteExec ["bis_fnc_call", p9, false];
};

if (!isNil "p18" && {player == p18}) then {
	execVM "client\arsenal\charlie_sl.sqf";
	{p18 customChat [joinCustomChat, format["%1 has joined as Charlie Section Leader", name p18]];} remoteExec ["bis_fnc_call", p18, false];
};
if (!isNil "p19" && {player == p19}) then {
	execVM "client\arsenal\charlie_tl.sqf";
	{p18 customChat [joinCustomChat, format["%1 has joined as Charlie Team Leader", name p19]];} remoteExec ["bis_fnc_call", p18, false];
};
if (!isNil "p20" && {player == p20}) then {
	execVM "client\arsenal\charlie_rf.sqf";
	{p18 customChat [joinCustomChat, format["%1 has joined as Charlie Rifleman", name p20]];} remoteExec ["bis_fnc_call", p18, false];
};
if (!isNil "p21" && {player == p21}) then {
	execVM "client\arsenal\charlie_ar.sqf";
	{p18 customChat [joinCustomChat, format["%1 has joined as Charlie Automatic Rifleman", name p21]];} remoteExec ["bis_fnc_call", p18, false];
};
if (!isNil "p22" && {player == p22}) then {
	execVM "client\arsenal\charlie_aar.sqf";
	{p18 customChat [joinCustomChat, format["%1 has joined as Charlie Assistant Automatic Rifleman", name p22]];} remoteExec ["bis_fnc_call", p18, false];
};
if (!isNil "p23" && {player == p23}) then {
	execVM "client\arsenal\charlie_tl.sqf";
	{p18 customChat [joinCustomChat, format["%1 has joined as Charlie Team Leader", name p23]];} remoteExec ["bis_fnc_call", p18, false];
};
if (!isNil "p24" && {player == p24}) then {
	execVM "client\arsenal\charlie_rf.sqf";
	{p18 customChat [joinCustomChat, format["%1 has joined as Charlie Rifleman", name p24]];} remoteExec ["bis_fnc_call", p18, false];
};
if (!isNil "p25" && {player == p25}) then {
	execVM "client\arsenal\charlie_ar.sqf";
	{p18 customChat [joinCustomChat, format["%1 has joined as Charlie Automatic Rifleman", name p25]];} remoteExec ["bis_fnc_call", p18, false];
};
if (!isNil "p26" && {player == p26}) then {
	execVM "client\arsenal\charlie_aar.sqf";
	{p18 customChat [joinCustomChat, format["%1 has joined as Charlie Assistant Automatic Rifleman", name p26]];} remoteExec ["bis_fnc_call", p18, false];
};
if (!isNil "p27" && {player == p27}) then {
	execVM "client\arsenal\charlie_tl.sqf";
	{p18 customChat [joinCustomChat, format["%1 has joined as Charlie Team Leader", name p27]];} remoteExec ["bis_fnc_call", p18, false];
};
if (!isNil "p28" && {player == p28}) then {
	execVM "client\arsenal\charlie_mg.sqf";
	{p18 customChat [joinCustomChat, format["%1 has joined as Charlie Machine Gunner", name p28]];} remoteExec ["bis_fnc_call", p18, false];
};
if (!isNil "p29" && {player == p29}) then {
	execVM "client\arsenal\charlie_mgass.sqf";
	{p18 customChat [joinCustomChat, format["%1 has joined as Charlie Machine Gunner Assistant", name p29]];} remoteExec ["bis_fnc_call", p18, false];
};
if (!isNil "p30" && {player == p30}) then {
	execVM "client\arsenal\charlie_med.sqf";
	{p18 customChat [joinCustomChat, format["%1 has joined as Charlie Medic", name p30]];} remoteExec ["bis_fnc_call", p18, false];
};