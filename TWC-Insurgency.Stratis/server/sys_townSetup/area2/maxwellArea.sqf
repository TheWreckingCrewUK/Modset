
//maxwell Area Markers
_maxwellCenter2 = createMarkerLocal ["maxwellCenter2", [3348, 2960, 0]];
_maxwellCenter3 = createMarkerLocal ["maxwellCenter3", [3299, 2924, 0]];

_maxwellSpawn1 = createMarkerLocal ["maxwellSpawn1", [3263, 3088, 0]];
_maxwellSpawn2 = createMarkerLocal ["maxwellSpawn2", [3510, 2988, 0]];
_maxwellSpawn3 = createMarkerLocal ["maxwellSpawn3", [3138, 2958, 0]];

_maxwellAttack1 = createMarkerLocal ["maxwellAttack1", [3279, 2952, 0]];
_maxwellAttack2 = createMarkerLocal ["maxwellAttack2", [3311, 2928, 0]];

//maxwell Area Prespawn Trigger
_trigPos = [3344, 2930, 0];
_trigArea = [300, 300, 0, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	maxwellPrespawnAI = ['maxwellCenter', 30] call InsP_fnc_prespawnAI;
	maxwellPrespawnAI2 = ['maxwellCenter2', 80] call InsP_fnc_patrolTown;
	maxwellPrespawnAI3 = ['maxwellCenter3', 30] call InsP_fnc_prespawnAI;
	"
	, "deleteVehicle maxwellPrespawnTrig;"];
_trigName = "maxwellPrespawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;

//maxwell Area Spawn Trigger
_trigPos = [3339, 2950, 0];
_trigArea = [200, 200, 0, false];
_trigAct = ["WEST", "PRESENT", true];
_trigState = ["this",
	"if(isNil 'girnaSpawnAI') then {maxwellSpawnAI = [['maxwellSpawn1', 'maxwellSpawn2','maxwellSpawn3'], ['maxwellAttack1', 'maxwellAttack2'], maxwellSpawnTrig] spawn InsP_fnc_spawnAI;};"
	, ""];
_trigName = "maxwellSpawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;