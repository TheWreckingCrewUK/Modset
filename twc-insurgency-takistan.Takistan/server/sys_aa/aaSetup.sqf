_position = [(worldSize / 2),(worldSize / 2)]; 
_radius = (sqrt 2 *(worldSize / 2));  
_options = "-trees -forest +meadow -houses";  
_result = selectBestPlaces [_position, _radius, _options, (_radius / 10) min 500, 100];  
_posA = _result select 0 select 0;
_posB = _result select 1 select 0;

if (isNil "InsP_aaGroup") then {
	InsP_aaGroup = [];

	if(_posA distance2D (getMarkerPos "crate") > 300)then{
		aaGunA = AA_VEHICLE_TYPE createVehicle _posA;
		createVehicleCrew aaGunA;
		aaGunA setDir (random 360);
		aaGunA addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun;["aaGunA"] call InsP_fnc_deleteMarkers}];
		InsP_aaGroup = InsP_aaGroup + [aaGunA];
	};

	if(_posB distance2D (getMarkerPos "crate") > 300)then{
		aaGunB = AA_VEHICLE_TYPE createVehicle _posB;
		createVehicleCrew aaGunB;
		aaGunB setDir (random 360);
		aaGunB addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadAAGun;["aaGunB"] call InsP_fnc_deleteMarkers}];
		InsP_aaGroup = InsP_aaGroup + [aaGunB];
	};
    publicVariable "InsP_aaGroup";
};