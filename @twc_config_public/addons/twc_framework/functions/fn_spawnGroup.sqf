/*
* Author: [TWC] jayman
* Makes sure spawnGroup only happens on server
*
* Arguments:
* 0: Position <MARKER>
* 1: Side <SIDE> 
* 2: Units <ARRAY>
*
* Return Value:
* NOTHING
*
* Example:
* _group = ["SpawnMarker",east,["TK_INS_Soldier_2_EP1",TK_INS_Soldier_2_EP1",TK_INS_Soldier_2_EP1]] call twc_fnc_spawnGroup
*
* Public: no
*/
params["_marker","_side","_unitArray"];

if(!isServer)exitWith{};

_group = [getMarkerPos _marker,_side,_unitArray,[],[],[],[],[],0] call BIS_fnc_spawnGroup;
_group