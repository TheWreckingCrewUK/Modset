params["_marker","_thisList","_canCounter","_isCounterAttack"];

if (_isCounterAttack == 0) then{
	format["Blufor has captured %1",_marker] remoteExec ["hint"];
}else{
	format["Redfor's counter attack at %1 has been defeated",_marker] remoteExec ["hint"];
};

_marker setMarkerColor "colorWEST";

if (_marker == "mainHQ") exitWith {
	[_marker, "SUCCEEDED", true] spawn BIS_fnc_taskSetState;
	["Enemy MainHQ captured. All forces routed. Mission Completed.", "hint", True, True] call BIS_fnc_MP;
	[] spawn {sleep 15; ["end1", false, 0] call BIS_fnc_endMission};
};

_rand = (random 100);
if(_rand < 50 && _canCounter && _marker != "commanderBase") exitWith{
	[_marker, _rand] spawn {
		sleep 10; [(_this select 0), (_this select 1)] call twc_attackDeciding
	};
};


if(_marker == "radar1" || _marker == "radar2")then{
	_markerRadius = format["%1Radius", _marker];
	_markerRadius setMarkerAlpha 0;
};

[_marker,_thisList]spawn{
	sleep 300;
	_thisList = _this select 1;
	{
		if(str (_x getVariable "unitsHome") != str (_this select 0)) then{
			_thisList = _thisList - [_x];
		};
	}forEach _thisList;

	{
		deleteVehicle _x;
		sleep 1;
	}forEach _thisList;

	{
		deleteGroup _x
	}forEach allGroups;
};

remainingArray = remainingArray - [_marker];
publicVariable "capturedArray";

if ((_marker) in capturedArray) exitWith{};

capturedArray = capturedArray + [_marker];
publicVariable "capturedArray";