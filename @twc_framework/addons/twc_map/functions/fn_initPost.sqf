if !(hasInterface) exitWith {};

["visibleMap", {
	params ["", "_visible"];
	
	if (!_visible) then {
		if (twc_map_temporary) then {
			player unlinkItem "ItemMap";
			twc_map_temporary = false;
		};

		twc_map_lookingAt = 0; // assert reset
	};
}] call CBA_fnc_addPlayerEventHandler;

["twc_map_closed", {
	params ["_mapID"];

	if (!visibleMap) exitWith {};

	if (twc_map_lookingAt isEqualTo _mapID) then {
		twc_map_lookingAt = 0;
		[] call twc_map_fnc_removeTempMarkers;
		openMap false;
	};
}] call CBA_fnc_addEventHandler;

["twc_map_opened", {
	params ["_mapID"];

	twc_map_lookingAt = _mapID;
	_ownsAMap = ("ItemMap" in (vestItems player + uniformItems player + backpackItems player + assignedItems player));

	if !(_ownsAMap) then {
		twc_map_temporary = true;
		player linkItem "ItemMap";
	};

	openMap true;
	ctrlSetFocus ((findDisplay 12) displayCtrl 51);
}] call CBA_fnc_addEventHandler;

//Adding mission event handlers for map creation and deletion
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
	if(!(_local))exitWith {systemChat "How isn't it local"};
	
	//We need to delete this marker from the players twc_localMarkers
	_array = player getVariable ["twc_localMarkers",[]];
	
	//I don't know enough about c++ to explain this, but it must be done this way. Arrays man
	_arrayEdit = _array;
	{
		//Cant delete more than one at a time so we can exit
		if((_x select 0) == _marker)exitWith{
			_arrayEdit deleteAt _forEachIndex;
			player setVariable ["twc_localMarkers",_arrayEdit,true];
		};
	}forEach _array;
}];