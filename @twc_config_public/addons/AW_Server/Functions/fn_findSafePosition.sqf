/*
	File: fn_findSafePosition.sqf
	Author: Dom
	Description: Finds a position to spawn a FOB or objective
	"HIDE" is key to stop NPC's spawning in rocks
*/
params [
	["_type","",[""]],
	["_startPos",[],[[]]],
	["_data",[],[[],0]]
];

private _position = [];
switch _type do {
	case "BluforFOB": {
		private _radius = (getNumber(missionConfigFile >> "Core_Settings" >> "AW_sectorActivationRange") * 1.25);
		while {_position isEqualTo []} do {
			private _testPos = _startPos getPos [random (worldSize / 2),random 360];

			if (
				_testPos isFlatEmpty [-1,-1,0.1,5,0,false,objNull] isNotEqualTo [] &&
				{lineIntersectsSurfaces [AGLtoASL _testPos,AGLToASL _testPos vectorAdd [0,0,15],objNull,objNull,false,1,"GEOM","NONE"] isNotEqualTo [] &&
				{nearestTerrainObjects [_testPos,[],25,false] isEqualTo [] &&
				{AW_allSectors findIf {(markerPos _x) distance _testPos < _radius} isEqualTo -1}}}
			) then {
				_position = _testPos;
			};
		};
	};
	case "opforVehicle": {
		_data params ["_maxRadius",["_className","Land_HelipadEmpty_F"]];
		while {_position isEqualTo []} do {
			private _testPos = _startPos getPos [random _maxRadius,random 360] findEmptyPosition [0,_maxRadius,_className];
			
			if (
				_testPos isNotEqualTo [] &&
				{!surfaceIsWater _testPos &&
				{nearestObjects [_testPos,["LandVehicle","Building"],12,true] isEqualTo [] &&
				{((nearestTerrainObjects [_testPos,["HIDE"],20,false]) findIf {"stone" in str(_x)}) isEqualTo -1}}}
			) then {
				_position = _testPos;
			};
		};
	};
	case "opforSquad": {
		while {_position isEqualTo []} do { //_data is max radius in this case
			private _testPos = _startPos getPos [random _data,random 360] findEmptyPosition [0,_data,"Land_HelipadEmpty_F"];
			
			if (
				_testPos isNotEqualTo [] &&
				{!surfaceIsWater _testPos &&
				{((nearestTerrainObjects [_testPos,["HIDE"],20,false]) findIf {"stone" in str(_x)}) isEqualTo -1}}
			) then {
				_position = _testPos;
			};
		};
	};
	case "civilianSector": {
		_data params ["_maxRadius",["_className","Land_HelipadEmpty_F"]];
		while {_position isEqualTo []} do {
			private _testPos = _startPos getPos [random _maxRadius,random 360] findEmptyPosition [0,_maxRadius,_className];
			
			if (
				_testPos isNotEqualTo [] &&
				{!surfaceIsWater _testPos &&
				{((nearestTerrainObjects [_testPos,["HIDE"],20,false]) findIf {"stone" in str(_x)}) isEqualTo -1}}
			) then {
				_position = _testPos;
			};
		};
	};
	case "neutralObjective": {
		private _radius = getNumber(missionConfigFile >> "Core_Settings" >> "AW_sectorActivationRange");
		while {_position isEqualTo []} do {
			private _testPos = _startPos getPos [random (worldSize / 2),random 360];
			_testPos params ["_xPos","_yPos"];

			if (
				!surfaceIsWater _testPos &&
				{_testPos isFlatEmpty [-1,-1,0.1,5,0,false,objNull] isNotEqualTo [] &&
				{lineIntersectsSurfaces [AGLtoASL _testPos,AGLToASL _testPos vectorAdd [0,0,15],objNull,objNull,false,1,"GEOM","NONE"] isNotEqualTo [] &&
				{nearestTerrainObjects [_testPos,["HIDE","BUILDING","TREE","ROCK","ROCKS"],15,false] isEqualTo [] &&
				{AW_allSectors findIf {(markerPos _x) distance _testPos < _radius} isEqualTo -1 && 
				{AW_fobDetails findIf {(_x select 1) distance _testPos < 1000} isEqualTo -1 &&
				{_xPos > 0 && {_xPos < worldSize &&
				{_yPos > 0 && {_yPos < worldSize}}}}}}}}}
			) exitWith {
				_position = _testPos;
			};
		};
	};
	case "opforObjective": {
		private _sectors = ([AW_bluforSectors] call AW_fnc_findFrontlineSectors) apply {markerPos _x};
		[_sectors,true] call CBA_fnc_shuffle;

		private _radius = getNumber(missionConfigFile >> "Core_Settings" >> "AW_sectorActivationRange");
		private _mapFactor = getNumber(missionConfigFile >> "Core_Settings" >> "AW_secondaryMapFactor");

		{
			while {_position isEqualTo []} do {
				private _testPos = _x getPos [random (worldSize / _mapFactor),random 360];
				_testPos params ["_xPos","_yPos"];

				if (
					!surfaceIsWater _testPos &&
					{_testPos isFlatEmpty [-1,-1,0.2,20,0,false,objNull] isNotEqualTo [] &&
					{nearestTerrainObjects [_testPos,["HIDE","BUILDING","TREE","ROCKS"],30,false] isEqualTo [] &&
					{AW_allSectors findIf {(markerPos _x) distance _testPos < _radius} isEqualTo -1 && 
					{AW_fobDetails findIf {(_x select 1) distance _testPos < 2000} isEqualTo -1 &&
					{AW_bluforSectors findIf {(markerPos _x) distance _testPos < (_radius * 2)} isEqualTo -1 &&
					{_xPos > 0 && {_xPos < worldSize &&
					{_yPos > 0 && {_yPos < worldSize}}}}}}}}}
				) then {
					_position = _testPos;
				};
			};
		} forEach _sectors;
	};
};

_position;