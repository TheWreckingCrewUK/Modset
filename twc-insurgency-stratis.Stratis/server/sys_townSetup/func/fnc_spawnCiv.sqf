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
_civilianType = "C_man_1";
params["_marker", "_civnum", "_civradius"];

for "_i" from 1 to _civnum do {
		_individualCiv = _group createUnit [_civilianType, (getMarkerPos _marker), [], _civradius, "NONE"];
		_civHeading = (random 360);
		_individualCiv setFormDir _civHeading;
		_individualCiv setDir _civHeading;
		_westKilled = _individualCiv addMPEventHandler ["MPKilled", {[_this select 0, _this 	 select 1, _intelCache] call InsP_fnc_civKill;}];
		_individualCiv disableAI "MOVE";
		_clothes = 
		[
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_redwhite",
			"U_C_Commoner1_1",
			"U_C_Commoner1_2",
			"U_C_Commoner1_3",
			"U_Rangemaster",
			"U_NikosBody"
		] call BIS_fnc_selectRandom;
		_individualCiv forceadduniform _clothes;
};
