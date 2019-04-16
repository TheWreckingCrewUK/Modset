params ["_args", ["_side", "left"]];

private _unit = _args select 1;
private _parent = objectParent _unit;

private _bbr = boundingBoxReal _parent;
private _width = abs((_bbr select 0 select 0) - (_bbr select 1 select 0)) + 0.1;
private _pos = getPos _parent;
private _dirvic = getDir _parent;

moveOut _unit;
unassignVehicle _unit;

switch (_side) do {
	case "right" : {
		private _movedir = _dirvic + 90;
		_unit setDir _movedir;
		_unit setpos (_pos vectorAdd [0.25 * _width * sin (_movedir), 0.25 * _width * cos (_movedir), 0]);
	};
	
	case "left" : {
		private _movedir = _dirvic + -90;
		_unit setDir _movedir;
		_unit setpos (_pos vectorAdd [0.25 * _width * sin (_movedir), 0.25 * _width * cos (_movedir), 0]);
	};
};
