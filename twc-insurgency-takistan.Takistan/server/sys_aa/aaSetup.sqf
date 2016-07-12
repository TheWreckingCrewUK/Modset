AA_POSITION_LIST_A = ["AAGUNA1", "AAGUNA2", "AAGUNA3", "AAGUNA4", "AAGUNA5", "AAGUNA6", "AAGUNA7", "AAGUNA8"];
AA_POSITION_LIST_B = ["AAGUNB1", "AAGUNB2", "AAGUNB3", "AAGUNB4", "AAGUNB5", "AAGUNB6", "AAGUNB7", "AAGUNB8"];

private ["_aaGunAPosition", "_aaGunBPosition","_aaGunCPosition","_aaGunDPosition","_aaGunA", "_aaGunB","_aaGunC","_aaGunD"];

if (isNil "InsP_aaGroup") then {
    _aaGunAPosition = AA_POSITION_LIST_A call BIS_fnc_selectRandom;
	AA_POSITION_LIST_A = AA_POSITION_LIST_A - [_aaGunAPosition];
	_aaGunCPosition = AA_POSITION_LIST_A call BIS_fnc_selectRandom;
	
	
    _aaGunBPosition = AA_POSITION_LIST_B call BIS_fnc_selectRandom;
	AA_POSITION_LIST_B = AA_POSITION_LIST_B - [_aaGunBPosition];
	_aaGunDPosition = AA_POSITION_LIST_B call BIS_fnc_selectRandom;
	

    aaGunA = AA_VEHICLE_TYPE createVehicle getMarkerPos _aaGunAPosition;
	createVehicleCrew aaGunA;
    aaGunA setDir (random 360);
    aaGunA addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun;["aaGunA"] call InsP_fnc_deleteMarkers}];
	
	aaGunC = AA_VEHICLE_TYPE createVehicle getMarkerPos _aaGunCPosition;
	createVehicleCrew aaGunC;
    aaGunC setDir (random 360);
    aaGunC addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun;["aaGunC"] call InsP_fnc_deleteMarkers}];

    aaGunB = AA_VEHICLE_TYPE createVehicle getMarkerPos _aaGunBPosition;
	createVehicleCrew aaGunB;
    aaGunB setDir (random 360);
    aaGunB addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun;["aaGunB"] call InsP_fnc_deleteMarkers}];
	
	aaGunD = AA_VEHICLE_TYPE createVehicle getMarkerPos _aaGunDPosition;
	createVehicleCrew aaGunD;
    aaGunD setDir (random 360);
    aaGunD addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun;["aaGunD"] call InsP_fnc_deleteMarkers}];


    InsP_aaGroup = [aaGunA, aaGunB, aaGunC, aaGunD];
    publicVariable "InsP_aaGroup";
};