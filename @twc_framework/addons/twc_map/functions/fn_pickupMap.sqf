params ["_mapObject", "_caller"];

_attachedToObj = attachedTo _mapObject;

if (stance player != "Crouch" && isNull _attachedToObj) then {
	player playAction "Crouch";
};

[{
	params ["_args", "_idPFH"];
	_args params ["_mapObject", "_attachedToObj", "_caller"];

	if (isNull _attachedToObj && !((animationState player select [4, 4]) isEqualTo "pknl")) exitWith {};
	[_idPFH] call CBA_fnc_removePerFrameHandler;

	player playAction "PutDown";

	[{(animationState player select [25, 7]) isEqualTo "putdown"}, {
		params ["_mapObject", "_attachedToObj", "_caller"];

		deleteVehicle _mapObject;
		_caller linkItem "ItemMap";
	}, _args] call CBA_fnc_waitUntilAndExecute;
}, 0, [_mapObject, _attachedToObj, _caller]] call CBA_fnc_addPerFrameHandler;