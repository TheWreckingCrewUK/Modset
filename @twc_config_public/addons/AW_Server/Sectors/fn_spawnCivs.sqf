/*
	File: fn_spawnCivs.sqf
	Author: Dom
	Description: Spawns in civilians, sets them to wander about and monitors them
*/
params [
	["_sectorPosition",[],[[]]],
	["_maxCount",1,[0]],
	["_sector","",[""]],
	["_radius",150,[0]]
];

private _civTypes = getArray(missionConfigFile >> "Civilian_Setup" >> "AW_civilianTypes");
private _count = (ceil random _maxCount) max (_maxCount / 2);

private _groups = [];
for "_i" from 1 to _count do {
	private _group = createGroup [civilian,true];
	private _className = selectRandom _civTypes;
	private _position = ["civilianSector",_sectorPosition,[_radius,_className]] call AW_fnc_findSafePosition;
	if (_position isEqualTo []) exitWith {[format["Civ could not be spawned at %1",_sector]] call AW_fnc_logIt};
	_group createUnit [_className,_position,[],10,"NONE"];
	[_group] call CBA_fnc_clearWaypoints;
	_groups pushBack _group;
};
[_groups,_sectorPosition,_radius] call AW_fnc_initSectorPatrol;

[
	{
		params ["_sector","_sectorPosition"];
		!(_sector in AW_activeSectors) &&
		{(playableUnits findIf {_x distance _sectorPosition < 500}) isEqualTo -1} //no players nearby
	},
	{
		params ["_sector","_sectorPosition","_groups"];

		{
			if !(isNull _x) then {
				{
					if (alive _x) then {
						deleteVehicle _x;
					};
				} forEach units _x;
			};
		} forEach _groups;
	},
	[_sector,_sectorPosition,_groups]
] call CBA_fnc_waitUntilAndExecute;