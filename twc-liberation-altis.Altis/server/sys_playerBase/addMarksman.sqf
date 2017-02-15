_variable = missionNameSpace getVariable "playerBase_Marksman";
if(_variable)exitWith{hint "Player Base already has a marksman."};
_unitsArray = missionNameSpace getVariable "playerBase_UnitsArray";
if(isNil "_unitsArray")then{
	_unitsArray = [];
};
	_group = createGroup west;
	_chair = "Land_CampingChair_V2_F" createVehicle [5390.163,17885.855,15.258];
	_chair setPos [5390.163,17885.855,15.258];

	_unit = _group createUnit ["B_G_SharpShooter_F",[5390.203,17885.213,15.247],[],0,"NONE"];
	_unit setPos [5390.203,17885.213,15.247];

	[_unit,"SIT1", "ASIS"] call BIS_fnc_ambientAnim;

_unitsArray pushback _chair;
_unitsArray pushback _unit;

missionNameSpace setVariable ["playerBase_UnitsArray",_unitsArray];
missionNameSpace setVariable ["playerBase_Marksman", true,true];