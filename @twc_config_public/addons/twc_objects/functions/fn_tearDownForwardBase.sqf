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

params["_table"];
_return = "";

if(isNil "_table")exitWith{_return = "Radio Table not given to twc_fn_tearDownForwardBase. Exiting..."; _return};

[missionNamespace,"respawn_forwardBase"] call BIS_fnc_removeRespawnPosition;
deleteMarker "respawn_forwardBase";
{
	deleteVehicle _x;
}forEach attachedObjects _table;

_truck = (getPos _table) nearObjects ["twc_medical_hemtt",250];
(_truck select 0) setFuel 1;

_table setVariable ["twc_forwardBaseDeployed",false];
_table setVariable ["ace_dragging_canDrag",1];
_table setVariable ["ace_cargo_canLoad",1];

_return = "Forward Base Torn Down Successfully";
_return;