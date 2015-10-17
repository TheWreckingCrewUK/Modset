_trigPos = [10,10,0];
_trigArea = [0, 0, 0, false];
_trigAct = ["", "", false];
_trigState = ["(count playableUnits) < 1", 
	"
	//lowPlayerCountScript = execVM 'TWC\playerCount\lowPlayerCount.sqf';
	"
	, "terminate lowPlayerCountScript;"];

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState] call CBA_fnc_createTrigger;