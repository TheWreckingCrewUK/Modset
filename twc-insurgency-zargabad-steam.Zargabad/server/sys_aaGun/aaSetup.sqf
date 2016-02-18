#define AA_POSITION_LIST_A ["AAGUNA1", "AAGUNA2", "AAGUNA3", "AAGUNA4", "AAGUNA5", "AAGUNA6", "AAGUNA7", "AAGUNA8"]
#define AA_POSITION_LIST_B ["AAGUNB1", "AAGUNB2", "AAGUNB3", "AAGUNB4", "AAGUNB5", "AAGUNB6", "AAGUNB7", "AAGUNB8"]
#define AA_VEHICLE_TYPE "CUP_B_M2StaticMG_MiniTripod_USMC"

private ["_aaGunAPosition", "_aaGunBPosition", "_aaGunA", "_aaGunB"];

if (isNil "InsP_aaGroup") then {
    _aaGunAPosition = AA_POSITION_LIST_A call BIS_fnc_selectRandom;
    _aaGunBPosition = AA_POSITION_LIST_B call BIS_fnc_selectRandom;

    _aaGunA = AA_VEHICLE_TYPE createVehicle getMarkerPos _aaGunAPosition;
    _aaGunA setDir (random 360);
    _aaGunA addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun}];
    _aaGunAgunner = "I_mas_med_Rebel4_F" createVehicle getMarkerPos _aaGunAPosition;
	_aaGunAgunner moveingunner _aaGunA;

    _aaGunB = AA_VEHICLE_TYPE createVehicle getMarkerPos _aaGunBPosition;
    _aaGunB setDir (random 360);
    _aaGunB addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun}];
    _aaGunBgunner = "I_mas_med_Rebel4_F" createVehicle getMarkerPos _aaGunBPosition;
	_aaGunBgunner moveingunner _aaGunB;

    InsP_aaGroup = [_aaGunA, _aaGunB];
    publicVariable "InsP_aaGroup";
};
