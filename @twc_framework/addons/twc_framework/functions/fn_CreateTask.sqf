/*
* Author: [TWC] jayman
* Creates a task that will be JIP able
*
* Arguments:
* 0: TaskName <STRING>
* 1: Description <STRING>
* 2: Title <STRING>
*
* Optional Parameters
* 3: Position <STRING> or <Array>
*
* Return Value:
* NOTHING
*
* Example:
* ["Task1","Hostile are storing ammo at the ammo dump","Destroy Ammo Dump",[0,0,0]] call twc_fnc_createTask
*
* Public: no
*/

Params ["_taskname","_description","_title",["_pos",objNull]];

[player,[_taskname],[_description,_title],_pos,0,2,false] remoteExecCall ["BIS_fnc_taskCreate", [0,-2] select isDedicated, true];