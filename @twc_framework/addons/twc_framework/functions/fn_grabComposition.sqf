params ["_pos", "_radius"];

_objs = nearestObjects [_pos, ["All"], _radius];

//First filter illegal objects
_allDynamic = allMissionObjects "All";

{
	//Exclude non-dynamic objects (world objects)
	private ["_excludeFlag"];

	_excludeFlag = false;
	if (_x in _allDynamic) then {
		//Exclude characters
		private ["_sim"];
		_sim = getText (configFile >> "CfgVehicles" >> (typeOf _x) >> "simulation");

		if (_sim in ["soldier"]) then {
			_excludeFlag = true;
		};
	} else {
		_excludeFlag = true;
	};

	if (_x == player) then {
		_excludeFlag = true;
	};
	
	if (_excludeFlag) then {
		_objs set [_forEachIndex, -1];
	};
} forEach _objs;

_objs = _objs - [-1];

//Formatting for output
private ["_br", "_tab", "_outputText"];
_br = "
";
_tab = " ";

// Start the output


//Process non-filtered objects
_objectsToSave = [];
_linesOfText = [];
_currentObjectNumber = 0;

{
	_type = typeOf _x;
	_offset = (position _x) vectorDiff _pos;

	if (_offset select 2 < 0.01) then {
		// Round off things less than a cm different from the Z-pos of the anchor
		_offset set [2, 0];
	};

	_azimuth = direction _x;
	
	_classText = format ["class Object%1 {side=8;rank="""";vehicle=""%2"";position[]={%3,%4,%5};dir=%6;};", _currentObjectNumber, _type, _offset select 0, _offset select 1, _offset select 2, _azimuth];
	_linesOfText pushBack _classText;
	
	_currentObjectNumber = _currentObjectNumber + 1;
} forEach _objs;

_outputText = "
class NEW_COMPOSITION_NAME
{
	name=""Zeus Display Name"";
";

{
	_outputText = _outputText + "    ";
	_outputText = _outputText + _x;
	_outputText = _outputText + _br;
	diag_log _x;
} forEach _linesOfText;

_outputText = _outputText + _br;
_outputText = _outputText + "};";
diag_log _outputText;