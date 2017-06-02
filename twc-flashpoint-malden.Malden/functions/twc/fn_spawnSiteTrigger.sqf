/*
* Created by [TWC] jayman
*
* Spawns the town start trigger with whatever params are given
*
* ARGUMENTS
* 0: Pos <ARRAY> -- [0,0,0];
* 1: MARKER <STRING>
*/
params["_pos","_marker"];;

_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [2000, 2000, 0, false];
_trg setTriggerActivation ["West", "PRESENT", False];
_trg setTriggerStatements ["this",format["[%1,'%2'] call twc_fnc_siteSetup",_pos,_marker],""];