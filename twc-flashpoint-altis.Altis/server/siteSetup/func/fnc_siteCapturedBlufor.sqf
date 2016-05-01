params["_marker"];

hint format["Blufor has captured %1",_marker];
_marker setMarkerColor "colorWEST";

if (_marker == "mainHQ") exitWith {
	[_marker, "SUCCEEDED", true] spawn BIS_fnc_taskSetState;
	["Enemy MainHQ captured. All forces routed. Mission Completed.", "hint", True, True] call BIS_fnc_MP;
	[] spawn {sleep 15; ["end1", false, 0] call BIS_fnc_endMission};
};

if (_marker == "airbase2")then {
	[_marker, "SUCCEEDED", true] spawn BIS_fnc_taskSetState;
	if(getMarkerColor "commanderBase" == "colorEAST") then {
		airbase2Respawn = [west, "airbase2"] call BIS_fnc_addRespawnPosition;
		publicVariable "airbase2Respawn";
		boatRespawn call BIS_fnc_removeRespawnPosition;
	};
};

if(_marker == "commanderBase") then{
	commanderBaseRespawn = [west, position player] call BIS_fnc_addRespawnPosition;
	publicVariable "commanderBaseRespawn";
};

_rand = (random 100);
if(_rand < 40 && _marker != "commanderBase") exitWith{
	[_marker, _rand] spawn {
		sleep 10; [(_this select 0), (_this select 1)] call twc_attackDeciding
	};
};

[_marker]spawn{
	sleep 300;
	{ deleteVehicle _x } forEach allDead;

	_enemyVehicle = nearestObjects [getMarkerPos (_this select 0), ["LandVehicle"], 800];
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

remainingArray = remainingArray - [_marker];
publicVariable "capturedArray";

if ((_marker) in capturedArray) exitWith{};

capturedArray = capturedArray + [_marker];
publicVariable "capturedArray";