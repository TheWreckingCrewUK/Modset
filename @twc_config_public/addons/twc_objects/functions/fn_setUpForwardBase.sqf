/*
* Author: [TWC] jayman
* Checks if ready then sets up the forward base.
*
* Arguments:
* 0: radio Table <Object>
*
* Return Value:
* <STRING>
*
* Example:
* _return = [radioTable] call twc_fnc_setUpForwardBase;
*
* Public: No
*/
params["_table"];
_return = "";
systemChat "line 19";
if(isNil "_table")exitWith{_return = "Radio Table not given to twc_fn_setUpForwardBase. Exiting..."; _return};

_pos = getPos _table;
if(_pos distance2D (getMarkerPos "respawn_West") < 1000) exitWith{_distance = _pos distance2D (getMarkerPos "respawn_West");_return = format["You cannot set up the forward base withing 1KM of the Main Base. You are only %1 Away",_distance]; _return};
systemChat "line 24";
_distanceGenerator = _pos distance2D (getPos PB_Generator);
_distanceMedicalTruck = _pos distance2D (getPos PB_MedicalTruck);
if(_distanceGenerator > 200 || _distanceMedicalTruck > 200)exitWith{_return = format["Both the Generator and Medical Truck must be withing 200M of the Radio Table.\n Generator is %1 away\n Medical truck is %2 away",_distanceGenerator,_distanceMedicalTruck]; _return};
systemChat "line 28";
_marker = createMarker ["respawn_forwardBase",_pos];
_marker setMarkerShape "ICON";
_marker setMarkerType "b_installation";
[missionNamespace,_marker,"Forward Base"] call BIS_fnc_addRespawnPosition;
systemChat "line 33";
_radio = "Vysilacka" createVehicle (position _table);
_radio attachTo [_table,[0,0,1.5]];
_radio setDir ((getDir _table)+270);
_table setVariable ["twc_forwardBaseDeployed",true];
_table setVariable ["ace_dragging_canDrag",0];
_table setVariable ["ace_cargo_canLoad",0];
systemChat "line 40";
_return = "Forward Base Created Successfully";
systemChat "line 42";
_return