
//Old Outpost Area Markers
_oldOutpostCenter2 = createMarkerLocal ["oldOutpostCenter2", [4337.11, 4363.47, 177.35]];
_oldOutpostCenter3 = createMarkerLocal ["oldOutpostCenter3", [4354.33, 4350.77, 177.369]];

//Old Outpost Area Prespawn Trigger
_trigPos = [4287.63, 4265.86, 158.938];
_trigArea = [500, 500, 0, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	oldOutpostPrespawnAI = ['oldOutpostCenter', 10] call InsP_fnc_prespawnAI;
	oldOutpostPrespawnAI2 = ['oldOutpostCenter2', 40] call InsP_fnc_patrolTown;
	oldOutpostPrespawnAI3 = ['oldOutpostCenter3', 10] call InsP_fnc_prespawnAI;
	oldOutpostPrespawnCivs = ['oldOutpostCenter', 10] call InsP_fnc_prespawnCivs;
	oldOutpostPrespawnCivs2 = ['oldOutpostCenter2', 10] call InsP_fnc_prespawnCivs;
	oldOutpostPrespawnCivs3 = ['oldOutpostCenter3', 10] call InsP_fnc_prespawnCivs;
	"
	, "deleteVehicle oldOutpostTrig;"];
_trigName = "oldOutpostTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;