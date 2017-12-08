//Clearing Script

//Section Gear Crate removal
	_box = (getPos ammoCrateSpawnPad) nearestObject 'ACE_Box_Ammo';

	_trg = createTrigger ["EmptyDetector", getPos ammoCrateSpawnPad];
	_trg setTriggerArea [50,50,0,false];
	_trg setTriggerActivation ["WEST", "PRESENT", true];
	_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'ACE_Box_Ammo'; deleteVehicle _box;",""];
	_trg attachTo [_box];
	
//Large Gear Crate removal
	_box = (getPos ammoCrateSpawnPad) nearestObject 'B_supplyCrate_F';

	_trg = createTrigger ["EmptyDetector", getPos ammoCrateSpawnPad];
	_trg setTriggerArea [50,50,0,false];
	_trg setTriggerActivation ["WEST", "PRESENT", true];
	_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'B_supplyCrate_F'; deleteVehicle _box;",""];
	_trg attachTo [_box];

//M6 Light Mortar crate removal	
	_box = (getPos ammoCrateSpawnPad) nearestObject 'UK3CB_BAF_Box_M6';

	_trg = createTrigger ["EmptyDetector", getPos ammoCrateSpawnPad];
	_trg setTriggerArea [50,50,0,false];
	_trg setTriggerActivation ["WEST", "PRESENT", true];
	_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'UK3CB_BAF_Box_M6'; deleteVehicle _box;",""];
	_trg attachTo [_box];

//L7A2 Crate removal
	_box = (getPos ammoCrateSpawnPad) nearestObject 'UK3CB_BAF_Box_L7A2';

	_trg = createTrigger ["EmptyDetector", getPos ammoCrateSpawnPad];
	_trg setTriggerArea [50,50,0,false];
	_trg setTriggerActivation ["WEST", "PRESENT", true];
	_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'UK3CB_BAF_Box_L7A2'; deleteVehicle _box;",""];
	_trg attachTo [_box];
	
//L111A1 Crate removal
	_box = (getPos ammoCrateSpawnPad) nearestObject 'UK3CB_BAF_Box_L111A1';

	_trg = createTrigger ["EmptyDetector", getPos ammoCrateSpawnPad];
	_trg setTriggerArea [50,50,0,false];
	_trg setTriggerActivation ["WEST", "PRESENT", true];
	_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'UK3CB_BAF_Box_L111A1'; deleteVehicle _box;",""];
	_trg attachTo [_box];

//L134A1 Crate Removal
	_box = (getPos ammoCrateSpawnPad) nearestObject 'UK3CB_BAF_Box_L134A1';

	_trg = createTrigger ["EmptyDetector", getPos ammoCrateSpawnPad];
	_trg setTriggerArea [50,50,0,false];
	_trg setTriggerActivation ["WEST", "PRESENT", true];
	_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'UK3CB_BAF_Box_L134A1'; deleteVehicle _box;",""];
	_trg attachTo [_box];

//L16 80mm Mortar Crate removal
	_box = (getPos ammoCrateSpawnPad) nearestObject 'UK3CB_BAF_Box_L16';

	_trg = createTrigger ["EmptyDetector", getPos ammoCrateSpawnPad];
	_trg setTriggerArea [50,50,0,false];
	_trg setTriggerActivation ["WEST", "PRESENT", true];
	_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'UK3CB_BAF_Box_L16'; deleteVehicle _box;",""];
	_trg attachTo [_box];
//Medical Crate removal
	_box = (getPos ammoCrateSpawnPad) nearestObject 'ACE_medicalSupplyCrate_advanced';

	_trg = createTrigger ["EmptyDetector", getPos ammoCrateSpawnPad];
	_trg setTriggerArea [50,50,0,false];
	_trg setTriggerActivation ["WEST", "PRESENT", true];
	_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'ACE_medicalSupplyCrate_advanced'; deleteVehicle _box;",""];
	_trg attachTo [_box];

	
	
//Tried using code once with the following _X forEach array function but needs more brains than I posses to get that working.
//{
//}forEach ['ACE_Box_Ammo', 'UK3CB_BAF_Box_M6', 'UK3CB_BAF_Box_L7A2', 'UK3CB_BAF_Box_L111A1', 'UK3CB_BAF_Box_L134A1', 'UK3CB_BAF_Box_L16'];