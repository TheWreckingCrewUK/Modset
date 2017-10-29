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

_civnum = random[3,4,5] * (2+((((_this select 0 distance getMarkerPos "respawn_west")/5)- 500)* (insp_civtrust * -0.001)))
;

for "_i" from 1 to _civnum do {
	_individualCiv = _group createUnit [civilianType, _pos, [], _civradius, "NONE"];
	_civHeading = (random 360);
	_individualCiv setFormDir _civHeading;
	_individualCiv setDir _civHeading;
	_westKilled = _individualCiv addEventHandler ["Killed", {
		[(_this select 0)] call twc_fnc_deleteDead;
		[_this select 0, _this select 1, _intelCache] call InsP_fnc_civKill;
	}];

	_individualCiv setVariable ["unitsHome",_pos,false];

	_individualCiv addEventHandler["FiredNear", {
		_civ = _this select 0;

		switch(round(random 2))do{
			case 0:{_civ switchMove "ApanPercMstpSnonWnonDnon_G01";};
			case 1:{_civ playMoveNow "ApanPknlMstpSnonWnonDnon_G01";};
			case 2:{_civ playMoveNow "ApanPpneMstpSnonWnonDnon_G01";};
			default{_civ playMoveNow "ApanPknlMstpSnonWnonDnon_G01";};
		};
		_civ setSpeedMode "FULL";

		// get nearest building, have to use this command for zeus/map placed objects
		_buildingLocations = nearestObjects [_civ, ["House", "Building"], 50];
		if ((count _buildingLocations) > 0) then {
			_civ doMove (_buildingLocations select 0);
			// could be cba defend or something too
		};
		_civ removeAllEventHandlers "FiredNear";
	}];
	
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

	[_group, _group, 200, 3, True] call CBA_fnc_TaskDefend;