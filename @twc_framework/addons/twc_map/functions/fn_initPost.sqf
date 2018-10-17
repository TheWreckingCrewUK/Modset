if (!hasInterface || isServer) exitWith {};

twc_map_temporary = false;
twc_map_lookingAt = 0;
twc_map_temporaryMarkers = [];

["visibleMap", {
	params ["_visible"];
	
	if (!_visible) then {
		if (twc_map_temporary) then {
			player unlinkItem "ItemMap";
			twc_map_temporary = false;
		};
	};
}] call CBA_fnc_addPlayerEventHandler;

["twc_map_closed", {
	params ["_mapID"];

	if (twc_map_lookingAt == _mapID) then {
		twc_map_lookingAt = 0;
		[] call twc_map_removeTempMarkers;
		openMap false;
	};
}] call CBA_fnc_addEventHandler;

["twc_map_opened", {
	params ["_mapID"];

	twc_map_lookingAt = _mapID;
	_ownsAMap = ("ItemMap" in (vestItems player + uniformItems player + backpackItems player + assignedItems player));

	if !(_ownsAMap) then {
		twc_map_temporary = true;
		player assignItem "ItemMap";
	};

	openMap true;
	ctrlSetFocus ((findDisplay 51) displayCtrl 12);
}] call CBA_fnc_addEventHandler;

["ace_settingsInitialized", {
	["twc_map_newMarker", {
		params ["_caller", "_markerArray"];

		// safety check
		if ((player distance _caller) > ace_map_gestures_maxRange) exitWith {};
		if !(_markerArray isEqualTo []) exitWith {};

		// create the new marker locally
		_newMarker = createMarkerLocal [_markerArray select 0, _markerArray select 2];
		
		if ((_markerArray select 1) == "ICON") then {
			_newMarker setMarkerTypeLocal (_markerArray select 5);
			_newMarker setMarkerTextLocal (_markerArray select 7);
		} else {
			_newMarker setMarkerShapeLocal (_markerArray select 1);
			_newMarker setMarkerBrushLocal (_markerArray select 6);
			_newMarker setMarkerSizeLocal (_markerArray select 8);
		};

		_newMarker setMarkerColorLocal (_markerArray select 3);
		_newMarker setMarkerDirLocal (_markerArray select 4);
	}] call CBA_fnc_addEventHandler;
	
	// Used for when copying a lot of markers, say from a map board etc.
	["twc_map_newMarkers", {
		params ["_caller", "_markersArray"];

		// helps cut performance loss, even if a bit redundant
		if ((player distance _caller) > ace_map_gestures_maxRange) exitWith {};
		if !(_markersArray isEqualTo []) exitWith {};

		{
			["twc_map_newMarker", [_caller, _x]] call CBA_fnc_localEvent;
		} forEach _markersArray;
	}] call CBA_fnc_addEventHandler;
	
	/* ["created", {
		params ["_marker"];
		
		
	}] call CBA_fnc_addMarkerEventHandler;
	
	["deleted", {
		params ["_marker"];
		
		
	}] call CBA_fnc_addMarkerEventHandler; */
}] call CBA_fnc_addEventHandler;