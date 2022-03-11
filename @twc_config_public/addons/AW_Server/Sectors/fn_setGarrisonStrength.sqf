/*
	File: fn_setGarrisonStrength.sqf
	Author: Dom
	Description: Sets the current garrison strength of a sector
*/
params [
	["_sector","",[""]],
	["_value",1,[0]]
];

private _index = AW_sectorDetails findIf {_x select 0 isEqualTo _sector};

private _sectorDetailsArray = AW_sectorDetails select _index;
_sectorDetailsArray set [1,_value];