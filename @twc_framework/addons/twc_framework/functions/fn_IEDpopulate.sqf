/*
 * Author: MikeMatrix
 * Populate Map with IEDs on roads.
 *
 * Arguments:
 * 0: Amount of IEDs <NUMBER>
 * 1: Excluded Marker Areas <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [50,"iedmarker",300] call TWC_fnc_IEDpopulate
 */
params ["_amount","_marker","_radius",["_RoadBoolean",true],["_exclusionMarkers", [], [[]]]];
if (_RoadBoolean) then {

	// IED types to be populated.
	_iedTypes = ["IEDLandBig_F", "IEDLandSmall_F"];

	// All roads on the map
	_allRoads = getmarkerpos _marker nearRoads _radius;

	// Filter function for limiting roads to exclude any roads in marker areas of _exlcusionMarkers
	_fnc_filterRoadPositions = {
		if (_exclusionMarkers isEqualTo []) exitWith {_x};
		_value = _x;
		_position = getPos _x;
		{
			// Oriented Bounding Box check
			_x setMarkerAlpha 0;
			_min = getMarkerPos _x vectorAdd ((getMarkerSize _x + [0]) vectorMultiply -1);
			_max = getMarkerPos _x vectorAdd (getMarkerSize _x + [0]);
			_relativePosition = [getMarkerPos _x, _position, markerDir _x] call CBA_fnc_vectRotate2D;
			_relativePosition params ["_posX", "_posY"];
			_min params ["_minX", "_minY"];
			_max params ["_maxX", "_maxY"];

			// Make value nil if inbounds
			if (_posX >= _minX && _posX <= _maxX && _posY >= _minY && _posY <= _maxY) exitWith {nil};
			_value
		} forEach _exclusionMarkers
	};

	// Filter roads and trim nils
	_allRoads = [_allRoads, _fnc_filterRoadPositions] call CBA_fnc_filter;
	_allRoads = _allRoads arrayIntersect _allRoads;

	if (count _allRoads <= 0) exitWith {};

	// Spawn IEDs
	for "_i" from 0 to _amount step 1 do {
		_road = _allRoads call BIS_fnc_selectRandom;
		_iedType = _iedTypes call BIS_fnc_selectRandom;
		[_iedType, getPos _road, 5] call TWC_fnc_SpawnIED;
		if (random 100 >70) then{
			_Secondary = [getPos _road,5, 25, 0, 0, 45, 0] call BIS_fnc_findSafePos;
			[_iedType,_Secondary, 5] call TWC_fnc_SpawnIED;
		};
		_allRoads = _allRoads - [_road];
		if (count _allRoads <= 0) exitWith {};
	};
}else{
	
	_iedTypes = ["IEDLandBig_F", "IEDLandSmall_F"];
	_CenterMarkerpos = getmarkerpos _marker;
	
	for "_i" from 0 to _amount step 1 do {
		_positionOffRoad = [getmarkerpos _marker, 0, _radius, 0, 0, 45, 0] call BIS_fnc_findSafePos;
		_iedType = _iedTypes call BIS_fnc_selectRandom;
		[_iedType,_positionOffRoad, 5] call TWC_fnc_SpawnIED;
		if (random 100 >70) then{
			_Secondary = [_positionOffRoad,5, 25, 0, 0, 45, 0] call BIS_fnc_findSafePos;
			[_iedType,_Secondary, 5] call TWC_fnc_SpawnIED;
		};
	};
};