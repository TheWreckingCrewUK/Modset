_variable = missionNameSpace getVariable "playerBase_Roadblock";
if(_variable)exitWith{hint "Player Base already has a roadBlock."};

_group = createGroup West;
_unit1 = _group createUnit ["B_G_Soldier_lite_F",[5435.755,17918.730,0]];
_unit1 setDir 87.361;
_unit1 setPos [5435.755,17918.730,0];
_unit1 disableAI "PATH";

_unit2 = _group createUnit ["B_G_Soldier_lite_F",[5436.353,17932.488,0]];
_unit2 setDir 87.361;
_unit2 setPos [5436.353,17932.488,0];
_unit2 disableAI "PATH";

_bunker1 = "Land_BagBunker_small_F" createVehicle [5436.019,17918.557,0];
_bunker1 setDir 270.021;
_bunker1 setPos [5436.019,17918.557,0];

_bunker2 = "Land_BagBunker_small_F" createVehicle [5436.507,17932.521,0];
_bunker2 setDir 270.021;
_bunker2 setPos [5436.507,17932.521,0];

_bargate = "Land_BarGate_F" createVehicle [5437.226,17925.799,0];
_bargate setDir 94.858;
_bargate setPos [5437.226,17925.799,0];

missionNameSpace setVariable ["playerBase_Roadblock", true];