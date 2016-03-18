DebugMarkers = false;
AdminMarkerArray = [];
if (getPlayerUID player == "_SP_PLAYER_") then {DebugMarkers = true;};
if (isMultiplayer) then {
	DebugMarkers = false;
};

while {true} do {
	Waituntil {DebugMarkers};
	{_x SetMarkerAlphalocal 1}foreach AdminMarkerArray;
	while {DebugMarkers} do{
		{
			if (side _x == West) then{
				_hasMarkerVar = _x getvariable ["DebugMarker",false];
				if  (_hasMarkerVar) then {
					_getMarkerName = _x getVariable "MarkerName";
					_getMarkerName setmarkerposlocal getpos _x;
			    }else{
				_MarkerName = str random 1000000;
				AdminMarkerArray = AdminMarkerArray + [_MarkerName];
				[getpos _x,false,"icon","HD_Dot",[_MarkerName,false],"ColorWEST",typeof _x] call twc_fnc_CreateMarker;
				_x setVariable ["DebugMarker",true];
				_x setVariable ["MarkerName",_MarkerName];
				};
		    };
			if (side _x == east) then{
				_hasMarkerVar = _x getvariable ["DebugMarker",false];
				if  (_hasMarkerVar) then {
					_getMarkerName = _x getVariable "MarkerName";
					_getMarkerName setmarkerposlocal getpos _x;
			    }else{
				_MarkerName = str random 1000000;
				AdminMarkerArray = AdminMarkerArray + [_MarkerName];
				[getpos _x,false,"icon","HD_Dot",[_MarkerName,false],"ColorEAST",typeof _x] call twc_fnc_CreateMarker;
				_x setVariable ["DebugMarker",true];
				_x setVariable ["MarkerName",_MarkerName];
				};
		    };
			if (side _x == resistance) then{
				_hasMarkerVar = _x getvariable ["DebugMarker",false];
				if  (_hasMarkerVar) then {
					_getMarkerName = _x getVariable "MarkerName";
					_getMarkerName setmarkerposlocal getpos _x;
			    }else{
				_MarkerName = str random 1000000;
				AdminMarkerArray = AdminMarkerArray + [_MarkerName];
				[getpos _x,false,"icon","HD_Dot",[_MarkerName,false],"ColorGUER",typeof _x] call twc_fnc_CreateMarker;
				_x setVariable ["DebugMarker",true];
				_x setVariable ["MarkerName",_MarkerName];
				};
		    };
			if (side _x == civilian) then{
				_hasMarkerVar = _x getvariable ["DebugMarker",false];
				if  (_hasMarkerVar) then {
					_getMarkerName = _x getVariable "MarkerName";
					_getMarkerName setmarkerposlocal getpos _x;
			    }else{
				_MarkerName = str random 1000000;
				AdminMarkerArray = AdminMarkerArray + [_MarkerName];
				[getpos _x,false,"icon","HD_Dot",[_MarkerName,false],"ColorCIV",typeof _x] call twc_fnc_CreateMarker;
				_x setVariable ["DebugMarker",true];
				_x setVariable ["MarkerName",_MarkerName];
				};
		    };
		}foreach allunits;
		sleep 0.1;
	};
	Waituntil {!DebugMarkers};
	{_x SetMarkerAlphalocal 0}foreach AdminMarkerArray;
};