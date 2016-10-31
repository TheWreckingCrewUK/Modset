//twc_fnc_groupSpawn = compile preprocessfilelinenumbers "server\sys_sideMissions\fnc_groupSpawn.sqf";

//Spawning a few roadblocks:
//#include "roadBlock.sqf";

_pos = getMarkerPos "crate";
while{_pos distance2D getMarkerPos "crate" < 1500}do{
	//Spawning the massive FOB:
	_position = getMarkerPos "middleMarker"; 
	_radius = 2500;  
	_options = "-trees -forest*10 +meadow*5 -houses*10 -hills*10";  
	_result = selectBestPlaces [_position, _radius, _options, (_radius / 10) min 500, 100];  
	_pos = _result select 0 select 0;
};

["comp_largeFOB", (random 360), _pos] execVM "compositions\Createcomposition.sqf";

largeFOBMarker = "largeFOBMarker";
_markerstr = createMarker ["largeFOBMarker", _pos];
_markerstr setMarkerShape "icon";
_markerstr setMarkertype "Faction_CUP_TKM";
_markerstr setMarkerText "Hostile Overran FOB";

[_pos]spawn{
	sleep 20;
	_loc = [0,0,0];
	_amount = 0;
	_num = 1;
	while {_amount < _num}do{
		while {str _loc == "[0,0,0]"}do { 
			_houses = nearestObjects [(_this select 0), ["House", "Building"], 150];
			_home = _houses call BIS_fnc_selectRandom;
			_loc = _home buildingPos 1;
		};
		_intel = "cwa_Tablemap_Desert" createVehicle _loc;
		_amount = _amount + 1;
		_loc = [0,0,0];
	};
};
//Spawning Hostiles in Large Fob
_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [600, 600, 0, false];
_trg setTriggerActivation ["West", "PRESENT", False];
_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)","[(getPos thisTrigger)] call twc_spawnFOB",""];