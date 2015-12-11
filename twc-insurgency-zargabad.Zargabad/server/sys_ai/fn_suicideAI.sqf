/* 
*Written by [TWC] jayman
*2015 December 11
/////////////////////////////////////////////////////
1.Fakematty is a knobhead
2.Takes Trigger From [TWC] WiredTigers AI spawn script
3.Adds a Muhammad Jihad
4.Has Muhammad Jihad run after players
///////////////////////////////////////////////////////
Examples:
example1 = [["marker1", "marker2"], ["attackLocaiton", "secondLocation"], trigger name] spawn InsP_fnc_spawnAI;
example2 = [["m"], ["Location"], trigger name] spawn InsP_fnc_spawnAI;


_spawnLocations = _this select 0;
_attackLocations = _this select 1;
_triggerName = _this select 2;

sleep 15;

	_selectSpawn = _spawnLocations call BIS_fnc_selectRandom;
	_selectAttack = _attackLocations call BIS_fnc_selectRandom;
