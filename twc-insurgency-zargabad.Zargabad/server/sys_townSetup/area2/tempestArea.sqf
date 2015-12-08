
//tempest Area Markers
_tempestCenter2 = createMarkerLocal ["tempestCenter2", [1986, 3534, 0]];
_tempestCenter3 = createMarkerLocal ["tempestCenter3", [1993, 3503, 0]];

//e6 Area Prespawn Trigger
_trigPos = [2810, 3741, 0];
_trigArea = [250, 250, 0, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	e6PrespawnAI = ['e6Center', 20] call InsP_fnc_prespawnAI;
	"
	, "deleteVehicle e6PrespawnTrig;"];
_trigName = "e6PrespawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;

//tempest Area Prespawn Trigger
_trigPos = [1957, 3555, 0];
_trigArea = [400, 400, 0, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	tempestPrespawnAI = ['tempestCenter', 50] call InsP_fnc_prespawnAI;
	tempestPrespawnAI2 = ['tempestCenter2', 20] call InsP_fnc_prespawnAI;
	tempestPrespawnAI3 = ['tempestCenter3', 40] call InsP_fnc_patrolTown;
	"
	, "deleteVehicle tempestPrespawnTrig;"];
_trigName = "tempestPrespawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;