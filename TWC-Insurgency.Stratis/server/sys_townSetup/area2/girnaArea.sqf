
//Agia Marina Area Markers
_girnaCenter = createMarkerLocal ["girnaCenter", [1892, 2757, 0]];
_girnaCenter2 = createMarkerLocal ["girnaCenter2", [1988, 2756, 0]];
_girnaCenter3 = createMarkerLocal ["girnaCenter3", [2053, 2780, 0]];
_girnaCenter5 = createMarkerLocal ["girnaCenter5", [2052, 2702, 0]];
_girnaCenter6 = createMarkerLocal ["girnaCenter6", [2019, 2665, 0]];

_girnaSpawn1 = createMarkerLocal ["girnaSpawn1", [1954, 2817, 0]];
_girnaSpawn2 = createMarkerLocal ["girnaSpawn2", [2231, 2819, 0]];
_girnaSpawn3 = createMarkerLocal ["girnaSpawn3", [2187, 2661, 0]];

_girnaAttack1 = createMarkerLocal ["girnaAttack1", [2007, 2761, 0]];
_girnaAttack2 = createMarkerLocal ["girnaAttack2", [2062, 2719, 0]];
_girnaAttack3 = createMarkerLocal ["girnaAttack3", [2020, 2669, 0]];

//Agia Marina Area Prespawn Trigger
_trigPos = [2021, 2718, 0];
_trigArea = [500, 500, 0, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	girnaPrespawnAI = ['girnaCenter', 30] call InsP_fnc_prespawnAI;
	girnaPrespawnAI3 = ['girnaCenter3', 30] call InsP_fnc_patrolTown;
	girnaPrespawnAI4 = ['girnaCenter4', 30] call InsP_fnc_prespawnAI;
	girnaPrespawnAI6 = ['girnaCenter6', 30] call InsP_fnc_patrolTown;
	girnaPrespawnCivs = ['girnaCenter2', 15] call InsP_fnc_prespawnCivs;
	girnaPrespawnCivs2 = ['girnaCenter3', 15] call InsP_fnc_prespawnCivs;
	girnaPrespawnCivs3 = ['girnaCenter4', 15] call InsP_fnc_prespawnCivs;
	girnaPrespawnCivs4 = ['girnaCenter5', 15] call InsP_fnc_prespawnCivs;
	"
	, "deleteVehicle girnaPrespawnTrig;"];
_trigName = "girnaPrespawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;

//Agia Marina Area Spawn Trigger
_trigPos = [2026, 2723, 0];
_trigArea = [100, 100, 0, false];
_trigAct = ["WEST", "PRESENT", true];
_trigState = ["this",
	"if(isNil 'girnaSpawnAI') then {girnaSpawnAI = [['girnaSpawn1', 'girnaSpawn2', 'girnaSpawn3'], ['girnaAttack1', 'girnaAttack2', 'girnaAttack3'], girnaSpawnTrig] spawn InsP_fnc_spawnAI;};"
	, ""];
_trigName = "girnaSpawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;