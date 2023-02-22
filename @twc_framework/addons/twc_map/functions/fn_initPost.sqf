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
	
	//moved here with an ugly sleep
	[]spawn{
		waitUntil {sleep 0.5; !visibleMap};
		[] call twc_map_fnc_removeTempMarkers;
	};
}] call CBA_fnc_addEventHandler;


//Adding mission event handlers for map creation and deletion

[]spawn{
	//we spawn and wait until mission starts
	waitUntil { time > 0 };
	0 enableChannel false;
	4 enableChannel [true, false];
	
	if(isNil "twc_disconnectMarkers")then{
	twc_disconnectMarkers = [];
	publicVariable "twc_disconnectMarkers";
};
	
	addMissionEventHandler ["MarkerCreated",{
		params ["_marker", "_channelNumber", "_owner", "_local"];
		
		//Ignores code when created by server or triggers
		if(!(_local))exitWith{};
		
		//Ignore Global markers
		if(_channelNumber == 0)exitWith{};
		
		//Gets markerInfo needed to copy
		_pos = getMarkerPos _marker;
		_dir = markerDir _marker;
		_type = getMarkerType _marker;
		_shape = markerShape _marker;
		_size = getMarkerSize _marker;
		_text = markerText _marker;
		_alpha = markerAlpha _marker;
		_color = markerColor _marker;
		
		//Store it on the player for putting down maps
		_markerInfo = [_marker, _pos, _dir, _type, _shape, _size, _text, _alpha, _color];
		_array = _owner getVariable ["twc_localMarkers", []];
		_array pushback _markerInfo;
		_owner setVariable ["twc_localMarkers", _array, true];
		
		//Saves to server for disconnects
		[name _owner,_array] call twc_map_fnc_saveToServer;
	}];
	
	addMissionEventHandler ["MarkerDeleted", {
		params ["_marker", "_local"];
		
		//If the server deletes a marker it won't affect us
		if(!(_local))exitWith {};
		
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
	
	//Finally now that we are loaded in lets check the server for old map markers
	_markerArray = [name player] call twc_map_fnc_getFromServer;
	{
		_x params ["_name","_pos", "_dir", "_type", "_shape", "_size", "_text", "_alpha", "_color"];
		
		_marker = createMarkerLocal [str _pos, _pos];
		_marker setMarkerDirLocal _dir;
		_marker setMarkerTypeLocal _type;
		_marker setMarkerShapeLocal _shape;
		_marker setMarkerSizeLocal _size;
		_marker setMarkerTextLocal _text;
		_marker setMarkerAlphaLocal _alpha;
		_marker setMarkerColorLocal _color;
		
		//Add them to your own player variable;
		_ownArray pushback _x;
		player setVariable ["twc_localMarkers", _ownArray, true];
		
	}forEach _markerArray;
};