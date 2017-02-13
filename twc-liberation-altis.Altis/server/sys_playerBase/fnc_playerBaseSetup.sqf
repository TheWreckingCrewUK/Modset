_unitsArray = [];
_group = createGroup West;

_var = missionNameSpace getVariable "playerBase_Marksman";
_unitsArray = if(_var)then{
	_chair = "Land_CampingChair_V2_F" createVehicle [5390.163,17885.855,15.258];
	_chair setPos [5390.163,17885.855,15.258];

	_unit = _group createUnit ["B_G_SharpShooter_F",[5390.203,17885.213,15.247],[],0,"NONE"];
	_unit setPos [5390.203,17885.213,15.247];

	[_unit,"SIT1", "ASIS"] call BIS_fnc_ambientAnim;

	_unitsArray pushback _chair;
	_unitsArray pushback _unit;
	_unitsArray
};

_var = missionNameSpace getVariable "playerBase_Roadblock";
_unitsArray = if(_var)then{
	_group = createGroup West;
	_unit1 = _group createUnit ["B_G_Soldier_lite_F",[5435.755,17918.730,0],[],0,"NONE"];
	_unit1 setDir 87.361;
	_unit1 setPos [5435.755,17918.730,0];
	_unit1 disableAI "PATH";

	_unit2 = _group createUnit ["B_G_Soldier_lite_F",[5436.353,17932.488,0],[],0,"NONE"];
	_unit2 setDir 87.361;
	_unit2 setPos [5436.353,17932.488,0];
	_unit2 disableAI "PATH";

	_bunker1 = "Land_BagBunker_small_F" createVehicle [5436.019,17918.557,0];
	_bunker1 setDir 270.021;
	_bunker1 setPos [5436.019,17918.557,0];

	_bunker2 = "Land_BagBunker_small_F" createVehicle [5436.507,17932.521,0];
	_bunker2 setDir 270.021;
	_bunker2 setPos [5436.507,17932.521,0];

	_bargate = "Land_BarGate_F" createVehicle [5437.226,17921.469,0];
	_bargate setDir 94.858;
	_bargate setPos [5437.226,17921.469,0];
	_bargate animate ["Door_1_rot", 1];

	_unitsArray pushback _unit1;
	_unitsArray pushback _unit2;
	_unitsArray pushback _bunker1;
	_unitsArray pushback _bunker2;
	_unitsArray pushback _bargate;
	_unitsArray
};

missionNameSpace setVariable ["playerBase_UnitsArray",_unitsArray];
_trg = createTrigger ["EmptyDetector", (getMarkerPos "playerBase")];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this && !(player in thisList)", format["[] spawn twc_fnc_playerBaseClear",_unitsArray], ""];