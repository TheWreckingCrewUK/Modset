if (!isNil "armour1" && {player == armour1}) then {
	g_class = "armour_co";
	execVM "client\restrictModdedWW2\fullCrew.sqf";
	player addEventHandler ["Respawn", {
		execVM "client\restrictModdedWW2\fullCrew.sqf";
	}];
};
if (!isNil "armour2" && {player == armour2}) then {
	g_class = "armour_cr";
	execVM "client\restrictModdedWW2\fullCrew.sqf";
	player addEventHandler ["Respawn", {
		execVM "client\restrictModdedWW2\fullCrew.sqf";
	}];
};
if (!isNil "armour3" && {player == armour3}) then {
	g_class = "armour_cr";
	execVM "client\restrictModdedWW2\fullCrew.sqf";
	player addEventHandler ["Respawn", {
		execVM "client\restrictModdedWW2\fullCrew.sqf";
	}];
};
if (!isNil "armour1US" && {player == armour1}) then {
	g_class = "armour_co";
	execVM "client\restrictModdedWW2\fullCrew.sqf";
	player addEventHandler ["Respawn", {
		execVM "client\restrictModdedWW2\fullCrew.sqf";
	}];
};
if (!isNil "armour2US" && {player == armour2}) then {
	g_class = "armour_cr";
	execVM "client\restrictModdedWW2\fullCrew.sqf";
	player addEventHandler ["Respawn", {
		execVM "client\restrictModdedWW2\fullCrew.sqf";
	}];
};
if (!isNil "armour3US" && {player == armour3}) then {
	g_class = "armour_cr";
	execVM "client\restrictModdedWW2\fullCrew.sqf";
	player addEventHandler ["Respawn", {
		execVM "client\restrictModdedWW2\fullCrew.sqf";
	}];
};
if (!isNil "helo1" && {player == helo1}) then {
	g_class = "helo";
};
if (!isNil "helo2" && {player == helo2}) then {
	g_class = "helo2";
};
if (!isNil "helo3" && {player == helo3}) then {
	g_class = "helo3";
};
if (!isNil "jet1" && {player == jet1}) then {
	g_class = "jet";
};
if (!isNil "p1" && {player == p1}) then {
	g_class = "alpha_sl";
};
if (!isNil "p2" && {player == p2}) then {
	g_class = "alpha_rf";
};
if (!isNil "p3" && {player == p3}) then {
	g_class = "alpha_rf";
};
if (!isNil "p4" && {player == p4}) then {
	g_class = "alpha_rf";
};
if (!isNil "p5" && {player == p5}) then {
	g_class = "alpha_2ic";
};
if (!isNil "p6" && {player == p6}) then {
	g_class = "alpha_mg";
};
if (!isNil "p7" && {player == p7}) then {
	g_class = "alpha_mark";
};
if (!isNil "p8" && {player == p8}) then {
	g_class = "alpha_med";
};
if (!isNil "p9" && {player == p9}) then {
	g_class = "bravo_sl";
};
if (!isNil "p10" && {player == p10}) then {
	g_class = "bravo_tl";
};
if (!isNil "p11" && {player == p11}) then {
	g_class = "bravo_rf";
};
if (!isNil "p12" && {player == p12}) then {
	g_class = "bravo_rf";
};
if (!isNil "p13" && {player == p13}) then {
	g_class = "bravo_rf";
};
if (!isNil "p14" && {player == p14}) then {
	g_class = "bravo_tl";
};
if (!isNil "p15" && {player == p15}) then {
	g_class = "bravo_ar";
};
if (!isNil "p16" && {player == p16}) then {
	g_class = "bravo_mark";
};
if (!isNil "p17" && {player == p17}) then {
	g_class = "bravo_med";
};
if (!isNil "p18" && {player == p18}) then {
	g_class = "charlie_sl";
};
if (!isNil "p19" && {player == p19}) then {
	g_class = "charlie_tl";
};
if (!isNil "p20" && {player == p20}) then {
	g_class = "charlie_aar";
};
if (!isNil "p21" && {player == p21}) then {
	g_class = "charlie_aar";
};
if (!isNil "p22" && {player == p22}) then {
	g_class = "charlie_aar";
};
if (!isNil "p23" && {player == p23}) then {
	g_class = "charlie_tl";
};
if (!isNil "p24" && {player == p24}) then {
	g_class = "charlie_rf";
};
if (!isNil "p25" && {player == p25}) then {
	g_class = "charlie_rf";
};
if (!isNil "p26" && {player == p26}) then {
	g_class = "charlie_rf";
};
if (!isNil "p27" && {player == p27}) then {
	g_class = "charlie_tl";
};
if (!isNil "p28" && {player == p28}) then {
	g_class = "charlie_mg";
};
if (!isNil "p29" && {player == p29}) then {
	g_class = "charlie_mgass";
};
if (!isNil "p30" && {player == p30}) then {
	g_class = "charlie_med";
};

execVM "client\boxesModdedWW2\crates\init.sqf";

_name = name player;
_text = format["%1 joined in as %2",_name,g_class];
[TWCServer,_text] remoteExec ["twc_fnc_globalChat", 2]; 

if (g_class != "") then {
	execVM format["client\boxesModdedWW2\loadout\%1.sqf", g_class];
};