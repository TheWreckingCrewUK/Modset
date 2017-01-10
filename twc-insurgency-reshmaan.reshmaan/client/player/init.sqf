g_class = "";
g_group = "";
g_unit = "";

[[West, "English", "Pashto", ""], [East, "Pashto"], [Civilian, "Pashto"]] call acre_api_fnc_setupMission;
["en", "English"] call acre_api_fnc_babelAddLanguageType;
["ru", "Pashto"] call acre_api_fnc_babelAddLanguageType;

if (!isNil "warLord1" && {player == warLord1}) then {
    g_class = "warLord";
	g_group = "0";
	g_unit = "300";
	g_name = "warLord";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "humanCiv1" && {player == humanCiv1}) then {
    g_class = "Civ";
	g_group = "0";
	g_unit = "200";
	g_name = "Civilian";
	g_radio = "";
	["ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["ru"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "humanCiv2" && {player == humanCiv2}) then {
    g_class = "Civ";
	g_group = "0";
	g_unit = "201";
	g_name = "Civilian";
	g_radio = "";
	["ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["ru"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "humanCiv3" && {player == humanCiv3}) then {
    g_class = "Civ";
	g_group = "0";
	g_unit = "202";
	g_name = "Civilian";
	g_radio = "";
	["ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["ru"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "helo1" && {player == helo1}) then {
    g_class = "PLT";
	g_group = "1";
	g_unit = "203";
	g_name = "Pilot";
	g_radio_channel = 5;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUK.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUS.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];

	
};

if (!isNil "helo2" && {player == helo2}) then {
    g_class = "PLT_CREW";
	g_group = "1";
	g_unit = "204";
	g_name = "Crew Chief";
	g_radio_channel = 5;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\crewCheifs.sqf";
	
	
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUK.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUS.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];
};

if (!isNil "helo3" && {player == helo3}) then {
    g_class = "USPLT";
	g_group = "1";
	g_unit = "208";
	g_name = "Pilot";
	g_radio_channel = 6;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUK.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUS.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	
};

if (!isNil "helo4" && {player == helo4}) then {
    g_class = "USPLT_CREW";
	g_group = "1";
	g_unit = "209";
	g_name = "Crew Chief";
	g_radio_channel = 6;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\crewCheifs.sqf";
	
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUK.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUS.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];
};

if (!isNil "tank1" && {player == tank1}) then {
    g_class = "ARMR_CO";
	g_group = "1";
	g_unit = "205";
	g_name = "Armour Crew Commander";
	g_radio_channel = 9;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\fullArmourCrew.sqf";
};

if (!isNil "tank2" && {player == tank2}) then {
    g_class = "ARMR_CREW";
	g_group = "1";
	g_unit = "206";
	g_name = "Armour Crew";
	g_radio_channel = 9;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\fullArmourCrew.sqf";
};

if (!isNil "tank3" && {player == tank3}) then {
    g_class = "ARMR_CREW";
	g_group = "1";
	g_unit = "207";
	g_name = "Armour Crew";
	g_radio_channel = 9;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\fullArmourCrew.sqf";
};
if (!isNil "P1" && {player == P1}) then {
    g_class = "BAF_SL";
	g_group = "0";
	g_unit = "000";
	g_name = "Alpha Section Leader";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are a Section Leader. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
	//M6 spawner
	Spawner addAction ["Spawn M6 Mortar box",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
};

if (!isNil "P2" && {player == P2}) then {
    g_class = "BAF_RF";
	g_group = "0";
	g_unit = "010";
	g_name = "Alpha Rifleman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P3" && {player == P3}) then {
    g_class = "BAF_GRN";
	g_group = "0";
	g_unit = "011";
	g_name = "Alpha Grenadier";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P4" && {player == P4}) then {
    g_class = "BAF_AR";
	g_group = "0";
	g_unit = "012";
	g_name = "Alpha Automatic Rifleman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P5" && {player == P5}) then {
    g_class = "BAF_2";
	g_group = "0";
	g_unit = "013";
	g_name = "Alpha 2IC";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "P6" && {player == P6}) then {
    g_class = "BAF_MG";
	g_group = "0";
	g_unit = "020";
	g_name = "Alpha Machine Gunner";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P7" && {player == P7}) then {
    g_class = "BAF_MARK";
	g_group = "0";
	g_unit = "021";
	g_name = "Alpha Marksman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P8" && {player == P8}) then {
    g_class = "BAF_MED";
	g_group = "0";
	g_unit = "022";
	g_name = "Alpha Medic";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are a Medic. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
	//Medical supplies
	Spawner addAction ["Spawn medical supplies",
	{nul = [] execVM "client\player\boxes\smallMedical.sqf";},[],0,true,false,"",""];
};

if (!isNil "P9" && {player == P9}) then {
    g_class = "US_SL";
	g_group = "0";
	g_unit = "023";
	g_name = "Bravo Squad Leader";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are a Section Leader. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
	//M6 spawner
	Spawner addAction ["Spawn M6 Mortar box",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
};

if (!isNil "P10" && {player == P10}) then {
    g_class = "US_TL";
	g_group = "9";
	g_unit = "800";
	g_name = "Bravo Team Leader";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P11" && {player == P11}) then {
    g_class = "US_RF";
	g_group = "9";
	g_unit = "801";
	g_name = "Bravo Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P12" && {player == P12}) then {
    g_class = "US_GRN";
	g_group = "9";
	g_unit = "802";
	g_name = "Bravo Grenadier";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P13" && {player == P13}) then {
    g_class = "US_AR";
	g_group = "1";
	g_unit = "100";
	g_name = "Bravo Automatic Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P14" && {player == P14}) then {
    g_class = "US_TL";
	g_group = "1";
	g_unit = "110";
	g_name = "Bravo Team Leader";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P15" && {player == P15}) then {
    g_class = "US_AR";
	g_group = "1";
	g_unit = "111";
	g_name = "Bravo Automatic Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P16" && {player == P16}) then {
    g_class = "US_MARK";
	g_group = "1";
	g_unit = "112";
	g_name = "Bravo Marksman";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 2;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P17" && {player == P17}) then {
    g_class = "US_MED";
	g_group = "1";
	g_unit = "113";
	g_name = "bravo Medic";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 2;
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are a Medic. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
	//Medical supplies
	Spawner addAction ["Spawn medical supplies",
	{nul = [] execVM "client\player\boxes\smallMedical.sqf";},[],0,true,false,"",""];
};

if (!isNil "P18" && {player == P18}) then {
    g_class = "USMC_SL";
	g_group = "1";
	g_unit = "120";
	g_name = "Charlie Squad Leader";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are a Section Leader. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
	//M6 spawner
	Spawner addAction ["Spawn M6 Mortar box",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
};

if (!isNil "P19" && {player == P19}) then {
    g_class = "USMC_TL";
	g_group = "1";
	g_unit = "121";
	g_name = "Charlie Team Leader";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P20" && {player == P20}) then {
    g_class = "USMC_RF";
	g_group = "1";
	g_unit = "122";
	g_name = "Charlie Rifleman";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P21" && {player == P21}) then {
    g_class = "USMC_AR";
	g_group = "1";
	g_unit = "123";
	g_name = "Charlie Automatic Rifleman";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P22" && {player == P22}) then {
    g_class = "USMC_AAR";
	g_group = "1";
	g_unit = "130";
	g_name = "Charlie Automatic Rifleman Assistant";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P23" && {player == P23}) then {
    g_class = "USMC_TL";
	g_group = "1";
	g_unit = "131";
	g_name = "Charlie Team Leader";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P24" && {player == P24}) then {
    g_class = "USMC_RF";
	g_group = "1";
	g_unit = "132";
	g_name = "Charlie Rifleman";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P25" && {player == P25}) then {
    g_class = "USMC_AR";
	g_group = "1";
	g_unit = "133";
	g_name = "Charlie Automatic Rifleman";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P26" && {player == P26}) then {
    g_class = "USMC_AAR";
	g_group = "1";
	g_unit = "134";
	g_name = "Charlie Automatic Rifleman Assistant";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P27" && {player == P27}) then {
    g_class = "USMC_TL";
	g_group = "1";
	g_unit = "135";
	g_name = "Charlie Team Leader";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P28" && {player == P28}) then {
    g_class = "USMC_MG";
	g_group = "1";
	g_unit = "136";
	g_name = "Charlie Machine Gunner";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P29" && {player == P29}) then {
    g_class = "USMC_MGASS";
	g_group = "1";
	g_unit = "137";
	g_name = "Charlie Machine Gunner Assistant";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P30" && {player == P30}) then {
    g_class = "USMC_MED";
	g_group = "1";
	g_unit = "138";
	g_name = "Charlie Medic";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en","ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en","ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are a Medic. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
	//Medical supplies
	Spawner addAction ["Spawn medical supplies",
	{nul = [] execVM "client\player\boxes\smallMedical.sqf";},[],0,true,false,"",""];
};

if (!isNil "mert_sl" && {player == mert_sl}) then {
    g_class = "MERT_Lead";
	g_group = "1";
	g_unit = "139";
	g_name = "MERT Team Lead";
	g_radio = "ACRE_PRC343";
	g_radio_channel = 4;
	["en","ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en","ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\fullMertCrew.sqf";
	hint "You are a Section Leader. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};

if (!isNil "mert_med" && {player == mert_med}) then {
    g_class = "MERT";
	g_group = "1";
	g_unit = "140";
	g_name = "Medic";
	g_radio = "ACRE_PRC343";
	g_radio_channel = 4;
	["en","ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en","ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\fullMertCrew.sqf";
	hint "You are a Medic. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "mert_helo" && {player == mert_helo}) then {
    g_class = "PLT";
	g_group = "1";
	g_unit = "139";
	g_name = "MERT Team Helo";
	g_radio = "ACRE_PRC343";
	g_radio_channel = 4;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\fullMertCrew.sqf";
};

if (!isNil "apache1" && {player == apache1}) then {
    g_class = "PLT";
	g_group = "1";
	g_unit = "141";
	g_radio_channel = 7;
	g_radio = "ACRE_PRC343";
	g_name = "Apache Pilot";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "apache2" && {player == apache2}) then {
    g_class = "PLT_CREW";
	g_group = "1";
	g_unit = "141";
	g_radio_channel = 7;
	g_radio = "ACRE_PRC343";
	g_name = "Apache Gunner";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "jet1" && {player == jet1}) then {
    g_class = "PLT";
	g_group = "1";
	g_unit = "141";
	g_name = "BAF Attack Jet Pilot";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "jet2" && {player == jet2}) then {
    g_class = "USPLT";
	g_group = "1";
	g_unit = "208";
	g_name = "US Attack Jet Pilot";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "sniper" && {player == sniper}) then {
    g_class = "BAF_SN";
	g_group = "0";
	g_unit = "144";
	g_name = "Sniper";
	g_radio_channel = 8;
	g_radio = "ACRE_PRC343";
	crate = "crate8";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "spotter" && {player == spotter}) then {
    g_class = "BAF_SP";
	g_group = "0";
	g_unit = "145";
	g_name = "Spotter";
	g_radio_channel = 8;
	g_radio = "ACRE_PRC343";
	crate = "crate8";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "qm" && {player == qm}) then {
    g_class = "BAF_SL";
	g_group = "0";
	g_unit = "000";
	g_name = "Quartermaster";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are the Quartermaster";
	//M6 spawner
	Spawner addAction ["Spawn M6 Mortar box",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
};
/*if (!isNil "P31" && {player == P31}) then {
    g_class = "ANA_SL";
	g_group = "1";
	g_unit = "121";
	g_name = "Delta Section Leader";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};

if (!isNil "P32" && {player == P32}) then {
    g_class = "ANA_TL";
	g_group = "1";
	g_unit = "122";
	g_name = "Delta Team Leader";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P33" && {player == P33}) then {
    g_class = "ANA_RF";
	g_group = "1";
	g_unit = "123";
	g_name = "Delta Rifleman";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P34" && {player == P34}) then {
    g_class = "ANA_GRN";
	g_group = "1";
	g_unit = "124";
	g_name = "Delta Rifleman";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P35" && {player == P35}) then {
    g_class = "ANA_GRNASS";
	g_group = "1";
	g_unit = "125";
	g_name = "Delta Rifleman";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P36" && {player == P36}) then {
    g_class = "ANA_TL";
	g_group = "1";
	g_unit = "126";
	g_name = "Delta Team Leader";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P37" && {player == P37}) then {
    g_class = "ANA_MG";
	g_group = "1";
	g_unit = "127";
	g_name = "Delta Machine Gunner";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P38" && {player == P38}) then {
    g_class = "ANA_MGASS";
	g_group = "1";
	g_unit = "128";
	g_name = "Delta Maching Gunner Assistant";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P39" && {player == P39}) then {
    g_class = "ANA_MED";
	g_group = "1";
	g_unit = "129";
	g_name = "Delta Medic";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
/*
if (!isNil "P21" && {player == P21}) then {
    g_class = "PLT";
	g_group = "1";
	g_unit = "123";
	g_radio = "";
	g_name = "Blackhawk Pilot";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P22" && {player == P22}) then {
    g_class = "PLT_CREW";
	g_group = "1";
	g_unit = "130";
	g_radio = "";
	g_name = "Crew Chief";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P23" && {player == P23}) then {
    g_class = "PLT_CREW";
	g_group = "1";
	g_unit = "131";
	g_radio = "";
	g_name = "Door Gunner";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P24" && {player == P24}) then {
    g_class = "PLT_CREW";
	g_group = "1";
	g_unit = "132";
	g_radio = "";
	g_name = "Crew Chief";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P25" && {player == P25}) then {
    g_class = "ARMR_CO";
	g_group = "1";
	g_unit = "133";
	g_name = "Armour Crew Commander";
	g_radio_channel = 5;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P26" && {player == P26}) then {
    g_class = "ARMR_CREW";
	g_group = "1";
	g_unit = "134";
	g_name = "Armour Crew";
	g_radio_channel = 5;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P27" && {player == P27}) then {
    g_class = "ARMR_CREW";
	g_group = "1";
	g_unit = "135";
	g_name = "Armour Crew";
	g_radio_channel = 5;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "P28" && {player == P28}) then {
    g_class = "POL_SL";
	g_group = "1";
	g_unit = "136";
	g_name = "Section Leader";
	g_radio_channel = 4;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "P29" && {player == P29}) then {
    g_class = "POL_RF";
	g_group = "1";
	g_unit = "137";
	g_name = "Rifleman";
	g_radio_channel = 4;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "P30" && {player == P30}) then {
    g_class = "POL_GRN";
	g_group = "1";
	g_unit = "138";
	g_name = "Grenadier";
	g_radio_channel = 4;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "P31" && {player == P31}) then {
    g_class = "POL_AR";
	g_group = "1";
	g_unit = "139";
	g_name = "Autorifleman";
	g_radio_channel = 4;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "P32" && {player == P32}) then {
    g_class = "POL_MED";
	g_group = "1";
	g_unit = "140";
	g_name = "Medic";
	g_radio_channel = 4;
	g_radio = "ACRE_PRC148";
	["en","ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are a Medic. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P33" && {player == P33}) then {
    g_class = "PLT";
	g_group = "1";
	g_unit = "141";
	g_radio = "";
	g_name = "Apache Pilot";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};
if (!isNil "P34" && {player == P34}) then {
    g_class = "PLT";
	g_group = "1";
	g_unit = "141";
	g_radio = "";
	g_name = "Apache Gunner";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};
/*
if (!isNil "P30" && {player == P30}) then {
    g_class = "USMC_MED";
	g_group = "1";
	g_unit = "138";
};

if (!isNil "P31" && {player == P31}) then {
    g_class = "PILOT_BLACKHAWK";
	g_group = "1";
	g_unit = "139";
};
if (!isNil "P32" && {player == P32}) then {
    g_class = "PILOT_CHINNOK";
	g_group = "1";
	g_unit = "140";
};
if (!isNil "P33" && {player == P33}) then {
    g_class = "PILOT_WILDCAT";
	g_group = "1";
	g_unit = "141";
};

if (!isNil "P34" && {player == P34}) then {
    g_class = "ARMOUR";
	g_group = "1";
	g_unit = "142";
};

if (!isNil "P35" && {player == P35}) then {
    g_class = "ARMOURCREW";
	g_group = "1";
	g_unit = "143";
};

if (!isNil "P36" && {player == P36}) then {
    g_class = "ARMOURCREW";
	g_group = "1";
	g_unit = "144";
};

if (!isNil "P37" && {player == P37}) then {
    g_class = "SPOTTER";
	g_group = "1";
	g_unit = "145";
};
if (!isNil "P38" && {player == P38}) then {
    g_class = "SNIPER";
	g_group = "1";
	g_unit = "146";
};
*/

execVM "client\player\boxes\init.sqf";
_test = format["hint '%1'",getPlayerUID player];
_test2 = format["hint '%1'",({side _x == WEST} count playableUnits)];

/*
execVM "client\player\boxes\main_ammo1.sqf";
_test = format["hint '%1'",getPlayerUID player];
_test2 = format["hint '%1'",({side _x == WEST} count playableUnits)];
*/
 
 TWC_fnc_getAlphaList = {
    execVM "client\playerlist\alpha.sqf";
};

TWC_fnc_getBravoList = {
     execVM "client\playerlist\bravo.sqf";
};

TWC_fnc_getCharlieList = {
   execVM "client\playerlist\charlie.sqf";
};

TWC_fnc_getAirList = {
   execVM "client\playerlist\air.sqf";
};

TWC_fnc_getArmourList = {
   execVM "client\playerlist\armourcrew.sqf";
};

TWC_fnc_getMERTList = {
   execVM "client\playerlist\mert.sqf";
};

TWC_fnc_getSniperteamList = {
   execVM "client\playerlist\sniperteam.sqf";
};

playerListAction = ["thisStartsTheList","Player List","", {},{true}] call ace_interact_menu_fnc_createAction;
alphaAction = ["AlphaList","Alpha List","", {call TWC_fnc_getAlphaList;},{true}] call ace_interact_menu_fnc_createAction;
bravoAction = ["BravoList","Bravo List","", {call TWC_fnc_getBravoList;},{true}] call ace_interact_menu_fnc_createAction;
charlieAction = ["CharlieList","Charlie List","", {call TWC_fnc_getCharlieList;},{true}] call ace_interact_menu_fnc_createAction;
airAction = ["AirList","Air List","", {call TWC_fnc_getAirList;},{true}] call ace_interact_menu_fnc_createAction;
armourAction = ["ArmourList","Armour List","", {call TWC_fnc_getArmourList;},{true}] call ace_interact_menu_fnc_createAction;
mertAction = ["MERTList","MERT List","", {call TWC_fnc_getMERTList;},{true}] call ace_interact_menu_fnc_createAction;
sniperteamAction = ["SniperteamList","Sniperteam List","", {call TWC_fnc_getSniperteamList;},{true}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], playerListAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], alphaAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], bravoAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], charlieAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], airAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], armourAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], mertAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], sniperteamAction] call ace_interact_menu_fnc_addActionToObject;

ammoCrateSpawner addAction ["Repair/Rearm/Refuel Vehicle",
	{[] execVM  "client\sys_blufor\fnc_vehicleRepair.sqf"},[],0,true,false,"",""];


_name = name player;
_text = format["%1 joined in as %2",_name,g_name];
[TWCServer,_text] remoteExec ["TWC_fnc_GlobalChat", 2]; 

if (g_class != "") then {
	execVM format["client\player\loadout\%1.sqf", g_class];
};

sleep 2;
if (g_radio != "") then {
	_radioID = [g_radio] call acre_api_fnc_getRadioByType;
	_switchChannel = [_radioID, g_radio_channel] call acre_api_fnc_setRadioChannel;
	Hint parseText format ["<t color='#d0dd00' size='1.2' shadow='1' shadowColor='#000000' align='center'>Radio Set</t><br/><t color='#d0dd00' size='0.8' shadow='1' shadowColor='#565656' align='left'>Radio:</t><t color='##013bb6' size='0.8' shadow='1' shadowColor='#565656' align='right'>%1</t><br/><t color='#d0dd00' size='0.8' shadow='1' shadowColor='#565656' align='left'>Channel:</t><t color='##013bb6' size='0.8' shadow='1' shadowColor='#565656' align='right'>%2</t>",g_radio,g_radio_channel];
};