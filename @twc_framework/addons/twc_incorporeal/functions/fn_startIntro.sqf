params ["_operationName", "_author", "_operationEra", "_isNightOp"];

_song = [_operationEra, _isNightOp] call TWC_Incorporeal_fnc_getIntroSong;

// Need to support special intro camera stuff here. Hmmm.
_introData = [] call TWC_Incorporeal_fnc_getIntroData;

// Calculate time per section for panning shot. Overall time limit is 40 seconds, divided by element count. Min of 4 seconds per group.
_totalAssetCount = count _introData;
_panTimePerAsset = (40 / (_totalAssetCount)) max 4;

// some way of nicely transitioning into the game before group info ??
_cam = "camera" camCreate (player modelToWorld [0, 2, 5]);
_cam camSetTarget (_firstUnit modelToWorld [0, 0, 0]);
_cam cameraEffect ["internal", "back"];
_cam camCommit 5;

//TODO SET UP, PRESENTS, TITLE, FADE IN TO CAMERA etc.
sleep 20;

{
	_x params ["_groupName", "_groupUnits"];
	_displayString = "";
	_firstUnit = (_groupUnits select 0);
	_lastUnit = (_groupUnits select (count _groupUnits - 1));
	
	// Build Group Display List
	{
		_color = "#FFFFFF";
		if (_x select 1) then { _color = "#FF0000"; };

		_tmpString = "<t color='" + _color + "' size='1' align='left'>" + (_x select 0) + ": " + name (_x select 2) + "</t><br />";
		_displayString = _displayString + _tmpString;
	} forEach _groupUnits;
	
	_groupText = format ["<t color='#ff6633' size='2' align='left'>%1</t><br/>%2", _groupName, _displayString];
	
	titleText [_groupText, "PLAIN", -1, false, true]; 
	titleFadeOut _panTimePerAsset;
	
	_cam camSetTarget (_firstUnit modelToWorld [0, 0, 1.5]);
	_cam camSetPos (_firstUnit modelToWorld [0, 2, 1.5]);
	_cam cameraEffect ["internal", "back"];
	_cam camCommit 0;

	_cam camSetTarget (_lastUnit modelToWorld [0, 0, 1.5]);
	_cam camSetPos (_lastUnit modelToWorld [0, 2, 1.5]);
	_cam cameraEffect ["internal", "back"];
	_cam camCommit _panTimePerAsset;
	
	_waitFor = (_forEachIndex + 1) * _panTimePerAsset;
	sleep _waitFor;
} forEach _introData;

_cam cameraEffect ["terminate", "back"];
camDestroy _cam;

