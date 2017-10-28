g_class = "";
g_group = "";
g_unit = "";

[[West, "English", "Pashto", ""], [East, "Pashto"], [Civilian, "Pashto"]] call acre_api_fnc_setupMission;
["en", "English"] call acre_api_fnc_babelAddLanguageType;
["ru", "Pashto"] call acre_api_fnc_babelAddLanguageType;

//BAF Infantry units P1xx
if (!isNil "P101" && {player == P101}) then {
    g_class = "BAF_SL";
	g_group = "0";
	g_unit = "000";
	g_name = "Alpha Section Leader(BAF)";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are a Section Leader. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUK.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//M32 Spawner
	ammoCrateSpawner addAction ["Spawn M32",
	{nul = [] execVM "client\player\boxes\smallM32.sqf";},[],0,true,false,"",""];
	//L7A2 Spawner
	ammoCrateSpawner addAction ["Spawn L7A2",
	{nul = [] execVM "client\player\boxes\staticGPMG.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn L111A1",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn L134A1",
	{nul = [] execVM "client\player\boxes\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
};

if (!isNil "P102" && {player == P102}) then {
    g_class = "BAF_RF";
	g_group = "0";
	g_unit = "010";
	g_name = "Alpha Pointman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P103" && {player == P103}) then {
    g_class = "BAF_GRN";
	g_group = "0";
	g_unit = "011";
	g_name = "Alpha Grenadier";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P104" && {player == P104}) then {
    g_class = "BAF_AR";
	g_group = "0";
	g_unit = "012";
	g_name = "Alpha Automatic Rifleman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P105" && {player == P105}) then {
    g_class = "BAF_2";
	g_group = "0";
	g_unit = "013";
	g_name = "Alpha 2IC";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUK.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//L7A2 Spawner
	ammoCrateSpawner addAction ["Spawn L7A2",
	{nul = [] execVM "client\player\boxes\staticGPMG.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn L111A1",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn L134A1",
	{nul = [] execVM "client\player\boxes\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "P106" && {player == P106}) then {
    g_class = "BAF_MG";
	g_group = "0";
	g_unit = "020";
	g_name = "Alpha Machine Gunner";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P107" && {player == P107}) then {
    g_class = "BAF_MARK";
	g_group = "0";
	g_unit = "021";
	g_name = "Alpha Marksman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P108" && {player == P108}) then {
    g_class = "BAF_MED";
	g_group = "0";
	g_unit = "022";
	g_name = "Alpha Medic";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are a Medic. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
	//Medical Spawner
	ammoCrateSpawner addAction ["Spawn Medical Equipment",
	{nul = [] execVM "client\player\boxes\smallMedical.sqf";},[],0,true,false,"",""];
};

//US Army Infantry units P2xx
if (!isNil "P201" && {player == P201}) then {
    g_class = "US_SL";
	g_group = "0";
	g_unit = "023";
	g_name = "Bravo Squad Leader(US)";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are a Section Leader. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUS.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//M32 Spawner
	ammoCrateSpawner addAction ["Spawn M32",
	{nul = [] execVM "client\player\boxes\smallM32.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\player\boxes\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
};

if (!isNil "P202" && {player == P202}) then {
    g_class = "US_TL";
	g_group = "9";
	g_unit = "800";
	g_name = "Bravo Team Leader";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUS.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
};

if (!isNil "P203" && {player == P203}) then {
    g_class = "US_RF";
	g_group = "9";
	g_unit = "801";
	g_name = "Bravo Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P204" && {player == P204}) then {
    g_class = "US_GRN";
	g_group = "9";
	g_unit = "802";
	g_name = "Bravo Grenadier";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P205" && {player == P205}) then {
    g_class = "US_AR";
	g_group = "1";
	g_unit = "100";
	g_name = "Bravo Automatic Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P206" && {player == P206}) then {
    g_class = "US_TL";
	g_group = "1";
	g_unit = "110";
	g_name = "Bravo Team Leader";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUS.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
};

if (!isNil "P207" && {player == P207}) then {
    g_class = "US_AR";
	g_group = "1";
	g_unit = "111";
	g_name = "Bravo Automatic Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P208" && {player == P208}) then {
    g_class = "US_MARK";
	g_group = "1";
	g_unit = "112";
	g_name = "Bravo Marksman";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 2;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P209" && {player == P209}) then {
    g_class = "US_MED";
	g_group = "1";
	g_unit = "113";
	g_name = "Bravo Medic";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 2;
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are a Medic. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
	//Medical Spawner
	ammoCrateSpawner addAction ["Spawn Medical Equipment",
	{nul = [] execVM "client\player\boxes\smallMedical.sqf";},[],0,true,false,"",""];
};

//USMC Infantry units P3xx
if (!isNil "P301" && {player == P301}) then {
    g_class = "USMC_SL";
	g_group = "1";
	g_unit = "120";
	g_name = "Charlie Squad Leader(USMC)";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are a Section Leader. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";	
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//M32 Spawner
	ammoCrateSpawner addAction ["Spawn M32",
	{nul = [] execVM "client\player\boxes\smallM32.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\player\boxes\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
};

if (!isNil "P302" && {player == P302}) then {
    g_class = "USMC_TL";
	g_group = "1";
	g_unit = "121";
	g_name = "Charlie Team Leader";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\player\boxes\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
};

if (!isNil "P303" && {player == P303}) then {
    g_class = "USMC_RF";
	g_group = "1";
	g_unit = "122";
	g_name = "Charlie Rifleman";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P304" && {player == P304}) then {
    g_class = "USMC_AR";
	g_group = "1";
	g_unit = "123";
	g_name = "Charlie Automatic Rifleman";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P305" && {player == P305}) then {
    g_class = "USMC_AAR";
	g_group = "1";
	g_unit = "130";
	g_name = "Charlie Automatic Rifleman Assistant";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P306" && {player == P306}) then {
    g_class = "USMC_TL";
	g_group = "1";
	g_unit = "131";
	g_name = "Charlie Team Leader";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\player\boxes\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
};

if (!isNil "P307" && {player == P307}) then {
    g_class = "USMC_RF";
	g_group = "1";
	g_unit = "132";
	g_name = "Charlie Rifleman";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P308" && {player == P308}) then {
    g_class = "USMC_AR";
	g_group = "1";
	g_unit = "133";
	g_name = "Charlie Automatic Rifleman";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P309" && {player == P309}) then {
    g_class = "USMC_AAR";
	g_group = "1";
	g_unit = "134";
	g_name = "Charlie Automatic Rifleman Assistant";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P310" && {player == P310}) then {
    g_class = "USMC_TL";
	g_group = "1";
	g_unit = "135";
	g_name = "Charlie Team Leader";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\player\boxes\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
};

if (!isNil "P311" && {player == P311}) then {
    g_class = "USMC_MG";
	g_group = "1";
	g_unit = "136";
	g_name = "Charlie Machine Gunner";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P312" && {player == P312}) then {
    g_class = "USMC_MGASS";
	g_group = "1";
	g_unit = "137";
	g_name = "Charlie Machine Gunner Assistant";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P313" && {player == P313}) then {
    g_class = "USMC_MED";
	g_group = "1";
	g_unit = "138";
	g_name = "Charlie Medic";
	g_radio = "ACRE_PRC148";
	g_radio_channel = 3;
	["en","ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en","ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are a Medic. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
	//Medical Spawner
	ammoCrateSpawner addAction ["Spawn Medical Equipment",
	{nul = [] execVM "client\player\boxes\smallMedical.sqf";},[],0,true,false,"",""];
};

//ANA Infantry units P4xx
if (!isNil "P401" && {player == P401}) then {
    g_class = "ANA_SL";
	g_group = "1";
	g_unit = "121";
	g_name = "Delta Section Leader(ANA)";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};

if (!isNil "P402" && {player == P402}) then {
    g_class = "ANA_TL";
	g_group = "1";
	g_unit = "122";
	g_name = "Delta Team Leader";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P403" && {player == P403}) then {
    g_class = "ANA_RF";
	g_group = "1";
	g_unit = "123";
	g_name = "Delta Rifleman";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P404" && {player == P404}) then {
    g_class = "ANA_GRN";
	g_group = "1";
	g_unit = "124";
	g_name = "Delta Rifleman";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P405" && {player == P405}) then {
    g_class = "ANA_GRNASS";
	g_group = "1";
	g_unit = "125";
	g_name = "Delta Rifleman";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P406" && {player == P406}) then {
    g_class = "ANA_TL";
	g_group = "1";
	g_unit = "126";
	g_name = "Delta Team Leader";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P407" && {player == P407}) then {
    g_class = "ANA_MG";
	g_group = "1";
	g_unit = "127";
	g_name = "Delta Machine Gunner";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P408" && {player == P408}) then {
    g_class = "ANA_MGASS";
	g_group = "1";
	g_unit = "128";
	g_name = "Delta Maching Gunner Assistant";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
if (!isNil "P409" && {player == P409}) then {
    g_class = "ANA_MED";
	g_group = "1";
	g_unit = "129";
	g_name = "Delta Medic";
	g_radio = "";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are in Delta. Make sure to bind your ACRE Cycle Babel Language so you can speak with player civilians";
};
//Air units P5xx
if (!isNil "P501" && {player == P501}) then {
    g_class = "PLT";
	g_group = "1";
	g_unit = "203";
	g_name = "Transport Pilot (BAF)";
	g_radio_channel = 5;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUK.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUS.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Mortar spawner
	ammoCrateSpawner addAction ["Spawn M6 Mortar box",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//Medical Spawner
	ammoCrateSpawner addAction ["Spawn Medical Equipment",
	{nul = [] execVM "client\player\boxes\smallMedical.sqf";},[],0,true,false,"",""];
	//L7A2 Spawner
	ammoCrateSpawner addAction ["Spawn L7A2",
	{nul = [] execVM "client\player\boxes\staticGPMG.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\player\boxes\staticL134A1.sqf";},[],0,true,false,"",""];
	//L16 Spawner
	ammoCrateSpawner addAction ["Spawn L16",
	{nul = [] execVM "client\player\boxes\staticL16.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
};

if (!isNil "P502" && {player == P502}) then {
    g_class = "PLT";
	g_group = "1";
	g_unit = "203";
	g_name = "Crew Cheif (BAF)";
	g_radio_channel = 5;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\crewCheifs.sqf";
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUK.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUS.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Mortar spawner
	ammoCrateSpawner addAction ["Spawn M6 Mortar box",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//Medical Spawner
	ammoCrateSpawner addAction ["Spawn Medical Equipment",
	{nul = [] execVM "client\player\boxes\smallMedical.sqf";},[],0,true,false,"",""];
	//L7A2 Spawner
	ammoCrateSpawner addAction ["Spawn L7A2",
	{nul = [] execVM "client\player\boxes\staticGPMG.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\player\boxes\staticL134A1.sqf";},[],0,true,false,"",""];
	//L16 Spawner
	ammoCrateSpawner addAction ["Spawn L16",
	{nul = [] execVM "client\player\boxes\staticL16.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
};

if (!isNil "P503" && {player == P503}) then {
    g_class = "USPLT";
	g_group = "1";
	g_unit = "208";
	g_name = "Transport Pilot (US)";
	g_radio_channel = 6;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUK.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUS.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Mortar spawner
	ammoCrateSpawner addAction ["Spawn M6 Mortar box",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//Medical Spawner
	ammoCrateSpawner addAction ["Spawn Medical Equipment",
	{nul = [] execVM "client\player\boxes\smallMedical.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\player\boxes\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
};

if (!isNil "P504" && {player == P504}) then {
    g_class = "USPLT_CREW";
	g_group = "1";
	g_unit = "209";
	g_name = "Crew Chief (US)";
	g_radio_channel = 6;
	g_radio = "ACRE_PRC148";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\crewCheifs.sqf";
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUK.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUS.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Mortar spawner
	ammoCrateSpawner addAction ["Spawn M6 Mortar box",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//Medical Spawner
	ammoCrateSpawner addAction ["Spawn Medical Equipment",
	{nul = [] execVM "client\player\boxes\smallMedical.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\player\boxes\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
};

if (!isNil "P505" && {player == P505}) then {
    g_class = "PLT";
	g_group = "1";
	g_unit = "141";
	g_name = "Attack Jet Pilot";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	//Change Loadout
	Spawner addAction ["Change Loadout to BAF Jet Pilot",
	{nul = [] execVM "client\player\loadout\PLT.sqf";},[],0,true,false,"",""];
	Spawner addAction ["Change Loadout to US Jet Pilot",
	{nul = [] execVM "client\player\loadout\USPLT.sqf";},[],0,true,false,"",""];
};

if (!isNil "P507" && {player == P507}) then {
    g_class = "PLT";
	g_group = "1";
	g_unit = "141";
	g_radio_channel = 7;
	g_radio = "ACRE_PRC343";
	g_name = "Apache Pilot";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P508" && {player == P508}) then {
    g_class = "PLT_CREW";
	g_group = "1";
	g_unit = "141";
	g_radio_channel = 7;
	g_radio = "ACRE_PRC343";
	g_name = "Apache Gunner";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\fullApacheCrew.sqf";
};

//Ground attachments P6xx
if (!isNil "P601" && {player == P601}) then {
    g_class = "ARMR_CO";
	g_group = "1";
	g_unit = "205";
	g_name = "Armour Crew Commander";
	g_radio_channel = 4;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\fullArmourCrew.sqf";
	//Change Loadout
	Spawner addAction ["Change Loadout to BAF",
	{nul = [] execVM "client\player\loadout\ARMR_CO.sqf";},[],0,true,false,"",""];
	Spawner addAction ["Change Loadout to US",
	{nul = [] execVM "client\player\loadout\US_ARMR_CO.sqf";},[],0,true,false,"",""];
};

if (!isNil "P602" && {player == P602}) then {
    g_class = "ARMR_CREW";
	g_group = "1";
	g_unit = "206";
	g_name = "Armour Crew Driver";
	g_radio_channel = 4;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\fullArmourCrew.sqf";
	//Change Loadout
	Spawner addAction ["Change Loadout to BAF",
	{nul = [] execVM "client\player\loadout\ARMR_CREW.sqf";},[],0,true,false,"",""];
	Spawner addAction ["Change Loadout to US",
	{nul = [] execVM "client\player\loadout\US_ARMR_CREW.sqf";},[],0,true,false,"",""];
};

if (!isNil "P603" && {player == P603}) then {
    g_class = "ARMR_CREW";
	g_group = "1";
	g_unit = "206";
	g_name = "Armour Crew Gunner";
	g_radio_channel = 4;
	g_radio = "ACRE_PRC343";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\fullArmourCrew.sqf";
	//Change Loadout
	Spawner addAction ["Change Loadout to BAF",
	{nul = [] execVM "client\player\loadout\ARMR_CREW.sqf";},[],0,true,false,"",""];
	Spawner addAction ["Change Loadout to US",
	{nul = [] execVM "client\player\loadout\US_ARMR_CREW.sqf";},[],0,true,false,"",""];
};

if (!isNil "P604" && {player == P604}) then {
    g_class = "BAF_SN";
	g_group = "0";
	g_unit = "144";
	g_name = "Sniper";
	g_radio_channel = 8;
	g_radio = "ACRE_PRC343";
	crate = "crate8";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\fullSniperTeam.sqf";
	//Change Loadout
	Spawner addAction ["Change Loadout to BAF Sniper",
	{nul = [] execVM "client\player\loadout\BAF_SN.sqf";},[],0,true,false,"",""];
	Spawner addAction ["Change Loadout to US Sniper",
	{nul = [] execVM "client\player\loadout\US_SN.sqf";},[],0,true,false,"",""];
	Spawner addAction ["Change Loadout to USMC Sniper",
	{nul = [] execVM "client\player\loadout\USMC_SN.sqf";},[],0,true,false,"",""];
};

if (!isNil "P605" && {player == P605}) then {
    g_class = "BAF_SP";
	g_group = "0";
	g_unit = "145";
	g_name = "Spotter";
	g_radio_channel = 8;
	g_radio = "ACRE_PRC343";
	crate = "crate8";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	execVM "client\restrict\fullSniperTeam.sqf";
	//Change Loadout
	Spawner addAction ["Change Loadout to BAF Spotter",
	{nul = [] execVM "client\player\loadout\BAF_SP.sqf";},[],0,true,false,"",""];
	Spawner addAction ["Change Loadout to US Spotter",
	{nul = [] execVM "client\player\loadout\US_SP.sqf";},[],0,true,false,"",""];
	Spawner addAction ["Change Loadout to USMC Spotter",
	{nul = [] execVM "client\player\loadout\USMC_SP.sqf";},[],0,true,false,"",""];
};

if (!isNil "P606" && {player == P606}) then {
    g_class = "BAF_EOD_SL";
	g_group = "0";
	g_unit = "145";
	g_name = "Bomb Disposal Team Leader";
	g_radio_channel = 9;
	g_radio = "ACRE_PRC343";
	crate = "crate8";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
	//Spawn explosives
	ammoCrateSpawner addAction ["Spawn Small Explosives Box",
	{nul = [] execVM "client\player\boxes\smallCrateEOD.sqf";},[],0,true,false,"",""];
};

if (!isNil "P607" && {player == P607}) then {
    g_class = "BAF_EOD_SL";
	g_group = "0";
	g_unit = "145";
	g_name = "Bomb Disposal Operator";
	g_radio_channel = 9;
	g_radio = "ACRE_PRC343";
	crate = "crate8";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

if (!isNil "P608" && {player == P608}) then {
    g_class = "BAF_EOD_ESC";
	g_group = "0";
	g_unit = "145";
	g_name = "Bomb Disposal Team Infantry Escort";
	g_radio_channel = 9;
	g_radio = "ACRE_PRC343";
	crate = "crate8";
	["en"] call acre_api_fnc_babelSetSpokenLanguages;
	["en"] call acre_api_fnc_babelSetSpeakingLanguage;
};

//Special P9xx
if (!isNil "P901" && {player == P901}) then {
    g_class = "BAF_SL";
	g_group = "0";
	g_unit = "000";
	g_name = "Quartermaster";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are the Quartermaster";
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUK.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUS.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Mortar spawner
	ammoCrateSpawner addAction ["Spawn M6 Mortar box",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//Medical Spawner
	ammoCrateSpawner addAction ["Spawn Medical Equipment",
	{nul = [] execVM "client\player\boxes\smallMedical.sqf";},[],0,true,false,"",""];
	//L7A2 Spawner
	ammoCrateSpawner addAction ["Spawn GPMG",
	{nul = [] execVM "client\player\boxes\staticGPMG.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\player\boxes\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\player\boxes\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\player\boxes\clearboxes.sqf";},[],0,true,false,"",""];
	//Zeus Watermark removal, and spectator togle
	_action = ["Camera","Start Camera","",{execVM "client\zeus\camera.sqf"},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;	
	_action2 = ["Zeus","Spectator On","",{execVM "client\zeus\spectator_on.sqf"},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], _action2] call ace_interact_menu_fnc_addActionToObject;	
	_action3 = ["Zeus","Spectator Off","",{execVM "client\zeus\spectator_off.sqf"},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], _action3] call ace_interact_menu_fnc_addActionToObject;	
		_action4 = ["Zeus","Basemode On","",{execVM "client\zeus\basemode_on.sqf"},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], _action4] call ace_interact_menu_fnc_addActionToObject;	
		_action5 = ["Zeus","Basemode Off","",{execVM "client\zeus\basemode_off.sqf"},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], _action5] call ace_interact_menu_fnc_addActionToObject;
};
if (!isNil "P902" && {player == P902}) then {
    g_class = "BAF_SL";
	g_group = "0";
	g_unit = "000";
	g_name = "Quartermaster Assistant";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	["en", "ru"] call acre_api_fnc_babelSetSpokenLanguages;
	["en", "ru"] call acre_api_fnc_babelSetSpeakingLanguage;
	hint "You are the Quartermaster";
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUK.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUS.sqf";},[],0,true,false,"",""];
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\player\boxes\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Mortar spawner
	ammoCrateSpawner addAction ["Spawn M6 Mortar box",
	{nul = [] execVM "client\player\boxes\smallMortar.sqf";},[],0,true,false,"",""];
	//Medical Spawner
	ammoCrateSpawner addAction ["Spawn Medical Equipment",
	{nul = [] execVM "client\player\boxes\smallMedical.sqf";},[],0,true,false,"",""];
	//Zeus Watermark removal, and spectator togle
	_action = ["Camera","Start Camera","",{execVM "client\zeus\camera.sqf"},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;	
	_action2 = ["Zeus","Spectator On","",{execVM "client\zeus\spectator_on.sqf"},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], _action2] call ace_interact_menu_fnc_addActionToObject;	
	_action3 = ["Zeus","Spectator Off","",{execVM "client\zeus\spectator_off.sqf"},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], _action3] call ace_interact_menu_fnc_addActionToObject;	
		_action4 = ["Zeus","Basemode On","",{execVM "client\zeus\basemode_on.sqf"},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], _action4] call ace_interact_menu_fnc_addActionToObject;	
		_action5 = ["Zeus","Basemode Off","",{execVM "client\zeus\basemode_off.sqf"},{true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], _action5] call ace_interact_menu_fnc_addActionToObject;
};

//Ammobox init
execVM "client\player\boxes\init.sqf";
_test = format["hint '%1'",getPlayerUID player];
_test2 = format["hint '%1'",({side _x == WEST} count playableUnits)];

//Playerlists
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

TWC_fnc_getSniperteamList = {
   execVM "client\playerlist\sniperteam.sqf";
};

TWC_fnc_getQMList = {
   execVM "client\playerlist\qm.sqf";
};

TWC_fnc_getEODList = {
   execVM "client\playerlist\eod.sqf";
};
playerListAction = ["thisStartsTheList","Player List","", {},{true}] call ace_interact_menu_fnc_createAction;
alphaAction = ["AlphaList","Alpha List","", {call TWC_fnc_getAlphaList;},{true}] call ace_interact_menu_fnc_createAction;
bravoAction = ["BravoList","Bravo List","", {call TWC_fnc_getBravoList;},{true}] call ace_interact_menu_fnc_createAction;
charlieAction = ["CharlieList","Charlie List","", {call TWC_fnc_getCharlieList;},{true}] call ace_interact_menu_fnc_createAction;
airAction = ["AirList","Air List","", {call TWC_fnc_getAirList;},{true}] call ace_interact_menu_fnc_createAction;
armourAction = ["ArmourList","Armour List","", {call TWC_fnc_getArmourList;},{true}] call ace_interact_menu_fnc_createAction;
sniperteamAction = ["SniperteamList","Sniperteam List","", {call TWC_fnc_getSniperteamList;},{true}] call ace_interact_menu_fnc_createAction;
qmAction = ["QuartermasterList","Quartermaster","", {call TWC_fnc_getQMList;},{true}] call ace_interact_menu_fnc_createAction;
eodAction = ["EODList","EOD","", {call TWC_fnc_getQMList;},{true}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], playerListAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], alphaAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], bravoAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], charlieAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], airAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], armourAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], sniperteamAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], qmAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], eodAction] call ace_interact_menu_fnc_addActionToObject;

//Action at repairpoint
ammoCrateSpawner addAction ["Repair/Rearm/Refuel Vehicle",
	{[] execVM  "client\sys_blufor\fnc_vehicleRepair.sqf"},[],0,true,false,"",""];

//Popup stating player's name and role when joined
_name = name player;
_text = format["%1 joined in as %2",_name,g_name];
[TWCServer,_text] remoteExec ["TWC_fnc_GlobalChat", 2]; 

//Loads in loadout
if (g_class != "") then {
	execVM format["client\player\loadout\%1.sqf", g_class];
};

//ACRE init radio
sleep 2;
if (g_radio != "") then {
	_radioID = [g_radio] call acre_api_fnc_getRadioByType;
	_switchChannel = [_radioID, g_radio_channel] call acre_api_fnc_setRadioChannel;
	Hint parseText format ["<t color='#d0dd00' size='1.2' shadow='1' shadowColor='#000000' align='center'>Radio Set</t><br/><t color='#d0dd00' size='0.8' shadow='1' shadowColor='#565656' align='left'>Radio:</t><t color='##013bb6' size='0.8' shadow='1' shadowColor='#565656' align='right'>%1</t><br/><t color='#d0dd00' size='0.8' shadow='1' shadowColor='#565656' align='left'>Channel:</t><t color='##013bb6' size='0.8' shadow='1' shadowColor='#565656' align='right'>%2</t>",g_radio,g_radio_channel];
};