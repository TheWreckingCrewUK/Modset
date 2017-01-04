Params ["_taskname","_description","_title",["_pos",objNull]];

if(isNil "_taskname" || typeName _taskname != "STRING")exitWith{hint "twc_fnc_createTask error"};
if(isNil "_description" || typeName _description != "STRING")exitWith{hint "twc_fnc_createTask error"};
if(isNil "_title" || typeName _title != "STRING")exitWith{hint "twc_fnc_createTask error"};

//[allunits,[_taskname],[_description,_title],_pos,0,2,false] call BIS_fnc_taskCreate;

[player,[_taskname],[_description,_title],_pos,0,2,false] remoteExecCall ["BIS_fnc_taskCreate", -2, true];