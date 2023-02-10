//only runs on dedicated server or player host
if(!isServer)exitWith{};

addMissionEventHandler ["MarkerCreated",{
	params ["_marker", "_channelNumber", "_owner", "_local"];
	
	//Ignores code when created by server or triggers
	if(!(_local))exitWith{};
	
	//Gets markerInfo needed to copy
	_pos = getMarkerPos _marker;
	_dir = markerDir _marker;
	_type = getMarkerType _marker;
	_shape = markerShape _marker;
	_size = getMarkerSize _marker;
	_text = markerText _marker;
	_alpha = markerAlpha _marker;
	
	_markerInfo = [_marker, _pos, _dir, _type, _shape, _size, _text, _alpha];
	_array = _owner getVariable ["twc_localMarkers", []];
	_array pushback _markerInfo;
	_owner setVariable ["twc_localMarkers", _array, true];
}];

addMissionEventHandler ["MarkerDeleted", {
	params ["_marker", "_local"];
	
	//If the server deletes a marker it won't affect us
	if(!(_local))exitWith {};
	
	//We need to delete this marker from the players twc_localMarkers
	_array = player getVariable ["twc_localMarkers",[]];
	{
		_delete = 0;
		if((_x select 1) == _marker)then{
			_delete = 1;
		};
		if(_delete == 1)then{
			_array = _array - _x;
		};
	}forEach _array;
}];