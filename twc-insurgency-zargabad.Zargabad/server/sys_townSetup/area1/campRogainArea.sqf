
//Camp Rogain Area Markers
_rogainSpawn1 = createMarkerLocal ["rogainSpawn1", [4896.21, 5990.72, 168.626]];
_rogainSpawn2 = createMarkerLocal ["rogainSpawn2", [5048.55, 6013.57, 190.539]];
_rogainSpawn3 = createMarkerLocal ["rogainSpawn3", [5149.99, 5922.29, 168.973]];

_rogainAttack1 = createMarkerLocal ["rogainAttack1", [4983.73, 5918.94, 208.392]];
_rogainAttack2 = createMarkerLocal ["rogainAttack2", [5027.84, 5939.1, 208.798]];
_rogainAttack3 = createMarkerLocal ["rogainAttack3", [5015.35, 5896.16, 208.145]];

//Camp Rogain Area Prespawn Trigger
_trigPos = getMarkerPos "rogainCenter";
_trigArea = [400, 400, 0, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	rogainPrespawnAI = ['rogainCenter', 50] call InsP_fnc_prespawnAI;
	rogainPrespawnAI2 = ['rogainCenter', 60] call InsP_fnc_patrolTown;
	rogainPrespawnAI3 = ['rogainCenter', 50] call InsP_fnc_prespawnAI;
	"
	, "deleteVehicle rogainPrespawnAI;"];
_trigName = "rogainPrespawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;

//A8 Area Prespawn Trigger
_trigPos = getMarkerPos "a8Center";
_trigArea = [400, 550, 272.79, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	a8PrespawnAI = ['a8Center', 40] call InsP_fnc_prespawnAI;
	a8PrespawnAI2 = ['a8Center', 40] call InsP_fnc_prespawnAI;
	a8PrespawnAI3 = ['a8Center', 60] call InsP_fnc_patrolTown;
	a8prespawnCivs = ['a8Center', 20] call InsP_fnc_prespawnCivs;
	"
	, "deleteVehicle a8PrespawnTrig;"];
_trigName = "a8PrespawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;

//Camp Rogain Area Spawn Trigger
_trigPos = getMarkerPos "rogainCenter";
_trigArea = [100, 100, 0, false];
_trigAct = ["WEST", "PRESENT", true];
_trigState = ["this",
	"
	rogainSpawnAI = [['rogainSpawn1', 'rogainSpawn2', 'rogainSpawn3'], ['rogainAttack1', 'rogainAttack2', 'rogainAttack3'], 5, 150, 'rogainSpawnTrig'] spawn InsP_fnc_smallSpawnAI;
	"
	, "terminate rogainSpawnAI;"];
_trigName = "rogainSpawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;