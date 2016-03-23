/*
* Created by [TWC] jayman
*
* Is pre-compiled as twc_townSetup
* Called from server\townSetup\%townName\init
*
* Example:
*  _Bastamstart setTriggerStatements ["this","['Bastam',7,100,3,[600,700]] call twc_townSetup"
*
* This example gives the town of Bastam 7 civs with a radius of 100.
* It has 3 Waves morale not withstanding, which spawn between 600 and 700 meters away.
*/ 
						  
params["_marker","_civnum","_civradius","_waves","_groupradius"];

[_marker, _civnum, _civradius] call twc_spawnCiv;

_enemy = nearestObjects [getMarkerPos _marker, ["Man"], 50];
{
	_x enableAI "ANIM";
	_x hideObject False;
}forEach _enemy;

[_marker, _waves, _groupradius] call twc_spawnAIUnits;

