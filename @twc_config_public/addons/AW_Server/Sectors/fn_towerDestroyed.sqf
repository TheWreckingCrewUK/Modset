/*
	File: fn_towerDestroyed.sqf
	Author: Dom
	Description: Reduces threat if the tower was destroyed recently after capture
*/
params ["_unit","_killer","_instigator","_useEffects"];

([getPosATL _unit,AW_radioTowerSectors] call AW_fnc_findNearestSector) params ["_sector"];
private _captureTimer = missionNamespace getVariable [format["AW_%1CapTime",_sector],-1500];
private _timer = getNumber(missionConfigFile >> "Core_Settings" >> "AW_radioTowerDestructionTimer") * 60;
private _index = AW_sectorDetails findIf {_x select 0 isEqualTo _sector};
private _towerArray = AW_sectorDetails select _index;

if (_captureTimer + _timer > CBA_missionTime || {!(_sector in AW_bluforSectors)}) then {
	private _threatReduction = getNumber(missionConfigFile >> "Core_Settings" >> "AW_radioTowerThreatReduction");
	[_threatReduction] call AW_fnc_adjustThreat;
	[format["The destruction of a radio tower has adjusted the threat level by %1.",_threatReduction]] remoteExecCall ["AW_fnc_notify",-2];
};

[_sector,(_sector in AW_bluforSectors)] call AW_fnc_setTower;