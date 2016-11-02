params["_marker", "_thisList"];

_marker setMarkerColor "colorEAST";

[_marker, "CREATED", true] spawn BIS_fnc_taskSetState;	
[_marker] call twc_fnc_createSite;

if(_marker == "radar1") then{
	if (!isNil "radarObj1") then{
		if(alive radarObj1) then{
			"radar1Radius" setMarkerAlpha 1;
		};
	};
};
if(_marker == "radar2") then{
	if (!isNil "radarObj2")then{
		if(alive radarObj2) then{
			"radar2Radius" setMarkerAlpha 1;
		};
	};
};

{
	deleteVehicle _x
}forEach _thisList;

{
	deleteGroup _x
}forEach allGroups;

capturedArray = capturedArray - [_marker];
publicVariable "capturedArray";

if ((_marker) in remainingArray) exitWith{};

remainingArray = remainingArray + [_marker];
publicVariable "remainingArray";