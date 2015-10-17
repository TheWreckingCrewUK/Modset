
//Kamino Area Markers
_b1Center = createMarkerLocal ["b1Center", [6061.43, 5632.57, 17.7221]];
_b4Center = createMarkerLocal ["b4Center", [6584.2, 5328.43, 24.1741]];

//B3 Area Marker
_b3Center = createMarkerLocal ["b3Center", [6561.57, 5054.23, 48.512]];

//Kamino Area Spawn/Attack Markers
_kaminoSpawn1 = createMarkerLocal ["kaminoSpawn1", [6018.42, 5422.05, 20.1118]];
_kaminoSpawn2 = createMarkerLocal ["kaminoSpawn2", [6262.6, 5268.32, 10.5791]];

_kaminoAttack1 = createMarkerLocal ["kaminoAttack1", [6062.53, 5609.15, 18.4797]];
_kaminoAttack2 = createMarkerLocal ["kaminoAttack2", [6429.09, 5386.95, 8]];
_kaminoAttack3 = createMarkerLocal ["kaminoAttack3", [6581.44, 5322.73, 24.1152]];

//B3 Area Spawn/Attack Markers
_b3Spawn1 = createMarkerLocal ["b3Spawn1", [6427.06, 5093.92, 49.3786]];
_b3Spawn2 = createMarkerLocal ["b3Spawn2", [6480.2, 4977.1, 15.5593]];

_b3Attack1 = createMarkerLocal ["b3Attack1", [6593.28, 5094.76, 60.1941]];
_b3Attack2 = createMarkerLocal ["b3Attack2", [6554.35, 5048.29, 47.686]];

//Kamino Area Prespawn Trigger
_trigPos = getMarkerPos "kaminoCenter";
_trigArea = [800, 800, 0, false];
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
_trigPos = [6311.23, 5459.29, 4.89855];
_trigArea = [200, 500, 119.628, false];
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