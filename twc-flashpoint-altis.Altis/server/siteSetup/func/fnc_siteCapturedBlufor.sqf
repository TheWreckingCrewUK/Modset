params["_marker"];

hint format["Blufor has captured %1",_marker];
_marker setMarkerColor "colorWEST";
[_marker, "SUCCEEDED", true] spawn BIS_fnc_taskSetState;

[_marker]spawn{
	sleep 300;
	{ deleteVehicle _x } forEach allDead;

	_enemyVehicle = nearestObjects [getMarkerPos (_this select 0), ["Tank","Car","Tank"], 800];
	{
		if((typeOf _x) in friendlyVehiclesArray) then{
			_enemyVehicle = _enemyVehicle - [_x];
		};
	}forEach _enemyVehicle;

	{
		deleteVehicle _x
	}forEach _enemyVehicle;

	_enemy = nearestObjects [getMarkerPos (_this select 0), ["Man","WeaponHolder","GroundWeaponHolder"], 800];
	{
		if((side _x) == WEST) then{
			_enemy = _enemy - [_x];
		};
	}forEach _enemy;

	{
		deleteVehicle _x
	}forEach _enemy;

	{
		deleteGroup _x
	}forEach allGroups;
};

if ((_marker) in capturedArray) exitWith{};

capturedArray = capturedArray + [_marker];
publicVariable "capturedArray";

if(count capturedArray == 0)then{
	["All Bases Captured. Stick around for the Insurgency Stratis", "hint", True, True] call BIS_fnc_MP;
	[] spawn {sleep 15; ["end1", false, 0] call BIS_fnc_endMission};
};

remainingArray = remainingArray - [_marker];
publicVariable "capturedArray";