params ["_caller", ["_target", objNull]];

if (isNull _target) then {
	_dir = getDir _caller;
	_pos = _caller modelToWorld [0, 1, 0.05];
	_memPoint = "";
	_vector = 0;
} else {
	_dir = 0;
	_pos = [(configFile >> "CfgVehicles" >> (typeOf _target) >> "TWC_Map" >> "pos")] call BIS_fnc_GetCfgData;
	_memPoint = [(configFile >> "CfgVehicles" >> (typeOf _target) >> "TWC_Map" >> "memPoint")] call BIS_fnc_GetCfgData;
	_vector = [(configFile >> "CfgVehicles" >> (typeOf _target) >> "TWC_Map" >> "vector")] call BIS_fnc_GetCfgData;
};

if (stance _caller != "CROUCH" && isNull _target) then {
	_caller playAction "Crouch";
};

_callerMarkers = [];

[{
	params ["_args", "_idPFH"];
	_args params ["_unit", "_vehicle", "_pos", "_memPoint", "_vector", "_callerMarkers"];
	
	if (isNull _vehicle and !((animationState _caller select [4, 4]) isEqualTo "pknl")) exitWith {};
	[_idPFH] call CBA_fnc_removePerFrameHandler;
	
	_mapObject = twc_map_mapObject createVehicle [0, 0, 0];
	_caller playAction "PutDown";

	_args pushBack _mapObject;
	
	[{(animationState _caller select [25, 7]) isEqualTo "putdown"}, {
		params ["_caller", "_target", "_pos", "_memPoint", "_vector", "_callerMarkers", "_mapObject"];

		if (isNull _target) then {
			_mapObject setPos _pos;
		} else {
			_mapObject attachTo [_target, _pos, _memPoint];
			_mapObject setVectorDirAndUp _vector;
		};

		_mapObject ["twc_map_owner", getPlayerUID _caller, true];

		{
			_callerMarkers pushBack ([_x] call twc_map_markerToArray);
		} forEach allMapMarkers;

		_mapObject ["twc_map_tempMarkers", _callerMarkers, true];
		_caller unlinkItem "ItemMap";
	}, _args] call CBA_fnc_waitUntilAndExecute;
}, 0, [_caller, _target, _pos, _memPoint, _vector, _callerMarkers]] call CBA_fnc_addPerFramehandler;