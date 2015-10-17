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
 * [50] call TWC_fnc_populateIeds
 */
params ["_amount", ["_exclusionMarkers", [], [[]]]];

// IED types to be populated.
local _iedTypes = ["IEDLandBig_F", "IEDLandSmall_F"];

// All roads on the map
local _allRoads = [worldSize / 2, worldSize / 2] nearRoads (worldSize / 2);

// Filter function for limiting roads to exclude any roads in marker areas of _exlcusionMarkers
local _fnc_filterRoadPositions = {
    if (_exclusionMarkers isEqualTo []) exitWith {_x};
    local _value = _x;
    local _position = getPos _x;
    {
        // Oriented Bounding Box check
        local _min = getMarkerPos _x vectorAdd ((getMarkerSize _x + [0]) vectorMultiply -1);
        local _max = getMarkerPos _x vectorAdd (getMarkerSize _x + [0]);
        local _relativePosition = [getMarkerPos _x, _position, markerDir _x] call CBA_fnc_vectRotate2D;
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
    local _road = _allRoads call BIS_fnc_selectRandom;
    local _iedType = _iedTypes call BIS_fnc_selectRandom;
    [_iedType, getPos _road, 5] call TWC_fnc_spawnIed;
    _allRoads = _allRoads - [_road];
    if (count _allRoads <= 0) exitWith {};
};
