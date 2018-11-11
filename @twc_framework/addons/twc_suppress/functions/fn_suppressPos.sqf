params ["_modulePos", "_units", ["_radius", 0]];

{
	if (_radius == 0) then {
		_modulePos = getPosASL _modulePos;
		["ace_zeus_suppressiveFire", [_x, _modulePos, ""], _x] call CBA_fnc_targetEvent;
	} else {
		_pos = getPosASL ([[[position _modulePos, _radius]], []] call BIS_fnc_randomPos);
		["ace_zeus_suppressiveFire", [_x, _pos, ""], _x] call CBA_fnc_targetEvent;
	};
} forEach _units;

//thisList, (thisTrigger getVariable ""radius""), (thisTrigger getVariable ""units"")