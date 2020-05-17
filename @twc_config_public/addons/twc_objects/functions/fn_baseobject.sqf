
params["_object"];

waituntil {!isnull _object};
//deletevehicle (gunner _object);
//deletevehicle (_object);


createVehicleCrew _object;
_object setunittrait ['camouflageCoef', 500];
_object setvehiclelock "locked";
_object allowdamage false;
_object setvehicleammo 0;

_varname = (str getpos _object) + "baseobj";

missionnamespace setvariable [_varname, _object];

_trg2 = createTrigger ['EmptyDetector', getpos _object];
_trg2 setTriggerArea [150, 150, 30, false]; 
_trg2 setTriggerActivation ['EAST', 'PRESENT', true];
_trg2 setTriggerTimeout [0,0,0,True];
_trg2 setTriggerStatements ["this || (missionNamespace getvariable ['twc_overridebaseobjs', 0] == 1)","_varname = (str getpos thistrigger) + 'baseobj';_object = nearestObject [thistrigger, 'CBA_B_InvisibleTarget'];deletevehicle (gunner _object)", "_varname = (str getpos thistrigger) + 'baseobj';_object = nearestObject [thistrigger, 'CBA_B_InvisibleTarget'];createVehicleCrew _object; [_object, 520] call twc_fnc_setcamocoef"];
//_trg2 setTriggerStatements ["this || (missionNamespace getvariable ['twc_overridebaseobjs_SALT', 0] == 1)","_varname = (str getpos thistrigger) + 'baseobj';_object = nearestObject [thistrigger, 'CBA_B_InvisibleTarget'];deletevehicle (gunner _object);deletevehicle (_object)", ""];
