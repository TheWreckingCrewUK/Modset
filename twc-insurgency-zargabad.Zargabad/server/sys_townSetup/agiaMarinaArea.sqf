//Curently Center Zargabad
//************************
//Agia Marina Area Markers
_agiaMarinaCenter = createMarkerLocal ["agiaCenter", [4241, 4158.79, 17]];
_a3Center = createMarkerLocal ["a3Center", [4544.91, 3992.78, 19]];
_militaryRangeCenter = createMarkerLocal ["militaryRangeCenter", [4597.27, 4147.87, 18]];

_agiaSpawn1 = createMarkerLocal ["agiaSpawn1", [4437, 4112.19, 17.0698]];
_agiaSpawn2 = createMarkerLocal ["agiaSpawn2", [4155.47, 4446.61, 18.61577]];
_agiaSpawn3 = createMarkerLocal ["agiaSpawn3", [3955.1, 4157.7, 16.22936]];

_agiaAttack1 = createMarkerLocal ["agiaAttack1", [4079.7, 3862.38, 16.40216]];
_agiaAttack2 = createMarkerLocal ["agiaAttack2", [4155.54, 4446.02, 16.29896]];
_agiaAttack3 = createMarkerLocal ["agiaAttack3", [4553.5, 4335.84, 18.45795]];

//Agia Marina Area Prespawn Trigger
_trigPos = getMarkerPos "agiaCenter";
_trigArea = [500, 500, 0, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	agiaPrespawnAI1 = ['agiaCenter', 150] call InsP_fnc_prespawnAI;
	agiaPrespawnAI2 = ['agiaCenter', 150] call InsP_fnc_prespawnAI;
	agiaPrespawnAI3 = ['agiaCenter', 150] call InsP_fnc_prespawnAI;
	milRangePrespawnAI1 = ['militaryRangeCenter', 50] call InsP_fnc_prespawnAI;
	milRangePrespawnAI2 = ['militaryRangeCenter', 50] call InsP_fnc_prespawnAI;
	a3PrespawnAI = ['a3Center', 20] call InsP_fnc_prespawnAI;
	agiaPrespawnCiv1 = ['agiaCenter', 135] call InsP_fnc_prespawnCivs;
	agiaPrespawnCiv2 = ['agiaCenter', 135] call InsP_fnc_prespawnCivs;
	agiaPrespawnCiv3 = ['agiaCenter', 135] call InsP_fnc_prespawnCivs;
	a3PrespawnCiv = ['a3Center', 10] call InsP_fnc_prespawnCivs;
	"
	, "deleteVehicle agiaPrespawnTrig;"];
_trigName = "agiaPrespawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;

//Agia Marina Area Spawn Trigger
_trigPos = getMarkerPos "agiaCenter";
_trigArea = [500, 500, 0, false];
_trigAct = ["WEST", "PRESENT", true];
_trigState = ["this",
	"if(isNil 'agiaSpawnAI') then {agiaSpawnAI = [['agiaSpawn1', 'agiaSpawn2', 'agiaSpawn3'], ['agiaAttack1', 'agiaAttack2', 'agiaAttack3'], agiaSpawnTrig] spawn InsP_fnc_spawnAI;};"
	, ""];
_trigName = "agiaSpawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;