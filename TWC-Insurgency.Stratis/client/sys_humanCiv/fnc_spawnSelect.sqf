InsP_civSpawned = false;

fnc_clickToSpawn = {
    {
        if ((_x distance [_this select 0,_this select 1,0]) < 50) exitWith {
            player setPosATL (getPosATL _x);
            InsP_civSpawned = true;
        };
    } forEach InsP_cacheGroup;
};

while {true} do {
    openMap [true, true];

    _m = 0;
    _allMarkers = [];
    {
        _m = _m + 1;
        _marker = createMarkerLocal [format ["InsP_cache%1", _m], getPosATL _x];
        _marker setMarkerTypeLocal "mil_triangle";
        _marker setMarkerColorLocal "ColorRed";
		_marker setMarkerTextLocal "Cache";
        _allMarkers = _allMarkers + [_marker];
    } forEach InsP_cacheGroup;

    onMapSingleClick "_pos spawn fnc_clickToSpawn; true;";

    hintSilent "Click on a cache to spawn";
    waitUntil {InsP_civSpawned};
    InsP_civSpawned = false;
    cutText ["Receiving...", "BLACK", 0.001];
    openMap [false, false];
    onMapSingleClick "";
    {deleteMarkerLocal _x} forEach _allMarkers;
    sleep 6;
    cutText ["","BLACK IN",0];
	for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
	for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
    waitUntil {!alive player};
	_arsenal = nearestObject [player, "Box_FIA_Wps_F"];
	[_arsenal] execVM "client\sys_humanCiv\arsenal.sqf";
    if (faction player != "CIV_F") exitWith {};
    waitUntil {alive player};
};
