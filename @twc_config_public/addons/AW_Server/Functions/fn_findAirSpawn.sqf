/*
	File: fn_findAirSpawn.sqf
	Author: Dom
	Description: Finds the most suitable air spawn depending on where most enemies are
*/
params [
	["_side",east,[east]],
	["_height",250,[0]]
];

private _units = allUnits select {alive _x && {side _x isEqualTo _side}};
private _quarterLength = worldSize / 2;
private _bottomLeftCount = 0;
private _bottomRightCount = 0;
private _topLeftCount = 0;
private _topRightCount = 0;

{
	(getPosATL _x) params ["_xPos","_yPos"];
	if (_xPos > _quarterLength) then {
		if (_yPos > _quarterLength) then {
			_topRightCount = _topRightCount + 1;
		} else {
			_bottomRightCount = _bottomRightCount + 1;
		};
	} else {
		if (_yPos > _quarterLength) then {
			_topLeftCount = _topLeftCount + 1;
		} else {
			_bottomLeftCount = _bottomLeftCount + 1;
		};
	};
} forEach _units;

private _countArray = [_bottomLeftCount,_bottomRightCount,_topLeftCount,_topRightCount];
private _posArray = [[0,0,_height],[worldSize,0,_height],[0,worldSize,_height],[worldSize,worldSize,_height]];
private _index = (_countArray call CBA_fnc_findMax) select 1;

(_posArray select _index)