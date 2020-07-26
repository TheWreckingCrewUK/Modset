params ["_units", "_pos", "_waypoints", "_delay", "_currentWave", "_maxWaves"];

_side = switch (getNumber (configFile >> "CfgVehicles" >> _units select 0 >> "side")) do {
	case 0: {east};
	case 1: {west};
	case 2: {resistance};
	case 3: {civilian};
};
_group = [_pos, _side, _units] call BIS_fnc_spawnGroup;

{
	_x set [0, _group];
	_x call CBA_fnc_addWaypoint
} forEach _waypoints;

if (_currentWave == _maxWaves) exitWith {};
_currentWave = _currentWave + 1;

[{_this call TWC_fnc_waveSpawn;}, [_units, _pos, _waypoints, _delay, _currentWave, _maxWaves], _delay] call CBA_fnc_waitAndExecute;