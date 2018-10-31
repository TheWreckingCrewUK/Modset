params ["_operationName", "_author", "_operationEra", "_isNightOp", "_introData"];

_song = [_operationEra, _isNightOp] call TWC_Incorporeal_fnc_getIntroSong;

