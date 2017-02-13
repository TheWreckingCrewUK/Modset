_variable  = missionNameSpace getVariable "playerBase_Marksman";
if(_variable)exitWith{hint "Player Base already has a marksman."};

_chair = "Land_CampingChair_V2_F" createVehicle [5390.163,17885.855,15.258];
_chair setPos [5390.163,17885.855,15.258];

_group = createGroup West;
_unit = _group createUnit ["B_G_SharpShooter_F",[5390.203,17885.213,15.247]];
_unit setPos [5390.203,17885.213,15.247];

[_unit,"SIT1", "ASIS"] call BIS_fnc_ambientAnim;

missionNameSpace setVariable ["playerBase_Marksman", true];