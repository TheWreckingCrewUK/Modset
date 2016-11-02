twc_fnc_globalCleanup = {
	_start = diag_tickTime;
	{
		deleteVehicle _x
	} forEach allDead;
	_groundWeapons = nearestObjects [getPos player, ["WeaponHolder","GroundWeaponHolder"], 7000];
	{deleteVehicle _x}forEach _groundWeapons;
	hint format["Global Cleanup took %1 seconds", diag_tickTime - _start];    
};
twc_fnc_clickToSpawn = { 
	_closetunits = nearestObjects [player, ["Man"], 5];
	{vehicle _x setpos [_this select 0,_this select 1,_this select 2];}foreach _closetunits;
};

twc_fnc_timeMorning = {
	{setDate [2035, 6, 24, 7, 30];} remoteExecCall ["bis_fnc_call", 2]; 
};
twc_fnc_timeNoon = {
	{setDate [2035, 6, 24, 12, 30];} remoteExecCall ["bis_fnc_call", 2]; 
		
};
twc_fnc_timeEvening = {
	{setDate [2035, 6, 24, 21, 0];} remoteExecCall ["bis_fnc_call", 2]; 
		
};
twc_fnc_timeMidnight = {
	{setDate [2035, 6, 24, 0, 0];} remoteExecCall ["bis_fnc_call", 2]; 
		
};

twc_fnc_captureAA1 = {
	_trig = nearestObject [getMarkerPos "aa1", "emptydetector"];
	deleteVehicle _trig;
	["aa1",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureAirbase2 = {
	_trig = nearestObject [getMarkerPos "airbase2", "emptydetector"];
	deleteVehicle _trig;
	["airbase2",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureHQ1 = {
	_trig = nearestObject [getMarkerPos "hq1", "emptydetector"];
	deleteVehicle _trig;
	["hq1",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_capturInf1 = {
	_trig = nearestObject [getMarkerPos "inf1", "emptydetector"];
	deleteVehicle _trig;
	["inf1",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureInf2 = {
	_trig = nearestObject [getMarkerPos "inf2", "emptydetector"];
	deleteVehicle _trig;
	["inf2",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureInf3 = {
	_trig = nearestObject [getMarkerPos "inf3", "emptydetector"];
	deleteVehicle _trig;
	["inf3",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureInf4 = {
	_trig = nearestObject [getMarkerPos "inf4", "emptydetector"];
	deleteVehicle _trig;
	["inf4",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureInstallation1 = {
	_trig = nearestObject [getMarkerPos "installation1", "emptydetector"];
	deleteVehicle _trig;
	["installation1",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureMainHQ = {
	_trig = nearestObject [getMarkerPos "mainHQ", "emptydetector"];
	deleteVehicle _trig;
	["inf1",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureMech1 = {
	_trig = nearestObject [getMarkerPos "mech1", "emptydetector"];
	deleteVehicle _trig;
	["mech1",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureMotorized1 = {
	_trig = nearestObject [getMarkerPos "motorized1", "emptydetector"];
	deleteVehicle _trig;
	["motorized1",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureOutpost1 = {
	_trig = nearestObject [getMarkerPos "outpost1", "emptydetector"];
	deleteVehicle _trig;
	["outpost1",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureOutpost2 = {
	_trig = nearestObject [getMarkerPos "outpost2", "emptydetector"];
	deleteVehicle _trig;
	["outpost2",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureRadar1 = {
	"radar1Radius" setMarkerAlpha 0;
	_trig = nearestObject [getMarkerPos "radar1", "emptydetector"];
	deleteVehicle _trig;
	["radar1",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureRadar2 = {
	"radar2Radius" setMarkerAlpha 0;
	_trig = nearestObject [getMarkerPos "radar2", "emptydetector"];
	deleteVehicle _trig;
	["radar2",false] remoteExec ["twc_siteCapturedBlufor",2];
};
twc_fnc_captureSupport1 = {
	_trig = nearestObject [getMarkerPos "support1", "emptydetector"];
	deleteVehicle _trig;
	["support1",false] remoteExec ["twc_siteCapturedBlufor",2];
};

MemeAction = ["thisStartsTheServer","Server Actions","", {},{true}] call ace_interact_menu_fnc_createAction;
ServerAction = ["thisStartsTheOther","Other Actions","", {},{true}] call ace_interact_menu_fnc_createAction;
TimeAction = ["thisStartsTheTime","Time Actions","", {},{true}] call ace_interact_menu_fnc_createAction;
Site1Action = ["thisStartsTheSites1","Site1 Capture Actions","", {},{true}] call ace_interact_menu_fnc_createAction;
Site2Action = ["thisStartsTheSites2","Site2 Capture Actions","", {},{true}] call ace_interact_menu_fnc_createAction;

globalCleanupAction = ["GlobalCleanup","Global Cleanup","", {call twc_fnc_globalCleanup;},{true}] call ace_interact_menu_fnc_createAction;
clickToSpawnAction = ["ClicktoSpawn","Teleport","", {openMap [true, false]onMapSingleClick "_pos spawn twc_fnc_clickToSpawn; onMapSingleClick """"";},{true}] call ace_interact_menu_fnc_createAction;

TimeMorningAction = ["TimeMorning","Time Morning","", {call twc_fnc_timeMorning;},{true}] call ace_interact_menu_fnc_createAction;
TimeNoonAction = ["TimeNoon","Time Noon","", {call twc_fnc_timeNoon;},{true}] call ace_interact_menu_fnc_createAction;
TimeEveningAction = ["TimeEvening","Time Evening","", {call twc_fnc_timeEvening;},{true}] call ace_interact_menu_fnc_createAction;
TimeMidnightAction = ["TimeMidnight","Time Midnight","", {call twc_fnc_timeMidnight;},{true}] call ace_interact_menu_fnc_createAction;

captureAA1Action = ["captureAA1","AA1","", {call twc_fnc_captureAA1;},{true}] call ace_interact_menu_fnc_createAction;
captureAirbase2Action = ["captureAirbase2","Airbase2","", {call twc_fnc_captureAirbase2;},{true}] call ace_interact_menu_fnc_createAction;
captureHQ1Action = ["captureHQ1","HQ1","", {call twc_fnc_captureHQ1;},{true}] call ace_interact_menu_fnc_createAction;
captureInf1Action = ["captureInf1","Inf1","", {call twc_fnc_captureInf1;},{true}] call ace_interact_menu_fnc_createAction;
captureInf2Action = ["captureInf2","Inf2","", {call twc_fnc_captureInf2;},{true}] call ace_interact_menu_fnc_createAction;
captureInf3Action = ["captureInf3","Inf3","", {call twc_fnc_captureInf3;},{true}] call ace_interact_menu_fnc_createAction;
captureInf4Action = ["captureInf4","Inf4","", {call twc_fnc_captureInf4;},{true}] call ace_interact_menu_fnc_createAction;
captureInstallation1Action = ["captureInstallation1","Installation1","", {call twc_fnc_captureInstallation1;},{true}] call ace_interact_menu_fnc_createAction;
captureMainHQAction = ["captureMainHQ","MainHQ","", {call twc_fnc_captureMainHQ;},{true}] call ace_interact_menu_fnc_createAction;
captureMech1Action = ["captureMech1","Mech1","", {call twc_fnc_captureMech1;},{true}] call ace_interact_menu_fnc_createAction;
captureMotorized1Action = ["captureMotorized1","Motorized1","", {call twc_fnc_captureMotorized1;},{true}] call ace_interact_menu_fnc_createAction;
captureOutpost1Action = ["captureOutpost1","Outpost1","", {call twc_fnc_captureOutpost1;},{true}] call ace_interact_menu_fnc_createAction;
captureOutpost2Action = ["captureOutpost2","Outpost2","", {call twc_fnc_captureOutpost2;},{true}] call ace_interact_menu_fnc_createAction;
captureRadar1Action = ["captureRadar1","Radar1","", {call twc_fnc_captureRadar1;},{true}] call ace_interact_menu_fnc_createAction;
captureRadar2Action = ["captureRadar2","Radar2","", {call twc_fnc_captureRadar2;},{true}] call ace_interact_menu_fnc_createAction;
captureSupport1Action = ["captureSupport1","Support1","", {call twc_fnc_captureSupport1;},{true}] call ace_interact_menu_fnc_createAction;


[player, 1, ["ACE_SelfActions"], MemeAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer"], ServerAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer"], Site1Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer"], Site2Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer"], TimeAction] call ace_interact_menu_fnc_addActionToObject;

[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheOther"], GlobalCleanupAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheOther"], clickToSpawnAction] call ace_interact_menu_fnc_addActionToObject;

[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheTime"], TimeMorningAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheTime"], TimeNoonAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheTime"], TimeEveningAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheTime"], TimeMidnightAction] call ace_interact_menu_fnc_addActionToObject;

[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites1"], captureAA1Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites1"], captureAirbase2Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites1"], captureHQ1Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites1"], captureInf1Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites1"], captureInf2Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites1"], captureInf3Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites1"], captureInf4Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites1"], captureInstallation1Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites2"], captureMainHQAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites2"], captureMech1Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites2"], captureMotorized1Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites2"], captureOutpost1Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites2"], captureOutpost2Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites2"], captureRadar1Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites2"], captureRadar2Action] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheServer", "thisStartsTheSites2"], captureSupport1Action] call ace_interact_menu_fnc_addActionToObject;