
//b5 Area Prespawn Trigger
_trigPos = getMarkerPos "b5Center";
_trigArea = [500, 500, 0, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	b5PrespawnAI = ['b5Center', 40] call InsP_fnc_prespawnAI;
	b5PrespawnCiv = ['b5Center', 30] call InsP_fnc_prespawnCivs;
	"
	, "deleteVehicle b5PrespawnTrig;"];
_trigName = "b5PrespawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;

//b7 and c5 Area Prespawn Trigger
_trigPos = getMarkerPos "b7Center";
_trigArea = [500, 500, 0, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	b5PrespawnAI = ['b7Center', 40] call InsP_fnc_prespawnAI;
	b5PrespawnCiv = ['b7Center', 30] call InsP_fnc_prespawnCivs;
	c5PrespawnAI = ['c5Center', 20] call InsP_fnc_prespawnAI;
	c5PrespawnCiv = ['c5Center', 20] call InsP_fnc_prespawnCivs;
	"
	, "deleteVehicle b7PrespawnTrig;"];
_trigName = "b7PrespawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;