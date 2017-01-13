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
*
* Creates a trigger to spawn the town capture and cleanup
*/ 
						  
params["_marker","_pos","_civnum","_civradius","_waves","_groupradius","_thisList"];

systemChat str [_marker, _pos, _civnum,_civradius,_waves,_groupradius,_thisList];

[_pos] call twc_fnc_spawnDefend;
[_pos, _civnum, _civradius] call twc_fnc_spawnCiv;

[_pos, _waves, _groupradius,_thisList,_marker] spawn twc_fnc_spawnAIUnits;