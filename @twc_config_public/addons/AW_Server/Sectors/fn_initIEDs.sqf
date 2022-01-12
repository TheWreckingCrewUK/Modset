/*
	File: fn_initIEDs.sqf
	Author: Dom
	Description: Sets up IEDs in a sector
*/
params [
	["_position",[],[[]]],
	["_count",1,[0]],
	["_sector","",[""]]
];

private _iedTypes = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforMines");
private _roads = _position nearRoads 150;

for "_i" from 1 to _count do {
	private _iedClass = selectRandom _iedTypes;
	private _chosenRoad = selectRandom _roads;
	private _ied = createMine [_iedClass,(_chosenRoad getPos [random 5,random 360]),[],0];
	_ied setDir (random 360);
	AW_activeIEDs pushBack [_ied,_sector];
};

if (AW_iedMonitorHandle isEqualTo -1) then {
	AW_iedMonitorHandle = [
		{
			if (AW_activeIEDs isEqualTo []) exitWith {
				[_this select 1] call CBA_fnc_removePerFrameHandler;
				AW_iedMonitorHandle = -1;
			};

			private _toDelete = [];
			{
				_x params ["_iedObject","_sector"];
				if (isNull _iedObject || {!(mineActive _iedObject) || {!(_sector in AW_activeSectors)}}) then {
					_toDelete pushBack _forEachIndex;
				};

				private _nearUnits = playableUnits findIf {(_iedObject distance _x) < 5};
				if (_nearUnits isNotEqualTo -1) then {
					_iedObject setDamage 1;
					_toDelete pushBack _forEachIndex;
				};
			} forEach AW_activeIEDs;

			reverse _toDelete;
			{
				AW_activeIEDs deleteAt _x;
			} forEach _toDelete;
		},
		0.5
	] call CBA_fnc_addPerFrameHandler;
};