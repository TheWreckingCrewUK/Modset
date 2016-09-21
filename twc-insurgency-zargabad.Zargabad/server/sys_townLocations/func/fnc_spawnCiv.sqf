/*
* Details:
* 
* Creates a Civillian that will tak position in a house and will not move.
*
* Required parameters:
*
* 0 - String     Marker name
*
* Addtional parameters:
*
* 1 - Interger   Amount of civillians   Default: 7
* 
*
* Example:
*
*["bastam",7] spawn twc_fnc_SpawnCiv
*
* Author: [TWC] Fakematty / [TWC] Jayman
*/
_group = createGroup civilian;
params["_pos", "_civnum", "_civradius"];

for "_i" from 1 to _civnum do {

		_individualCiv = _group createUnit [civilianType, _pos, [], _civradius, "NONE"];
		_civHeading = (random 360);
		_individualCiv setFormDir _civHeading;
		_individualCiv setDir _civHeading;
		_westKilled = _individualCiv addMPEventHandler ["MPKilled", {[_this select 0, _this select 1, _intelCache] call InsP_fnc_civKill;}];
		_individualCiv disableAI "path";
		[_individualCiv, _individualCiv, 200, 2, True] call CBA_fnc_TaskDefend;
		_clothes = 
		[
			"CUP_O_TKI_Khet_Partug_03",
			"CUP_O_TKI_Khet_Partug_05",
			"CUP_O_TKI_Khet_Partug_06",
			"CUP_O_TKI_Khet_Partug_07",
			"CUP_O_TKI_Khet_Partug_02",
			"CUP_O_TKI_Khet_Partug_08"
		] call BIS_fnc_selectRandom;
		_individualCiv forceadduniform _clothes;
		
};
