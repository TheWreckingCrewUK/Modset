/*
* Details
*
* Spawns a minimal amount of civs in the small town areas
*
* example ["Gospandi",3,50] call twc_smallTown;
*/


_group = createGroup civilian;
params["_marker", "_civnum", "_civradius"];

for "_i" from 1 to _civnum do {

		_individualCiv = _group createUnit [civilianType, (getMarkerPos _marker), [], _civradius, "NONE"];
		_civHeading = (random 360);
		_individualCiv setFormDir _civHeading;
		_individualCiv setDir _civHeading;
		_westKilled = _individualCiv addMPEventHandler ["MPKilled", {[_this select 0, _this select 1, _intelCache] call InsP_fnc_civKill;}];
		_individualCiv disableAI "AUTOCOMBAT";
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