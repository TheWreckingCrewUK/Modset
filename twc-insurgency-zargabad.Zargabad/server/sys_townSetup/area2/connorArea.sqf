
//loannis/connor/cephas Area Prespawn Trigger
_trigPos = [2957, 1975, 0];
_trigArea = [500, 500, 0, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	loannisPrespawnAI = ['loannisCenter', 40] call InsP_fnc_prespawnAI;
	connorPrespawnAI = ['connorCenter', 40] call InsP_fnc_prespawnAI;
	cephasPrespawnAI = ['cephasCenter', 40] call InsP_fnc_prespawnAI;
	loannisPrespawnCivs = ['loannisCenter', 40] call InsP_fnc_prespawnCivs;
	cephasPrespawnCivs = ['cephasCenter', 40] call InsP_fnc_prespawnCivs;
	"
	, "deleteVehicle connorPrespawnTrig;"];
_trigName = "connorPrespawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;

//d1/2/3 Area Prespawn Trigger
_trigPos = [2524, 1053, 0];
_trigArea = [450, 450, 0, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	d1PrespawnAI = ['d1Center', 20] call InsP_fnc_prespawnAI;
	d2PrespawnAI = ['d2Center', 20] call InsP_fnc_prespawnAI;
	d3PrespawnAI = ['d3Center', 20] call InsP_fnc_prespawnAI;
	d1PrespawnCivs = ['d1Center', 10] call InsP_fnc_prespawnCivs;
	d2PrespawnCivs = ['d2Center', 10] call InsP_fnc_prespawnCivs;
	d3PrespawnCivs = ['d3Center', 10] call InsP_fnc_prespawnCivs;
	"
	, "deleteVehicle d1PrespawnTrig;"];
_trigName = "d1PrespawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;