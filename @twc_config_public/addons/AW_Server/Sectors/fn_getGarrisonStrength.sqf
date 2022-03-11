/*
	File: fn_getGarrisonStrength.sqf
	Author: Dom
	Description: Returns the current garrison strength of a sector or the average in the region
*/
params [
	["_sector","",[""]]
];

if (_sector isEqualTo "average") exitWith {
	private _totalStrength = 0;
	private _totalSectors = {
		_x params ["","_value"];
		if (_value isNotEqualTo 0) then {
			_totalStrength = _totalStrength + _value;
			true
		};
	} count AW_sectorDetails;

	_totalStrength / _totalSectors;
};

private _index = AW_sectorDetails findIf {_x select 0 isEqualTo _sector};

(AW_sectorDetails select _index) params ["","_garrisonRatio"];

(_garrisonRatio max 0.25);