#define AA_POSITION_LIST_A ["AAGUNA1", "AAGUNA2", "AAGUNA3", "AAGUNA4"]
#define AA_POSITION_LIST_B ["AAGUNB1", "AAGUNB2", "AAGUNB3", "AAGUNB4"]
#define AA_POSITION_LIST_C ["AAGUNC1", "AAGUNC2", "AAGUNC3", "AAGUNC4"]
#define AA_POSITION_LIST_D ["AAGUND1", "AAGUND2", "AAGUND3", "AAGUND4"]
#define AA_POSITION_LIST_E ["AAGUNE1", "AAGUNE2", "AAGUNE3", "AAGUNE4"]
#define AA_VEHICLE_TYPE "RDS_ZU23_AAF"

private ["_aaGunAPosition", "_aaGunBPosition", "_aaGunCPosition", "_aaGunDPosition", "_aaGunEPosition", "_aaGunA", "_aaGunB", "_aaGunC", "_aaGunD", "_aaGunE"];

if (isNil "InsP_aaGroup") then {
    _aaGunAPosition = AA_POSITION_LIST_A call BIS_fnc_selectRandom;
    _aaGunBPosition = AA_POSITION_LIST_B call BIS_fnc_selectRandom;
    _aaGunCPosition = AA_POSITION_LIST_C call BIS_fnc_selectRandom;
    _aaGunDPosition = AA_POSITION_LIST_D call BIS_fnc_selectRandom;
	_aaGunEPosition = AA_POSITION_LIST_E call BIS_fnc_selectRandom;
		
    _aaGunA = AA_VEHICLE_TYPE createVehicle getMarkerPos _aaGunAPosition;
    _aaGunA setDir (random 360);
    _aaGunA addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun}];
    createVehicleCrew _aaGunA;

    _aaGunB = AA_VEHICLE_TYPE createVehicle getMarkerPos _aaGunBPosition;
    _aaGunB setDir (random 360);
    _aaGunB addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun}];
    createVehicleCrew _aaGunB;
	
    _aaGunC = AA_VEHICLE_TYPE createVehicle getMarkerPos _aaGunCPosition;
    _aaGunC setDir (random 360);
    _aaGunC addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun}];
    createVehicleCrew _aaGunC;
	
    _aaGunD = AA_VEHICLE_TYPE createVehicle getMarkerPos _aaGunDPosition;
    _aaGunD setDir (random 360);
    _aaGunD addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun}];
    createVehicleCrew _aaGunD;
	
    _aaGunE = AA_VEHICLE_TYPE createVehicle getMarkerPos _aaGunEPosition;
    _aaGunE setDir (random 360);
    _aaGunE addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun}];
    createVehicleCrew _aaGunE;

    InsP_aaGroup = [_aaGunA, _aaGunB, _aaGunC, _aaGunD, _aaGunE];
    publicVariable "InsP_aaGroup";
};
