/*
	File: fn_setTower.sqf
	Author: Dom
	Description: Sets the state of a radio tower
*/
params [
	["_sector","",[""]],
	["_blufor",true,[true]]
];

private _index = AW_sectorDetails findIf {_x select 0 isEqualTo _sector};
private _towerArray = AW_sectorDetails select _index;
private _towerObjects = nearestObjects [markerPos _sector,["Land_Communication_F","Land_TTowerSmall_2_F","Land_TTowerBig_1_F"],50,true] select {alive _x};

if (_towerObjects isEqualTo []) then {
	_towerArray set [2,-1];
	if (_blufor) then {
		AW_bluforTowerCount = AW_bluforTowerCount - 1;
		publicVariable "AW_bluforTowerCount";
	};
} else {
	_towerArray set [2,0];
	if (_blufor) then {
		AW_bluforTowerCount = AW_bluforTowerCount + 1;
		publicVariable "AW_bluforTowerCount";
	};
};