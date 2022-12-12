/*
	File: fn_buildingChanged.sqf
	Author: Dom
	Description: Called on a building changing model
*/
params ["_previousObject","_newObject","_isRuin"];

private _class = typeOf _previousObject;
if (_class isEqualTo "") exitWith {};

private _pos = getPosATL _previousObject;
if ([_pos] call AW_fnc_isNearFOB) then {
	if (_class in ["Land_HelipadSquare_F","Land_HelipadCircle_F","Land_HelipadRescue_F"]) then {
		AW_maxHelicopterCount = AW_maxHelicopterCount - 1;
		publicVariable "AW_maxHelicopterCount";
	} else {
		if (_class in ["Land_TentHangar_V1_F"]) then {
			AW_maxPlaneCount = AW_maxPlaneCount - 1;
			publicVariable "AW_maxPlaneCount";
		};
	};
};

private _sectorsToCheck = [["city","town","factory"]] call AW_fnc_getSectorsByType;
([_pos,_sectorsToCheck] call AW_fnc_findNearestSector) params ["_sector","","_distance"];
private _radius = ((getArray(missionConfigFile >> "Core_Settings" >> "AW_sectorCaptureRadius")) select 2) * 1.2; //selecting biggest - city

if (_distance < _radius) then {
	private _nearPlayers = playableUnits findIf {_x distance _previousObject < 1500};
	if (_nearPlayers isNotEqualTo -1) then {
		private _civRepLoss = getNumber(missionConfigFile >> "Core_Settings" >> "AW_damagedBuildingRepLoss");
		if (_isRuin) then {
			["A civilian building was destroyed."] remoteExecCall ["AW_fnc_notify",-2];
			[(_civRepLoss * 2)] call AW_fnc_adjustCivRep;

			private _index = AW_sectorDetails findIf {_x select 0 isEqualTo _sector};
			private _sectorArray = AW_sectorDetails select _index;
			private _count = _sectorArray param [2,0];
			_count = _count + 1;
			_sectorArray set [2,_count];
		} else {
			["A civilian building was damaged."] remoteExecCall ["AW_fnc_notify",-2];
			[_civRepLoss] call AW_fnc_adjustCivRep;
		};
	};
};