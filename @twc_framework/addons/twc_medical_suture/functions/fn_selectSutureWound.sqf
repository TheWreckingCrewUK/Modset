#include "\z\ace\addons\medical_engine\script_macros_medical.hpp"

params ["_target", "_selectionName"];

_part = ALL_BODY_PARTS find toLower _selectionName;
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
		_x params ["_classID", "_partX", "", "_bloodlossRate", "_impact"];

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

//hint str _bestOpenWound;
if (_openWoundBLTopRate != 0) exitWith { [true, _bestOpenWound]; };

_bandagedWoundBLTopRate = 0;
_bestBandagedWound = [];

{
	_x params ["_classID", "_partX", "", "_bloodlossRate", "_impact"];
	
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