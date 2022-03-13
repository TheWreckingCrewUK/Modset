/*
	File: fn_mainSectorLoop.sqf
	Author: Dom
	Description: Monitors all sectors for nearby players
*/

private _sectorsToCheck = AW_allSectors - AW_bluforSectors;
private _radius = getNumber(missionConfigFile >> "Core_Settings" >> "AW_sectorActivationRange");
private _height = getNumber(missionConfigFile >> "Core_Settings" >> "AW_sectorActivationHeight");

private _units = playableUnits;
{
	private _playersAtSector = _units inAreaArray [markerPos _x,_radius,_radius,0,false,_height];
	if (_playersAtSector isNotEqualTo []) then {
		if !(_x in AW_activeSectors) then {
			[_x] call AW_fnc_activateSector;
		};
	};
} forEach _sectorsToCheck;