params ["_caller", "_mapObject"];

_attachedToObj = attachedTo _mapObject;

if (stance _caller != "Crouch" && isNull _attachedToObj) then {
	_caller playAction "Crouch";
};

[{
	params ["_args", "_idPFH"];
	_args params ["_mapObject", "_attachedToObj", "_caller"];

	if (isNull _attachedToObj and !((animationState _caller select [4, 4]) isEqualTo "pknl")) exitWith {};
	[_idPFH] call CBA_fnc_removePerFrameHandler;

	_caller playAction "PutDown";

	[{(animationState _caller select [25, 7]) isEqualTo "putdown"}, {
		params ["_mapObject", "_attachedToObj", "_caller"];

		_mapID = _mapObject getVariable ["twc_map_owner", 0];
		["twc_map_closed", [_mapID]] call CBA_fnc_globalEvent;

		deleteVehicle _mapObject;
		_caller linkItem "ItemMap";
	}, _args] call CBA_fnc_waitUntilAndExecute;
}, 0, [_mapObject, _attachedToObj, _caller]] call CBA_fnc_addPerFrameHandler;