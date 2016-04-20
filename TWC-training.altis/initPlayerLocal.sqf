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

	_modern = ["eraModern", "Modern", "", {ERA = 0; publicVariable "ERA"; execVM "scripts\weaponLists\playerLoadouts\modern.sqf";}, {true}] call ace_interact_menu_fnc_createAction;
	_modernCoin = ["eraModernCoin","Modern Coin", "", {ERA = 1; publicVariable "ERA"; execVM "scripts\weaponLists\playerLoadouts\coin.sqf";}, {true}] call ace_interact_menu_fnc_createAction;
	_coldWar = ["eraColdWar","Cold War", "", {ERA = 2; publicVariable "ERA"; execVM "scripts\weaponLists\playerLoadouts\coldwar.sqf";},{true}] call ace_interact_menu_fnc_createAction;
	_1990 = ["era90","90's", "", {ERA = 3; publicVariable "ERA"; execVM "scripts\weaponLists\playerLoadouts\1990.sqf";},{true}] call ace_interact_menu_fnc_createAction;
	

	[player, 1, ["ACE_SelfActions"], _eraSelection] call ace_interact_menu_fnc_addActionToObject;

	[player, 1, ["ACE_SelfActions","era"], _modern] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","era"], _modernCoin] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","era"], _coldWar] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","era"], _1990] call ace_interact_menu_fnc_addActionToObject;
	
//Teleport and range actions
	teleportListAction = ["Teleport","Teleport List","", {},{true}] call ace_interact_menu_fnc_createAction;
	_TeleAir = ['TeleAirAll','Teleport Airfield','', {vehicle player setPos (getMarkerPos "airfield");},{true}] call ace_interact_menu_fnc_createAction;
	_Teleclass = ['TeleClassAll','Teleport Classroom','', {vehicle player setPos (getMarkerPos "Classroom");},{true}] call ace_interact_menu_fnc_createAction;
	_TelePhase3 = ['TelePhaseAll','Teleport phase 3','', {vehicle player setpos (getMarkerPos "phase3");},{true}] call ace_interact_menu_fnc_createAction;
	_TeleBase = ['TeleBaseAll','Teleport base','', {vehicle player setpos (getMarkerPos "hqarea");},{true}] call ace_interact_menu_fnc_createAction;
	_TeleLHD = ['TeleLHDAll','Teleport LHD','', {vehicle player setpos (getMarkerPos "lhd");},{true}] call ace_interact_menu_fnc_createAction;
	_Telebomb = ['TeleBombAll','Teleport BombingRange','', {vehicle player setpos (getMarkerPos "bomb");},{true}] call ace_interact_menu_fnc_createAction;
	_Televehicle = ['TeleVehAll','Teleport VehicleRange','', {vehicle player setpos (getMarkerPos "vehicleTraining");},{true}] call ace_interact_menu_fnc_createAction;
	_Teleclick = ['TeleCLick','Teleport On Click','', {execVM "scripts\teleport\tele_onclick.sqf";},{true}] call ace_interact_menu_fnc_createAction;
	
	TWCrandomrange = ["range","TWC range randomizer","", {},{true}] call ace_interact_menu_fnc_createAction;
	_rifle = ['rifleRange','Rifle range','', { execVM "scripts\riflerange\popup.sqf"; },{true}] call ace_interact_menu_fnc_createAction;
	_CQB = ['killhouse','CQB killhouse','', { execVM "scripts\cqbrange\cqbrandomtargets.sqf"; },{true}] call ace_interact_menu_fnc_createAction;
	_town = ['town','CQB Town','', { execVM "scripts\townrange\townrange.sqf"; },{true}] call ace_interact_menu_fnc_createAction;
	
	[player, 1, ["ACE_SelfActions"], teleportListAction] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _TeleAir] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _TelePhase3] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _TeleBase] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _TeleLHD] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _Telebomb] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _Televehicle] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _Teleclass] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _Teleclick] call ace_interact_menu_fnc_addActionToObject;
	
	[player, 1, ["ACE_SelfActions"], TWCrandomrange] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","range"], _rifle] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","range"], _CQB] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","range"], _town] call ace_interact_menu_fnc_addActionToObject;
	
	atRange = ['atRange', 'AT Range', '', {}, {true}] call ace_interact_menu_fnc_createAction;
	_tankClose = ['tankClose', '200m','', {tankTarget = 0; publicVariableServer "tankTarget";},{true}] call ace_interact_menu_fnc_createAction;
	_tankMedium = ['tankMedium', '300m','', {tankTarget = 1; publicVariableServer "tankTarget";}, {true}] call ace_interact_menu_fnc_createAction;
	_tankFar = ['tankFar', '400m','', {tankTarget = 2; publicVariableServer "tankTarget";}, {true}] call ace_interact_menu_fnc_createAction;
	
	[player, 1, ["ACE_SelfActions","range"], atRange] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions", "range", "atRange"], _tankClose] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions", "range", "atRange"], _tankMedium] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions", "range", "atRange"], _tankFar] call ace_interact_menu_fnc_addActionToObject;
	
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
	
//medical training menu
	_twcMedicalMenu = ["twcMedical", "Medical Training","",{},{true}] call ace_interact_menu_fnc_createAction;
	
	_medEasy = ["easy", "Easy", "", {medicalPacket = [0,player]; publicVariableServer "medicalTraining";}, {true}] call ace_interact_menu_fnc_createAction;
	_medMedium = ["medium", "Medium", "", {medicalPacket = [1,player]; publicVariableServer "medicalTraining";}, {true}] call ace_interact_menu_fnc_createAction;
	_medHard = ["hard", "Hard", "", {medicalPacket = [2,player]; publicVariableServer "medicalTraining";}, {true}] call ace_interact_menu_fnc_createAction;
	
	[player, 1, ["ACE_SelfActions"], _twcMedicalMenu] call ace_interact_menu_fnc_addActionToObject;

	[player, 1, ["ACE_SelfActions","twcMedical"], _medEasy] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","twcMedical"], _medMedium] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","twcMedical"], _medHard] call ace_interact_menu_fnc_addActionToObject;
	
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