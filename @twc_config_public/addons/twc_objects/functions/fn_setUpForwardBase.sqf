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
params["_table",["_player",leader (allUnits select 0)]];
_return = "";
if(leader _player != _player)exitWith{_return = "Only Section Leaders can activate the Forward Base"; _return};
if(isNil "_table")exitWith{_return = "Radio Table not given to twc_fn_setUpForwardBase. Exiting..."; _return};

_pos = getPos _table;
if(_pos distance2D (getMarkerPos "base") < 1000) exitWith{_distance = _pos distance2D (getMarkerPos "base");_return = format["You cannot set up the forward base withing 1KM of the Main Base. You are only %1 Away",_distance]; _return};
_distanceGenerator = _pos nearObjects ["twc_portableGenerator",200];
_distanceMedicalTruck = _pos nearObjects ["twc_medical_hemtt",200];
if(str _distanceGenerator == "[]" || str _distanceMedicalTruck == "[]")exitWith{_return = format["Both the Generator and Medical Truck must be withing 200m of the Radio Table.\n Generator is %1m away\n Medical truck is %2m away",_pos distance2D ((_pos nearObjects ["twc_portableGenerator",worldSize]) select 0),_pos distance2D ((_pos nearObjects ["twc_medical_hemtt",worldSize]) select 0)]; _return};

(_distanceMedicalTruck select 0) setFuel 0;

_marker = createMarker ["respawn_forwardBase",_pos];
_marker setMarkerShape "ICON";
_marker setMarkerType "b_installation";
_marker setMarkerText "Patrol Base";
[missionNamespace,_marker,"Patrol Base"] call BIS_fnc_addRespawnPosition;
_radio = "Vysilacka" createVehicle (position _table);
_radio attachTo [_table,[0,0,1.5]];
_radio setDir ((getDir _table)+270);
[_table, false] call ace_dragging_fnc_setDraggable;
[_distanceGenerator select 0,false] call ace_dragging_fnc_setDraggable;
_table setVariable ["twc_forwardBaseDeployed",true];
_return = "Patrol Base Created Successfully";
_return