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

if(isNil "twc_siege_baseside") then{
//standard insurgency version
if(leader _player != _player)exitWith{_return = "Only Section Leaders can activate the Forward Base"; _return};
if(isNil "_table")exitWith{_return = "Radio Table not given to twc_fn_setUpForwardBase. Exiting..."; _return};

_pos = getPos _table;
if(_pos distance2D (getMarkerPos "base") < 1000) exitWith{_distance = _pos distance2D (getMarkerPos "base");_return = format["You cannot set up the forward base within 1KM of the Main Base. You are only %1 Away",_distance]; _return};
_distanceGenerator = _pos nearObjects ["twc_portableGenerator",200];

if(str _distanceGenerator == "[]")exitWith{_return = format["The Generator must be within 200m of the Radio Table.\n The Generator is %1m away",_pos distance2D ((_pos nearObjects ["twc_portableGenerator",worldSize]) select 0)]; _return};


_marker = createMarker ["respawn_west_forwardBase",_pos];
_marker setMarkerShape "ICON";
_marker setMarkerType "b_installation";
_marker setMarkerText "Patrol Base";
//[missionNamespace,_marker,"Patrol Base"] call BIS_fnc_addRespawnPosition;
_radio = "Vysilacka" createVehicle (position _table);
_radio attachTo [_table,[0,0,1.5]];
_radio setDir ((getDir _table)+270);
_locstat = "TWC_Item_Public_Base_LOCSTAT" createVehicle (position _table);
_locstat attachTo [_table,[0,0,0.7]];
_locstat setDir ((getDir _table)+210);
[_table, false] call ace_dragging_fnc_setDraggable;
[_distanceGenerator select 0,false] call ace_dragging_fnc_setDraggable;
[_table, -1] call ace_cargo_fnc_setSize;
_table setVariable ["twc_forwardBaseDeployed",true];
_return = "Patrol Base Created Successfully";
_return;


_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [200 , 200, 50, false];
_trg setTriggerActivation ["east", "PRESENT", true];
_trg setTriggerTimeout [60,60,60, true];
_trg setTriggerStatements ["count thislist > 3","_table = nearestobject [getpos thistrigger,'twc_radioTable']; [_table] call twc_fnc_tearDownForwardBase; deletevehicle thistrigger;'PATROL BASE IN CONTACT, RESPAWN DISABLED' remoteExec ['hint'];",""];

}
else
{
//more lenient version for siege, with shorter distance and no medical truck
if(leader _player != _player)exitWith{_return = "Only Section Leaders can activate the Forward Base"; _return};
if(isNil "_table")exitWith{_return = "Radio Table not given to twc_fn_setUpForwardBase. Exiting..."; _return};

_pos = getPos _table;

if (twc_siege_baseside == 0) then { _base = getMarkerPos "base"} else { _base = getMarkerPos "dummybase"};

if((_pos distance2D _base) < 500) exitWith{_distance = _pos distance2D (getMarkerPos "base");_return = format["You cannot set up the forward base within 0.5KM of the Main Base. You are only %1 Away",_distance]; _return};
_distanceGenerator = _pos nearObjects ["twc_portableGenerator",200];
if(str _distanceGenerator == "[]")exitWith{_return = format["The Generator must be within 200m of the Radio Table.\n Generator is %1m away",_pos distance2D ((_pos nearObjects ["twc_portableGenerator",worldSize]) select 0)]; _return};


_marker = createMarker ["respawn_west_forwardBase",_pos];
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
_return;

_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [100 , 100, 0, false];
_trg setTriggerActivation ["east", "PRESENT", true];
_trg setTriggerTimeout [30,30,30, true];
_trg setTriggerStatements ["this","_table = nearestobject [getpos thistrigger,'twc_radioTable']; [_table] call twc_fnc_tearDownForwardBase; deletevehicle thistrigger",""];
}