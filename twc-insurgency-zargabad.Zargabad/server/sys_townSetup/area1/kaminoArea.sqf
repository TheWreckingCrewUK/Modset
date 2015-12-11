
//Kamino Area Markers
_b1Center = createMarkerLocal ["b1Center", [3605.43, 2960.57, 12.7221]];
_b4Center = createMarkerLocal ["b4Center", [3522.2, 3013.43, 12.1741]];

//B3 Area Marker
_b3Center = createMarkerLocal ["b3Center", [3061.57, 2778.23, 7.512]];

//Kamino Area Spawn/Attack Markers
_kaminoSpawn1 = createMarkerLocal ["kaminoSpawn1", [3769.42, 2658.05, 11.1118]];
_kaminoSpawn2 = createMarkerLocal ["kaminoSpawn2", [3962.6, 2780.32, 10.5791]];

_kaminoAttack1 = createMarkerLocal ["kaminoAttack1", [3869.42, 2658.05, 11.1118]];
_kaminoAttack2 = createMarkerLocal ["kaminoAttack2", [3769.42, 2758.05, 11.1118]];
_kaminoAttack3 = createMarkerLocal ["kaminoAttack3", [3869.42, 2708.05, 11.1118]];

//B3 Area Spawn/Attack Markers
_b3Spawn1 = createMarkerLocal ["b3Spawn1", [3964.06, 3173.92, 16.3786]];
_b3Spawn2 = createMarkerLocal ["b3Spawn2", [3484.2, 3394.1, 11.5593]];

_b3Attack1 = createMarkerLocal ["b3Attack1", [3964.06, 3273.92, 16.3786]];
_b3Attack2 = createMarkerLocal ["b3Attack2", [3484.2, 3494.1, 11.5593]];

//Kamino Area Prespawn Trigger
_trigPos = getMarkerPos "kaminoCenter";
_trigArea = [1000, 1000, 0, false];
_trigAct = ["WEST", "PRESENT", false];
_trigState = ["this", 
	"
	kaminoPrespawnAI = ['kaminoCenter', 75] call InsP_fnc_patrolTown;
	b1PrespawnAI = ['b1Center', 25] call InsP_fnc_prespawnAI;
	b3PrespawnAI = ['b3Center', 10] call InsP_fnc_prespawnAI;
	b4PrespawnAI = ['b4Center', 15] call InsP_fnc_prespawnAI;
	kaminoPrespawnCiv = ['kaminoCenter', 100] call InsP_fnc_prespawnCivs;
	kaminoPrespawnCiv2 = ['kaminoCenter', 100] call InsP_fnc_prespawnCivs;
	kaminoPrespawnCiv3 = ['kaminoCenter', 100] call InsP_fnc_prespawnCivs;
	b3PrespawnCivs1 = ['b3Center', 30] call InsP_fnc_prespawnCivs;
	b3PrespawnCivs2 = ['b3Center', 30] call InsP_fnc_prespawnCivs;
	"
	, "deleteVehicle kaminoPrespawnTrig;"];
_trigName = "kaminoPrespawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;

//Kamino Area Spawn Trigger
_trigPos = [3634.23, 2928.29, 12.89855];
_trigArea = [1000, 1000, 12.628, false];
_trigAct = ["WEST", "PRESENT", true];
_trigState = ["this",
	"
	if(isNil 'kaminoSpawnAI') then {kaminoSpawnAI = [['kaminoSpawn1', 'kaminoSpawn2'], ['kaminoAttack1', 'kaminoAttack2', 'kaminoAttack3'], kaminoSpawnTrig] spawn InsP_fnc_spawnAI;};
	"
	, ""];
_trigName = "kaminoSpawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;

//B3 Area Spawn Trigger
_trigPos = [6563.12, 5074.19, 50.1755];
_trigArea = [50, 50, 0, false];
_trigAct = ["WEST", "PRESENT", true];
_trigState = ["this",
	"
	b3SpawnAI = [['b3Spawn1', 'b3Spawn2'], ['b3Attack1', 'b3Attack2'], 6, 75, b3SpawnTrig] spawn InsP_fnc_smallSpawnAI;
	"
	, "terminate b3SpawnAI;"];
_trigName = "b3SpawnTrig";

[_trigPos, "AREA:", _trigArea, "ACT:", _trigAct, "STATE:", _trigState, "NAME:", _trigName] call CBA_fnc_createTrigger;