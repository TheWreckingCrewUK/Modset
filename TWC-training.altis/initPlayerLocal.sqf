Everyone = [p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16];
publicVariable "Everyone";

Trainers = [T1,T2,T3,T4,T5];
publicVariable "Trainers";

if (isserver) then {

if (player in Trainers) then {
	execVM "scripts\weaponLists\playerLoadouts\modernTrainer.sqf";
	
	teleportListAction = ["Teleport","Teleport List","", {},{true}] call ace_interact_menu_fnc_createAction;
	_TeleAir = ['TeleALL','Teleport Airfield','', {vehicle player setPos (getMarkerPos "airfield");},{true}] call ace_interact_menu_fnc_createAction;
	_TelePhase3 = ['TeleALL','Teleport phase 3','', {vehicle player setpos (getMarkerPos "phase3");},{true}] call ace_interact_menu_fnc_createAction;
	_TeleBase = ['TeleALL','Teleport base','', {vehicle player setpos (getMarkerPos "hqarea");},{true}] call ace_interact_menu_fnc_createAction;
	_TeleLHD = ['TeleALL','Teleport LHD','', {vehicle player setpos getMarkerPos "lhd"},{true} call ace_interact_menu_fnc_createAction;
	_Telebomb = ['TeleALL','Teleport BombingRange','', {vehicle player setpos (getMarkerPos "bomb");},{true}] call ace_interact_menu_fnc_createAction;
	_Televehicle = ['TeleALL','Teleport VehicleRange','', {vehicle player setpos (getMarkerPos "vehicleTraining");},{true}] call ace_interact_menu_fnc_createAction;
	_Teleclick = ['TeleCLick','Teleport On Click','', {execVM "scripts\teleport\tele_onclick.sqf";},{true}] call ace_interact_menu_fnc_createAction;
	
	TWCeraListAction = ["era","TWC ERA List","", {},{true}] call ace_interact_menu_fnc_createAction;
	_modern = ['TWCera','TWC Modern','', {execVM "scripts\weaponLists\playerLoadouts\moderntrainer.sqf";execVM "scripts\weaponLists\crates\modern.sqf";execVM "scripts\weaponLists\playerLoadouts\modern.sqf";},{true}] call ace_interact_menu_fnc_createAction;
	_moderncoin = ['TWCera','TWC Moderncoin','', {execVM "scripts\weaponLists\playerLoadouts\moderntrainer.sqf";execVM "scripts\weaponLists\playerLoadouts\Modern.sqf";execVM "scripts\weaponLists\crates\moderncoin.sqf";},{true}] call ace_interact_menu_fnc_createAction;
	_coldwar = ['TWCera','TWC Coldwar ','', {execVM "scripts\weaponLists\playerLoadouts\coldwartrainer.sqf";execVM "scripts\weaponLists\playerLoadouts\coldwar.sqf";execVM "scripts\weaponLists\crates\coldwar.sqf";},{true}] call ace_interact_menu_fnc_createAction;
	
	[player, 1, ["ACE_SelfActions"], teleportListAction] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _TeleAir] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _TelePhase3] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _TeleBase] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _TeleLHD] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _Telebomb] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _Televehicle] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","Teleport"], _Teleclick] call ace_interact_menu_fnc_addActionToObject;
	
	[player, 1, ["ACE_SelfActions"], TWCeraListAction] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","era"], _modern] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","era"], _moderncoin] call ace_interact_menu_fnc_addActionToObject;
	[player, 1, ["ACE_SelfActions","era"], _coldwar] call ace_interact_menu_fnc_addActionToObject;
	
	
	
	
}
if (player in Everyone) then{
	execVM "scripts\weaponLists\playerLoadouts\modern.sqf";
};

};