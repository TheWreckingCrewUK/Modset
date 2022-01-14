/*
	File: fn_repairSector.sqf
	Author: Dom
	Description: Side mission for a sector requesting assistance to repair their village
*/

private _possibleSectors = AW_sectorDetails select {_x select 2 > 0 && {_x select 0 in AW_bluforSectors}};
(selectRandom _possibleSectors) params ["_chosenSector","","_buildingsLost"];
private _sectorPos = markerPos _chosenSector;
private _sectorName = markerText _chosenSector;
private _suppliesRequired = _buildingsLost * 100;

private _marker = createMarker ["repairTarget",_sectorPos];
_marker setMarkerType "mil_objective";
_marker setMarkerColor "ColorYellow";
_marker setMarkerText format["%1 supplies requested",_suppliesRequired];
[format["%1 has requested %2 supplies for repairs.",_sectorName,_suppliesRequired],"generalNotif","Repair Request"] remoteExecCall ["AW_fnc_notify",-2];

private _crateClass = (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforCrates")) select 0;
private _sectorIndex = [_chosenSector] call AW_fnc_getSectorTypeIndex;
private _radius = (getArray(missionConfigFile >> "Core_Settings" >> "AW_sectorCaptureRadius")) select _sectorIndex;
[
	{
		params ["_pos","_class","_radius","_cratesRequired"];
		count ((nearestObjects [_pos,[_class],_radius,true]) select {isNull attachedTo _x}) >= _cratesRequired
	},
	{
		params ["_pos","_class","_radius","_cratesRequired","_chosenSector","_marker","_name"];
		private _nearCrates = (nearestObjects [_pos,[_class],_radius,true]) select {isNull attachedTo _x};
		for "_i" from 0 to (_cratesRequired - 1) do {
			deleteVehicle (_nearCrates select _i);
		};

		private _civRepGain = (getNumber(missionConfigFile >> "Core_Settings" >> "AW_damagedBuildingRepLoss")) * 1.5;
		[abs(_civRepGain * _cratesRequired)] call AW_fnc_adjustCivRep;

		deleteMarker _marker;
		[format["%1 thanks you for the supplies.",_name],"successNotif","Repair Request"] remoteExecCall ["AW_fnc_notify",-2];

		private _index = AW_sectorDetails findIf {_x select 0 isEqualTo _chosenSector};
		private _sectorArray = AW_sectorDetails select _index;
		_sectorArray set [2,0];
	},
	[_sectorPos,_crateClass,_radius,_buildingsLost,_chosenSector,_marker,_sectorName],
	1800,
	{
		params ["","","","","_chosenSector","_marker","_name"];

		deleteMarker _marker;
		[format["You took too long to deliver supplies to %1.",_name],"failedNotif","Repair Request"] remoteExecCall ["AW_fnc_notify",-2];

		private _index = AW_sectorDetails findIf {_x select 0 isEqualTo _chosenSector};
		private _sectorArray = AW_sectorDetails select _index;
		_sectorArray set [2,0];
	}
] call CBA_fnc_waitUntilAndExecute;