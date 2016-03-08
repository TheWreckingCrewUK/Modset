Debug = false;

while {true} do {
	while {Debug} do{
		{
			if (side _x == West) then{
				_hasMarkerVar = _x getvariable ["DebugMarker",false];
				if  (_hasMarkerVar) then {
					_getMarkerName = _x getVariable "MarkerName";
					_getMarkerName setmarkerdirlocal getpos _x;
			    }else{
				_MarkerName = str random 1000000;
				_AOAreaMarker = createMarker [_MarkerName , position player ];
				_AOAreaMarker setmarkerpos getpos player;
				_AOAreaMarker setmarkershape "Icon";
				_AOAreaMarker setmarkertype "o_hq";
				_AOAreaMarker setmarkersize [1.0, 1.0];
				_AOAreaMarker setmarkercolor "Default";
				_x setVariable ["DebugMarker",true];
				_x setVariable ["MarkerName",_MarkerName];
				};
		    };
		}foreach allunits;
	};
};



		{
		MarkerName = str random 1000000;
		_AOAreaMarker = createMarker [ MarkerName , position player ];
		_AOAreaMarker setmarkerpos getpos player;
		_AOAreaMarker setmarkershape "Icon";
		_AOAreaMarker setmarkertype "o_hq";
		_AOAreaMarker setmarkersize [1.0, 1.0];
		_AOAreaMarker setmarkercolor "Default";
		}foreach allunits;
		
		MarkerName = str random 1000000;
		_AOAreaMarker = createMarker [ MarkerName , position player ];
		_AOAreaMarker setmarkerpos getpos player;
		_AOAreaMarker setmarkershape "Icon";
		_AOAreaMarker setmarkertype "o_hq";
		_AOAreaMarker setmarkersize [1.0, 1.0];
		_AOAreaMarker setmarkercolor "Default";