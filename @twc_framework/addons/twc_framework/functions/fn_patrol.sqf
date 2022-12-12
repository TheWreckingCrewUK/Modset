/*
* Author: [TWC] jayman
* Sets up TWC Defaults for patrol and makes it work for headless and vcom
*
* Arguments:
* 0: Unit <OBJECT>
* 1: POSITION <MARKER>
*
* Optional Parameters:
* 2: Radius <NUMBER>
* 3: Speed <STRING>
* 4: Formatin <STRING>
* 5: Behavior <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [unit1,"patrolMarker1",100,4,"LIMITED","COLUMN","AWARE"] call twc_fnc_patrol;
*
* Public: no
*/

params ["_unit",["_pos",[]],["_radius",100],["_count",4],["_speed","LIMITED"],["_formation","COLUMN"],["_behaviour","SAFE"]];

if((typeName _pos) isEqualTo "STRING")then{
	_pos = getMarkerPos _pos;
};

_groupOwner = (groupOwner (group _unit));
[_unit, _pos, _radius, _count, "MOVE", _behaviour, "YELLOW", _speed, _formation] remoteExecCall ["CBA_fnc_taskPatrol", _groupOwner];
