/*
	File: fn_createSquad.sqf
	Author: Dom
	Description: Creates the squad pulled from the config
*/
params [
	["_type","AW_opforBasicSquad",[""]],
	["_position",[],[[]]],
	["_radius",150,[0]],
	["_delaySpawn",false,[true]]
];

private _spawnPosition = ["opforSquad",_position,_radius] call AW_fnc_findSafePosition;
if (_spawnPosition isEqualTo []) exitWith {[format["Squad could not be spawned at %1",_position]] call AW_fnc_logIt; grpNull};

private _squadComposition = getArray(missionConfigFile >> "Opfor_Setup" >> _type);
private _group = createGroup [east,true];
[_group] call CBA_fnc_clearWaypoints;

{
	if (_delaySpawn && {_forEachIndex isNotEqualTo 0}) then {
		[
			{
				params ["_grp","_class","_pos"];
				[_grp,east,_class,_pos,10] remoteExecCall ["AW_fnc_createUnit",groupOwner _grp];
			},
			[_group,_x,_spawnPosition],
			(0.5 * _forEachIndex)
		] call CBA_fnc_waitAndExecute;
	} else {
		[_group,east,_x,_spawnPosition,10] call AW_fnc_createUnit;
	};
} forEach _squadComposition;

private _time = 0.1;
if (_delaySpawn) then {_time = (count _squadComposition) * 0.6};
[
	{
		params ["_group"];
		{
			_x doFollow (leader _group);
		} forEach (units _group);
	},
	[_group],
	_time
] call CBA_fnc_waitAndExecute;

_group;