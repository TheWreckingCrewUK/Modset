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


missionNameSpace setVariable ["playerBase_UnitsArray",_unitsArray];
_trg = createTrigger ["EmptyDetector", (getMarkerPos "playerBase")];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this && !(player in thisList)", format["[] spawn twc_fnc_playerBaseClear",_unitsArray], ""];