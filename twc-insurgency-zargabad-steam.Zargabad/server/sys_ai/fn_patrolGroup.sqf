
_spawnMarkers = _this select 0;
_randomFormation = ["COLUMN", "STAG COLUMN", "WEDGE", "LINE", "VEE"];

{
	_chosenFormation = _randomFormation call BIS_fnc_selectRandom;
	_spawnGroup = [getmarkerpos _x, EAST, (configfile >> "CfgGroups" >> "Indep" >> "mas_med_ind" >> "Infantry" >> "IND_mas_med_InfSquad_i")] call BIS_fnc_spawnGroup;
	[_spawnGroup, getMarkerPos _x, 300, 7, "MOVE", "SAFE", "GREEN", "NORMAL", _chosenFormation] call CBA_fnc_taskPatrol;
}forEach _spawnMarkers;