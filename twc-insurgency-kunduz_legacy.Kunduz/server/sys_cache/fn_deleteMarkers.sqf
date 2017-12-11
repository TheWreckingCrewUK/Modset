_destroyed = _this select 0;

call {
	if (_destroyed == "cacheBoxA") exitWith {
		{
			deadMarker = deleteMarker _x;
			publicVariable "deadMarker";
		}forEach cacheAMarkers;
	};
	
	if (_destroyed == "cacheBoxB") exitWith {
		{
			deadMarker = deleteMarker _x;
			publicVariable "deadMarker";
		}forEach cacheBMarkers;
	};
	if (_destroyed == "cacheBoxC") exitWith {
		{
			deadMarker = deleteMarker _x;
			publicVariable "deadMarker";
		}forEach cacheCMarkers;
	};
	if (_destroyed == "aaGunA") exitWith {
		{
			deadMarker = deleteMarker _x;
			publicVariable "deadMarker";
		}forEach aaGunAMarkers;
	};
	if (_destroyed == "aaGunB") exitWith {
		{
			deadMarker = deleteMarker _x;
			publicVariable "deadMarker";
		}forEach aaGunBMarkers;
	};
};