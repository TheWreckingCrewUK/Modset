/*
* Created by [TWC] jayman
*
* Spawns the town start trigger with whatever params are given
*
* ARGUMENTS
* 0: Pos <ARRAY> -- [0,0,0];
* 1: MARKER <STRING>
* 2: SpawnInfo <ARRAY] -- [addedNum,radius]
* 3: CIVINFO <ARRAY> -- [addedNum,radius]
*/
params["_pos","_marker",["_spawnAiInfo",[6,[100,200]]],["_civInfo",[5,100]]];

_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["West", "PRESENT", False];
_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call 	bis_fnc_selectRandom)) select 2 < 25)",format["[%1,'%2',%3,%4,thisList] spawn twc_fnc_townSetup",_pos,_marker,_spawnAiInfo,_civInfo],""];