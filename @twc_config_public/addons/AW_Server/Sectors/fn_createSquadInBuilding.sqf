/*
	File: fn_createSquad.sqf
	Author: Dom
	Description: Creates the squad pulled from the config
*/
params [
	["_type","AW_opforBasicSquad",[""]],
	["_positions",[],[[]]],
	["_count",1,[0]],
	["_radius",10,[0]],
	["_delaySpawn",false,[true]]
];

private _squadComposition = getArray(missionConfigFile >> "Opfor_Setup" >> _type);
private _group = createGroup [east,true];
[_group] call CBA_fnc_clearWaypoints;

for "_i" from 0 to (_count - 1) do {
	private _position = _positions select _i;
	if (_delaySpawn && {_i isNotEqualTo 0}) then {
		[
			{
				params ["_grp","_pos","_class","_radius"];
				private _unit = [_grp,east,_class,_pos,_radius,"CAN_COLLIDE"] call AW_fnc_createUnit;
				_unit setPosATL _pos;
				_unit disableAI "PATH";
			},
			[_group,_position,(selectRandom _squadComposition),_radius],
			(0.5 * _i)
		] call CBA_fnc_waitAndExecute;
	} else {
		private _unit = [_group,east,selectRandom _squadComposition,_position,_radius,"CAN_COLLIDE"] call AW_fnc_createUnit;
		_unit setPosATL _position;
		_unit disableAI "PATH";
	};
};

_group;