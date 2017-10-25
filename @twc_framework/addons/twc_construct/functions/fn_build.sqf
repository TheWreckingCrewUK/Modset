params["_unit","_type","_cost"];

twc_construct_type = _type;
twc_construct_cost = _cost;

[_unit,"forceWalk", "ACE_Sandbag",true] call ace_common_fnc_statusEffect_set;

_veh = createVehicle [twc_construct_type,[0,0,0],[],0,"NONE"];

ace_sandbag_sandbag = _veh;

_veh disableCollisionWith _unit;

ace_sandbag_deployPFH =[{
	(_this select 0) params ["_unit","_veh"];
	
	if(isNull _veh)exitWith{
		[_unit] call ace_sandbag_fnc_deployCancel;
	};
	
	_veh setPosASL (eyePos _unit vectorAdd (positionCameraToWorld [0, -1, 2] vectorDiff positionCameraToWorld [0, 0, 0]));
    _veh setDir (0 + getDir _unit);
}, 0, [_unit, _veh]] call CBA_fnc_addPerFrameHandler;

[localize "STR_ace_sandbag_ConfirmDeployment", localize "STR_ace_sandbag_CancelDeployment", localize "STR_ace_sandbag_ScrollAction"] call ace_interaction_fnc_showMouseHint;

_unit setVariable ["ace_sandbag_Deploy", [
_unit, "DefaultAction",
{ace_sandbag_deployPFH != -1},
{[_this select 0] call twc_construct_fnc_buildConfirm}
] call ace_common_fnc_addActionEventHandler];

_unit setVariable ["ace_sandbag_isDeploying", true, true];