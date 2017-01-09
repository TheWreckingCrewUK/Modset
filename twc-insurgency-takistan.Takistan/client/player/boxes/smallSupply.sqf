_boxClass = "ACE_medicalSuppplyCrate";

_box = _boxClass createVehicle (getPos supplySpawnPad);

clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearitemCargoGlobal _box;

//Respawn/Despawn Script

_trg = createTrigger ["EmptyDetector", getPos supplySpawnPad];
_trg setTriggerArea [5,5,0,false];
_trg setTriggerActivation ["WEST", "NOT PRESENT", false];
_trg setTriggerTimeout [1800,1800,1800,true];
_trg setTriggerStatements ["this", "_box = (getPos thisTrigger) nearestObject 'ACE_medicalSuppplyCrate'; deleteVehicle _box;",""];
_trg attachTo [_box];