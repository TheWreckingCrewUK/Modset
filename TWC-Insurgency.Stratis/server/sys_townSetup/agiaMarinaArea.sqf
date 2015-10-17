
//Agia Marina Area Markers
_agiaMarinaCenter = createMarkerLocal ["agiaCenter", [2980.2, 5999.79, 0]];
_a3Center = createMarkerLocal ["a3Center", [3395.91, 6059.78, 0]];
_militaryRangeCenter = createMarkerLocal ["militaryRangeCenter", [3252.27, 5800.87, 0]];

_agiaSpawn1 = createMarkerLocal ["agiaSpawn1", [3141.2, 6213.19, 36.0698]];
_agiaSpawn2 = createMarkerLocal ["agiaSpawn2", [3305.47, 6033.61, 2.61577]];
_agiaSpawn3 = createMarkerLocal ["agiaSpawn3", [3202.1, 5856.7, 2.22936]];

_agiaAttack1 = createMarkerLocal ["agiaAttack1", [2913.7, 6053.38, 3.40216]];
_agiaAttack2 = createMarkerLocal ["agiaAttack2", [3043.54, 6035.02, 4.29896]];
_agiaAttack3 = createMarkerLocal ["agiaAttack3", [2969.5, 5932.84, 3.45795]];

//Agia Marina Area Prespawn Trigger
_trigPos = getMarkerPos "agiaCenter";
_trigArea = [350, 350, 0, false];
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
_trigArea = [200, 200, 0, false];
_trigAct = ["WEST", "PRESENT", true];
_trigState = ["this",
	"if(isNil 'agiaSpawnAI') then {agiaSpawnAI = [['agiaSpawn1', 'agiaSpawn2', 'agiaSpawn3'], ['agiaAttack1', 'agiaAttack2', 'agiaAttack3'], agiaSpawnTrig] spawn InsP_fnc_spawnAI;};"
	, ""];
_trigName = "agiaSpawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;