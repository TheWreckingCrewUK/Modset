params ["_logic", "_units", "_activated"];

if (!_activated || !isServer) exitWith {};

_pos = getPos _logic;
_unitTypes = _logic getVariable "UnitTypes";
_delay = _logic getVariable "Delay";
_maxWaves = _logic getVariable "MaxWaves";
_waypoints = _logic getVariable "Waypoints";

if (isNil "_waypoints" || isNil "_unitTypes") exitWith {
	[{_this spawn TWC_fnc_moduleWaveSpawn;}, [_logic, _units, _activated], 1] call CBA_fnc_waitAndExecute;
};

_currentWave = 1;

[_unitTypes, _pos, _waypoints, _delay, _currentWave, _maxWaves] spawn TWC_fnc_waveSpawn;