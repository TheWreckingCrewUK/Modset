/*
Written by WiredTiger 28/04/2015
////////////////////////////////
Function to spawn waves of an enemy group.
Use "terminate _scriptHandle" in trigger deactivation so the script stops if no one is alive.
////////////////////////////////
1.List markers in an array to spawn ai.
2.Markers to move to.
3.How many waves you want.
4.Delay to start spawning.
5.And how long between spawns.
6.Trigger name to delete when done.
////////////////////////////////
Examples:
example1 = [["marker1", "marker2"], ["attackLocaiton", "secondLocation"], 3, 120, 120, "trigger name"] spawn InsP_fnc_smallSpawnAI;
example2 = [["m"], ["Location"], 5, 30, 300, "trigger name"] spawn InsP_fnc_smallSpawnAI;
*/

_spawnLocations = _this select 0;
_attackLocations = _this select 1;
_amountWaves = _this select 2;
_startDelay = _this select 3;
_spawnDelay = _this select 4;
_triggerName = _this select 5;

sleep _startDelay;

while {_amountWaves > 0} do {
	_amountWaves = _amountWaves - 1;
	_selectSpawn = _spawnLocations call BIS_fnc_selectRandom;
	_selectAttack = _attackLocations call BIS_fnc_selectRandom;
	_spawnGroup = [getmarkerpos _selectSpawn, EAST, (configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")] call BIS_fnc_spawnGroup;
	[_spawnGroup, (getmarkerpos _selectAttack), 20] call CBA_fnc_taskAttack;
	
	sleep _spawnDelay;
};

deleteVehicle _triggerName;