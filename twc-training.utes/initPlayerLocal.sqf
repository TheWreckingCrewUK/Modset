if (isNil "ERA") then {
	ERA = 0;
};

"ERA" addPublicVariableEventHandler {
	_newEra = _this select 1;
	
	switch (_newEra) do {
		case 0: {execVM "scripts\weaponLists\playerLoadouts\modern.sqf";};
		case 1: {execVM "scripts\weaponLists\playerLoadouts\coin.sqf";};
		case 2: {execVM "scripts\weaponLists\playerLoadouts\coldwar.sqf";};
		case 3: {execVM "scripts\weaponLists\playerLoadouts\1990.sqf";};
		default {hint "Something went wrong. \nPlease inform management.";};
	};
};

//Trainer actions
_everyone = ["p1","p2","p3","p4","p5","p6","p7","p8","p9","p10","p11","p12","p13","p14","p15"];

_trainers = ["S1","S2","S3","S4","S5","S6","S7","S8","S9","S10"];
//(str player) in _trainers
if ((str player) in _trainers) then {
	isTrainer = true;
	
	_eraSelection = ["era","Era Select","", {},{true}] call ace_interact_menu_fnc_createAction;

	_modern = ["eraModern", "Modern", "", {ERA = 0; publicVariable "ERA"; execVM "scripts\weaponLists\playerLoadouts\modern.sqf";if !(ismultiplayer) then {execVM "scripts\weaponLists\crates\modern.sqf";}}, {true}] call ace_interact_menu_fnc_createAction;
	_modernCoin = ["eraModernCoin","Modern Coin", "", {ERA = 1; publicVariable "ERA"; execVM "scripts\weaponLists\playerLoadouts\coin.sqf";if !(ismultiplayer) then {execVM "scripts\weaponLists\crates\coin.sqf";}}, {true}] call ace_interact_menu_fnc_createAction;
	_coldWar = ["eraColdWar","Cold War", "", {ERA = 2; publicVariable "ERA"; execVM "scripts\weaponLists\playerLoadouts\coldwar.sqf";if !(ismultiplayer) then {execVM "scripts\weaponLists\crates\Coldwar.sqf";}},{true}] call ace_interact_menu_fnc_createAction;
	_1990 = ["era90","90's", "", {ERA = 3; publicVariable "ERA"; execVM "scripts\weaponLists\playerLoadouts\1990.sqf";if !(ismultiplayer) then {execVM "scripts\weaponLists\crates\1990.sqf";}},{true}] call ace_interact_menu_fnc_createAction;
	

	[player, 1, ["ACE_SelfActions"], _eraSelection] call ace_interact_menu_fnc_addActionToObject;

	[player, 1, ["ACE_SelfActions","era"], _modern] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","era"], _modernCoin] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","era"], _coldWar] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","era"], _1990] call ace_interact_menu_fnc_addActionToObject;
	
//Teleport and range actions
	teleportListAction = ["Teleport","Teleport List","", {},{true}] call ace_interact_menu_fnc_createAction;
	_Teleclick = ['TeleCLick','Teleport On Click','', {execVM "scripts\teleport\tele_onclick.sqf";},{true}] call ace_interact_menu_fnc_createAction;
	
	TWCrandomrange = ["range","TWC range randomizer","", {},{true}] call ace_interact_menu_fnc_createAction;
	_cqb = ['CQBrandomize','CQB Range','', {call twc_fnc_randomCQB},{true}] call ace_interact_menu_fnc_createAction;
	
	[player, 1, ["ACE_SelfActions"], teleportListAction] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _Teleclick] call ace_interact_menu_fnc_addActionToObject;
	
	[player, 1, ["ACE_SelfActions"], TWCrandomrange] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","range"], _CQB] call ace_interact_menu_fnc_addActionToObject;
	
//medical training menu	
	_twcMedicalMenu = ["twcMedical", "Medical Training","",{},{true}] call ace_interact_menu_fnc_createAction;
     
	 //Create variable to hint damage cause
	"medicalPacket" addPublicVariableEventHandler{
		_typeOfDamage = _this select 1;
		hint format ["Annie was damaged by %1", _typeOfDamage];
	};
    _medEasy = ["easy", "Easy", "", {medicalPacket = [0,player]; publicVariableServer "medicalPacket";}, {true}] call ace_interact_menu_fnc_createAction;
    _medMedium = ["medium", "Medium", "", {medicalPacket = [1,player]; publicVariableServer "medicalPacket";}, {true}] call ace_interact_menu_fnc_createAction;
    _medHard = ["hard", "Hard", "", {medicalPacket = [2,player]; publicVariableServer "medicalPacket";}, {true}] call ace_interact_menu_fnc_createAction;
     
    [player, 1, ["ACE_SelfActions"], _twcMedicalMenu] call ace_interact_menu_fnc_addActionToObject;
    [player, 1, ["ACE_SelfActions","twcMedical"], _medEasy] call ace_interact_menu_fnc_addActionToObject;
    [player, 1, ["ACE_SelfActions","twcMedical"], _medMedium] call ace_interact_menu_fnc_addActionToObject;
    [player, 1, ["ACE_SelfActions","twcMedical"], _medHard] call ace_interact_menu_fnc_addActionToObject;
   

//Set time of day
	_timeSelection = ["time","Time of day","", {},{true}] call ace_interact_menu_fnc_createAction;
	
	_morning = ["morning", "0400", "", {timeOfDay = 0; publicVariableServer "timeOfDay";}, {true}] call ace_interact_menu_fnc_createAction;
	_noon = ["noon", "1200", "", {timeOfDay = 1; publicVariableServer "timeOfDay";}, {true}] call ace_interact_menu_fnc_createAction;
	_evening = ["evening", "1600", "", {timeOfDay = 2; publicVariableServer "timeOfDay";}, {true}] call ace_interact_menu_fnc_createAction;
	_midnight = ["midnight", "2400", "", {timeOfDay = 3; publicVariableServer "timeOfDay";}, {true}] call ace_interact_menu_fnc_createAction;
	
	[player, 1, ["ACE_SelfActions"], _timeSelection] call ace_interact_menu_fnc_addActionToObject;

	[player, 1, ["ACE_SelfActions","time"], _morning] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","time"], _noon] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","time"], _evening] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","time"], _midnight] call ace_interact_menu_fnc_addActionToObject;
	
}else{
	isTrainer = false;
};

switch (ERA) do {
	case 0: {execVM "scripts\weaponLists\playerLoadouts\modern.sqf";};
	case 1: {execVM "scripts\weaponLists\playerLoadouts\coin.sqf";};
	case 2: {execVM "scripts\weaponLists\playerLoadouts\coldwar.sqf";};
	case 3: {execVM "scripts\weaponLists\playerLoadouts\1990.sqf";};
	default {hint "Something went wrong. \nPlease inform management.";};
};