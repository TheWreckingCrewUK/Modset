params ["_enabled"];

if(!isServer)exitWith{};

if !(_enabled) exitWith {};

if (getMarkerColor "base" isEqualTo "") exitWith {systemChat "Dead Body cleanup in base is Enabled, but no base marker is defined"};

_handle = addMissionEventHandler ["PlayerDisconnected",{
	_Deadbodies = nearestObjects [getmarkerpos "base", ["man"], 200];
	{if (not alive _x) then {deleteVehicle _x};} forEach _Deadbodies;
}];