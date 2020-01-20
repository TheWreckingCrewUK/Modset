params ["_target", "_selectionName"];

_part = -1;

_part = switch _selectionName do {
	case "head": {0};
	case "body": {1};
	case "leftarm": {2};
	case "rightarm": {3};
	case "leftleg": {4};
	case "rightleg": {5};
};
if (_part < 0) exitWith { false; };

_openWounds = _target getVariable ['ACE_Medical_openWounds', []];
_bandagedWounds = _target getVariable ['ACE_Medical_bandagedWounds', []];

// no wounds at all!
if (((count _openWounds) + (count _bandagedWounds)) < 1) exitWith { [false, []]; };

_openWoundBLTopRate = 0;
_bestOpenWound = [];

// always prioritise open wounds first
if ((count _openWounds) > 0) then {
	{
		_x params ["_classID", "_partX", "_impact", "_bloodlossRate"];

		if (_partX == _part) then {
			if (_impact != 0 && _bloodlossRate != 0) then {
				// it's a bleeding wound, that's not been treated...
				
				if (_openWoundBLTopRate < _bloodlossRate) then {
					_openWoundBLTopRate = _bloodlossRate;
					_bestOpenWound = _x;
				};
			};
		};
	} forEach _openWounds;
};

if (_openWoundBLTopRate != 0) exitWith { [true, _bestOpenWound]; };

_bandagedWoundBLTopRate = 0;
_bestBandagedWound = [];

{
	_x params ["_classID", "_partX", "_impact", "_bloodlossRate"];
	
	if (_partX == _part) then {
		if (_impact != 0 && _bloodlossRate != 0) then {

			if (_bandagedWoundBLTopRate < _bloodlossRate) then {
				_bandagedWoundBLTopRate = _bloodlossRate;
				_bestBandagedWound = _x;
			};
		};
	};
} forEach _bandagedWounds;

if (_bandagedWoundBLTopRate != 0) exitWith { [false, _bestBandagedWound]; };
[false, []];