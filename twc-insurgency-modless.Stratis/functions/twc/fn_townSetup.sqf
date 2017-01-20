/*
* Created by [TWC] jayman
*
* Description:
* The trigger calls this function which calls or spawns all the necessary functions for spawning the insurgency towns
*
* ARGUMENTS
* 0: POS <ARRAY> -- [0,0,0]
* 1: MARKER <STRING> -- <MARKER>
* 2: SPAWNAiINFO <ARRAY> -- [SPAWNNUM,SPAWNRADIUS]
* 3: CIVINFO <ARRAY> -- [CIVNUM,CIVRADIUS]
* 4: THISLIST <ARRAY> -- OF BLUFOR UNITS WHO ACTIVATED THE TRIGGER
*
* EXAMPLE:
* [getMarkerPos "bastamTown","bastamTown",[5,[100.200]],[5,100]] call twc_fnc_townSetup;
*/ 
						  
params["_pos","_marker","_spawnAiInfo","_civInfo","_thisList"];
//For Debuggin cause triggers and format can be an ass
systemChat str [_pos, _marker, _spawnAiInfo,_civInfo,_thisList];

//calling the other functions
[_pos] call twc_fnc_spawnDefend;
[_pos, _civInfo] call twc_fnc_spawnCiv;
[_pos, _spawnAiInfo,_thisList] spawn twc_fnc_spawnAIUnits;

//changing marker color and creatng the trigger to check when town is cleared or blufor dies
_marker setMarkerColor "colorYellow";

_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [200, 200, 0, false];
_trg setTriggerActivation ["ANY", "PRESENT", False];
_trg setTriggerTimeout [5,5,5, true];
_trg setTriggerStatements ["West countSide thisList == 0 || East CountSide thisList < 6",format["[%1, thisList,'%2'] spawn twc_fnc_townDeciding",_pos,_marker],""];