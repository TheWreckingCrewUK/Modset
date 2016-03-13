#define AA_POSITION_LIST_A ["AAGUNA1", "AAGUNA2", "AAGUNA3", "AAGUNA4", "AAGUNA5", "AAGUNA6", "AAGUNA7", "AAGUNA8"]
#define AA_POSITION_LIST_B ["AAGUNB1", "AAGUNB2", "AAGUNB3", "AAGUNB4", "AAGUNB5", "AAGUNB6", "AAGUNB7", "AAGUNB8"]
AA_VEHICLE_TYPE = "CUP_I_DSHKM_NAPA";
_aagunner = "CUP_I_GUE_Soldier_AKSU";

private ["_aaGunAPosition", "_aaGunBPosition", "_aaGunA", "_aaGunB"];

if (isNil "InsP_aaGroup") then {
    _aaGunAPosition = AA_POSITION_LIST_A call BIS_fnc_selectRandom;
    _aaGunBPosition = AA_POSITION_LIST_B call BIS_fnc_selectRandom;

    aaGunA = AA_VEHICLE_TYPE createVehicle getMarkerPos _aaGunAPosition;
	createVehicleCrew aaGunA;
    aaGunA setDir (random 360);
    aaGunA addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun;["aaGunA"] call InsP_fnc_deleteMarkers}];

    aaGunB = AA_VEHICLE_TYPE createVehicle getMarkerPos _aaGunBPosition;
	createVehicleCrew aaGunB;
    aaGunB setDir (random 360);
    aaGunB addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun;["aaGunB"] call InsP_fnc_deleteMarkers}];


    InsP_aaGroup = [aaGunA, aaGunB];
    publicVariable "InsP_aaGroup";
};