/*
	File: fn_updateGarrisonStrength.sqf
	Author: Dom
	Description: Updates the garrison strength of a sector once despawned
*/
params [
	["_sector","",[""]],
	["_endUnitCount",0,[0]]
];

private _startUnitCount = missionNamespace getVariable [format["%1_unitCount",_sector],0];
private _ratio = if (_endUnitCount isEqualTo 0) then {
	0	
} else {
	(_endUnitCount / _startUnitCount) min 1;
};
private _oldStrength = [_sector] call AW_fnc_getGarrisonStrength;

private _index = AW_sectorDetails findIf {_x select 0 isEqualTo _sector};

private _sectorDetailsArray = AW_sectorDetails select _index;
_sectorDetailsArray set [1,(_oldStrength * _ratio)];