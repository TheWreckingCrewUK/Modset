/*
	File: fn_clearUXOs.sqf
	Author: Stanhope - Edited by Dom for new functionality
	Description: Secondary objective to clear UXO's from a blufor sector
*/
if (AW_secondaryActive isNotEqualTo "") exitWith {["A secondary mission is in already progress."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner]};
AW_secondaryActive = "UXOs";
publicVariable "AW_secondaryActive";

private _sectors = AW_citySectors arrayIntersect AW_bluforSectors;
_sectors append (AW_townSectors arrayIntersect AW_bluforSectors);
private _chosenSector = selectRandom _sectors;

private _sectorName = markerText _chosenSector;
private _sectorCentre = markerPos _chosenSector;
private _nearRoads = _sectorCentre nearRoads 150;
[_nearRoads,true] call CBA_fnc_shuffle;

private _uxoArray = [];
for "_i" from 1 to ((7 + round random 5) min (count _nearRoads)) do {
	private _className = format ["BombCluster_0%1_UXO%2_F",ceil (random 3),ceil (random 3)];
	private _uxo = createMine [_className,(_nearRoads select (_i - 1)),[],0];
	_uxo setDir (random 360);
	_uxoArray pushBack _uxo;
};

private _marker = createMarker ["clearUXOs",_sectorCentre];
_marker setMarkerType "mil_objective";
_marker setMarkerColor "ColorYellow";
_marker setMarkerText "UXOs";
_marker setMarkerSize [1.5,1.5];
["The town is marked, head there to assist.","generalNotif","Clearing UXOs"] remoteExecCall ["AW_fnc_notify",-2];

[
	{
		params ["_mines"];
		(_mines select {!isNull _x && {mineActive _x}}) isEqualTo []
	},
	{
		params ["","_marker"];
		["The town is is now clear of UXOs.","successNotif","Clearing UXOs"] remoteExecCall ["AW_fnc_notify",-2];
		[15] call AW_fnc_adjustCivRep;
		deleteMarker _marker;
		AW_secondaryMissionsCompleted = AW_secondaryMissionsCompleted + 1;
		AW_secondaryActive = "";
		publicVariable "AW_secondaryActive";
		call AW_fnc_saveGame; 	
	},
	[_uxoArray,_marker]
] call CBA_fnc_waitUntilAndExecute;