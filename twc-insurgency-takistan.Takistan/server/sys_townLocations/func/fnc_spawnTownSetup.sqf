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
						  
params["_pos","_civnum","_civradius","_waves","_groupradius","_thisList"];

[_pos, _civnum, _civradius] call twc_spawnCiv;
[_pos] call twc_spawnDefend;
[_pos, _waves, _groupradius,_thisList] call twc_spawnAIUnits;

_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [400, 400, 0, false];
_trg setTriggerActivation ["EAST", "NOT PRESENT", False];
_trg setTriggerStatements ["this", format["['%1'] call twc_townClear", _pos]
	,""
];

