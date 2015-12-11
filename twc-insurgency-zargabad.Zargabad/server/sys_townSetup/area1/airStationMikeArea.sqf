
//Air Station Mike Area Markers
_mikeCenter2 = createMarkerLocal ["mikeCenter2", [4346.73, 3873.64, 234.22]];
_mikeCenter3 = createMarkerLocal ["mikeCenter3", [4376.59, 3752.61, 224.919]];

_mikeSpawn1 = createMarkerLocal ["mikeSpawn1", [4267.76, 3989.84, 203.596]];
_mikeSpawn2 = createMarkerLocal ["mikeSpawn2", [4512.73, 4029.8, 185.931]];
_mikeSpawn3 = createMarkerLocal ["mikeSpawn3", [4574.65, 3825.44, 139.025]];
_mikeSpawn4 = createMarkerLocal ["mikeSpawn4", [4447.92, 3511.23, 203.846]];
_mikeSpawn5 = createMarkerLocal ["mikeSpawn5", [4149.09, 3730.85, 161.939]];

_mikeAttack1 = createMarkerLocal ["mikeAttack1", [4356.15, 3875.07, 234.22]];
_mikeAttack2 = createMarkerLocal ["mikeAttack2", [4370.54, 3811.19, 226.735]];
_mikeAttack3 = createMarkerLocal ["mikeAttack3", [4380.75, 3736.74, 224.912]];

//Air Station Mike Area Prespawn Trigger
_trigPos = [4270.16, 3727.53, 209.125];
_trigArea = [300, 300, 0, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	mikePrespawnAI = ['mikeCenter', 20] call InsP_fnc_prespawnAI; 
	mikePrespawnAI2 = ['mikeCenter3', 10] call InsP_fnc_prespawnAI;
	mikePrespawnAI3 = ['mikeCenter2', 60] call InsP_fnc_patrolTown;
	mikePrespawnCivs = ['mikeCenter2', 10] call InsP_fnc_prespawnCivs;
	"
	, "deleteVehicle mikePrespawnTrig;"];
_trigName = "mikePrespawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;

//Air Station Mike Area Spawn Trigger
_trigPos = [4346.79, 3798.26, 3798.26];
_trigArea = [50, 135, -4.3866, true];
_trigAct = ["WEST", "PRESENT", true];
_trigState = ["this",
	"
	if(isNil 'mikeSpawnAI') then {mikeSpawnAI = [['mikeSpawn1', 'mikeSpawn2', 'mikeSpawn3', 'mikeSpawn4', 'mikeSpawn5'], ['mikeAttack1', 'mikeAttack2', 'mikeAttack3'], mikeSpawnTrig] spawn InsP_fnc_spawnAI;};
	"
	, ""];
_trigName = "mikeSpawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;