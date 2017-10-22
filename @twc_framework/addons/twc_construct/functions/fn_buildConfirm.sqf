params["_unit"];

[_unit, "forceWalk", "ACE_Sandbag", false] call ace_common_fnc_statusEffect_set;

//Deletes the cost in sandbags
for"_i" from 1 to twc_construct_cost do{
	_unit removeItem "ACE_Sandbag_empty";
};

//Makes the object 1 second later. Becaues IDK ace does
[{
if (isNull ace_sandbag_sandBag) exitWith {};

params ["_unit","_type"];

private _position = getPosASL ace_sandbag_sandBag;
private _direction = getDir ace_sandbag_sandBag;

deleteVehicle ace_sandbag_sandBag;

private _veh = createVehicle [_type, [0, 0, 0], [], 0, "NONE"];
_veh setPosASL _position;
_veh setDir _direction;

ace_sandbag_sandBag = objNull;
}, [_unit,twc_construct_type], 1] call CBA_fnc_waitAndExecute;


[ace_sandbag_deployPFH] call CBA_fnc_removePerFrameHandler;
ace_sandbag_deployPFH = -1;


call ace_interaction_fnc_hideMouseHint;

[_unit, "DefaultAction", _unit getVariable ["ace_sandbag_Deploy", -1]] call ace_common_fnc_removeActionEventHandler;


[_unit, "PutDown"] call ace_common_fnc_doGesture;

//Resets Variables
twc_construct_type = nil;
twc_construct_cost = nil;
_unit setVariable ["ace_sandbag_isDeploying", false, true];