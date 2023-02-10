params ["_caller", ["_target", objNull]];

_pos = _caller modelToWorld [0, 1.5, 0.25];
_memPoint = "";
_vector = [0, 0, 0];

if !(isNull _target) then {
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
	_args params ["_unit", "_target", "_pos", "_memPoint", "_vector", "_callerMarkers"];
	
	if (isNull _target && !((animationState player select [4, 4]) isEqualTo "pknl")) exitWith {};
	[_idPFH] call CBA_fnc_removePerFrameHandler;
	
	_mapObject = twc_map_mapObject createVehicle [0, 0, 0];
	player playAction "PutDown";

	_args pushBack _mapObject;
	
	[{(animationState player select [25, 7]) isEqualTo "putdown"}, {
		params ["_caller", "_target", "_pos", "_memPoint", "_vector", "_callerMarkers", "_mapObject"];

		if (isNull _target) then {
			// cut the grass too!
			_cutter = "Land_ClutterCutter_Small_F" createVehicle [0,0,0];
			_cutter setPos _pos;
			_mapObject setPos _pos;
			_mapObject setDir (getDir _caller) + 90;
		} else {
			_mapObject attachTo [_target, _pos, _memPoint];
			_mapObject setVectorDirAndUp _vector;
		};

		_mapObject setVariable ["twc_map_owner", getPlayerUID _caller, true];
		_mapObject setVariable ["twc_mapMarkerOwner", _caller, true];

		{
			private "_string";
			_string = toArray _x;
			_string resize 15;
			
			// check if it's a players marker, if so then deal with it
			if (toString _string == "_USER_DEFINED #") then {
				_callerMarkers pushBack ([_x] call twc_map_fnc_markerToArray);
			};
		} forEach allMapMarkers;

		_mapObject setVariable ["twc_map_tempMarkers", _callerMarkers, true];
		
		_caller unlinkItem "ItemMap";
	}, _args] call CBA_fnc_waitUntilAndExecute;
}, 0, [_caller, _target, _pos, _memPoint, _vector, _callerMarkers]] call CBA_fnc_addPerFramehandler;