/*
* Function that creates a random spawned forrest camp.
*
*/

_marker = "vehicleMiddle";

_position = getMarkerPos _marker;
_radius = 10000; 
_options = "+trees +forest*10 -meadow -houses"; 
_result = selectBestPlaces [_position, _radius, _options, (_radius / 10) min 500, 100]; 
_pos = _result select 0 select 0;
if((_pos) distance2D (getMarkerPos "base") > 2000)then{
	_veh = "Campfire_burning_F" createVehicle _pos;
	
	for "_i" from 1 to 6 do{
		_spawnPos = [_pos, 10] call shk_pos;
		_veh = "Land_TentA_F" createVehicle  _spawnPos;
	};
	_spawnPos = [_pos, 1] call shk_pos;
	_item = ["EvMoscow","EvKobalt","EvPhoto","EvMap"] call BIS_fnc_selectRandom;
	_veh = _item createVehicle _spawnPos;
	
	_markerstr = createMarker [str (random 10000),_pos];
	_markerstr setMarkerShape "ICON";
	_markerstr setMarkerType "hd_dot";
		
	_trg = createTrigger ["EmptyDetector", _pos];
	_trg setTriggerArea [400, 400, 0, false];
	_trg setTriggerActivation ["West", "PRESENT", False];
	_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)","[thisTrigger,2] call twc_fnc_groupSpawn",""];
};