/*
* TWC intel hint Function
*
* Gets added to a units init. The action can be seen by all units including JIPs, but the effect is local

* Required Parameters:
* 0- (object)- Unit to add action to
* 1 - (string) Name of the action
* 2 - (String) - Hint to be displayed:
*/
if(!isServer)exitWith{};

params["_unit","_name","_string"];

_unit setVariable ["intelHint",_string,true];

[_unit, [_name,{hint ((_this select 0) getVariable "intelHint")},nil,6,true,false,"","true",7,false]] remoteExecCall ["addAction",[0,-2] select isDedicated,true];
