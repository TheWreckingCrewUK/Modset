
params["_object"];

waituntil {!isnull _object};
systemchat "base init";

_object setunittrait ['camouflageCoef', 500];
_object setvehiclelock "locked";
_object allowdamage false;
_object setvehicleammo 0;

_trg2 = createTrigger ['EmptyDetector', getpos _object];
_trg2 setTriggerArea [50, 50, 0, false]; 
_trg2 setTriggerActivation ['EAST', 'PRESENT', true];
_trg2 setTriggerTimeout [0,0,0,True];
_trg2 setTriggerStatements ['this',';deletevehicle (gunner this)', 'createVehicleCrew this; [this, 500] call twc_fnc_setcamocoef'];