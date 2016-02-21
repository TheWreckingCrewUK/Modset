_cacheDestroyed = _this select 0;

call {
	if (_cacheDestroyed == "cacheBoxA") exitWith {
		{
			deadMarker = deleteMarker _x;
			publicVariable "deadMarker";
		}forEach cacheAMarkers;
	};
	
	if (_cacheDestroyed == "cacheBoxB") exitWith {
		{
			deadMarker = deleteMarker _x;
			publicVariable "deadMarker";
		}forEach cacheBMarkers;
	};
	
/*	if (_cacheDestroyed == "cacheBoxC") exitWith {
		{
			deadMarker = deleteMarker _x;
			publicVariable "deadMarker";
		}forEach cacheCMarkers;
	};
*/	
	if (_cacheDestroyed == "cacheBoxD") exitWith {
		{
			deadMarker = deleteMarker _x;
			publicVariable "deadMarker";
		}forEach cacheDMarkers;
	};
	
	if (_cacheDestroyed == "cacheBoxE") exitWith {
		{
			deadMarker = deleteMarker _x;
			publicVariable "deadMarker";
		}forEach cacheEMarkers;
	};
};