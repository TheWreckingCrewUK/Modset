params ["_modulePos", "_units", ["_radius", 0]];

{
	if (_radius == 0) then {
		["ace_zeus_suppressiveFire", [_x, (getPosASL _modulePos), ""], _x] CBA_fnc_targetEvent;
	} else {
		_pos = [[[position _modulePos, _radius]], []] call BIS_fnc_randomPos;
		["ace_zeus_suppressiveFire", [_x, (getPosASL _pos), ""], _x] CBA_fnc_targetEvent;
	};
} forEach _units;

//thisList, (thisTrigger getVariable ""radius""), (thisTrigger getVariable ""units"")