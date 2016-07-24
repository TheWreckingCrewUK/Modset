
Params ["_taskname","_Title","_Description","_Primary","_Marker"];

if (_Primary) then {
	_taskname = "[P]" + _taskname;
}else{
	_taskname = "[S]" + _taskname;
};

[allunits,[_taskname],[_Title,_Description,_Marker],getmarkerpos _Marker,0,2,true] call BIS_fnc_taskCreate;