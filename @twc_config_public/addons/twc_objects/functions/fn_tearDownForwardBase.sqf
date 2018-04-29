/*
* Author: [TWC] jayman
* Tears down Forward Base
*
* Arguments:
* 0: radio Table <Object>
*
* Return Value:
* <STRING>
*
* Example:
* _return = [radioTable] call twc_fnc_tearDownForwardBase;
*
* Public: No
*/

params["_table",["_player",leader (allUnits select 0)]];
_return = "";


if(isNil "twc_siege_baseside") then{
if(leader _player != _player)exitWith{_return = "Only Section Leaders can Deactivate the Forward Base"; _return};
if(isNil "_table")exitWith{_return = "Radio Table not given to twc_fn_tearDownForwardBase. Exiting..."; _return};

[missionNamespace,"respawn_forwardBase"] call BIS_fnc_removeRespawnPosition;
deleteMarker "respawn_forwardBase";
{
	deleteVehicle _x;
}forEach attachedObjects _table;


_generator = _pos nearObjects ["twc_portableGenerator",200];


[_table, 2] call ace_cargo_fnc_setSize;
_table setVariable ["twc_forwardBaseDeployed",false];
[_table, true] call ace_dragging_fnc_setDraggable;
[_generator select 0,false] call ace_dragging_fnc_setDraggable;

_return = "Forward Base Torn Down Successfully";
_return;}

else

{
if(!(isNil "_player")) then{
if(leader _player != _player)exitWith{_return = "Only Section Leaders can Deactivate the Forward Base"; _return}};
if(isNil "_table")exitWith{_return = "Radio Table not given to twc_fn_tearDownForwardBase. Exiting..."; _return};

[missionNamespace,"respawn_forwardBase"] call BIS_fnc_removeRespawnPosition;
deleteMarker "respawn_forwardBase";
{
	deleteVehicle _x;
}forEach attachedObjects _table;


_generator = _pos nearObjects ["twc_portableGenerator",200];


_table setVariable ["twc_forwardBaseDeployed",false];
[_table, true] call ace_dragging_fnc_setDraggable;
[_generator select 0,false] call ace_dragging_fnc_setDraggable;

_return = "Forward Base Torn Down Successfully";
_return;
}