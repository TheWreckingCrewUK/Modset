#include "\z\ace\addons\main\script_macros.hpp"
#include "\z\ace\addons\medical_engine\script_macros_medical.hpp"

params ["_target", "_selectionName"];

_part = ["head", "body", "leftarm", "rightarm", "leftleg", "rightleg"] find toLower _selectionName;//ALL_BODY_PARTS find toLower _selectionName;
if (_part < 0) exitWith { false; };

_openWounds = _target getVariable ["ace_medical_openWounds", []];//GET_OPEN_WOUNDS(_target);
_bandagedWounds = _target getVariable ["ace_medical_bandagedWounds", []];//GET_BANDAGED_WOUNDS(_target);

// no wounds at all!
if (((count _openWounds) + (count _bandagedWounds)) < 1) exitWith { [false, []]; };

_openWoundBLTopRate = 0;
_bestOpenWound = [];

// always prioritise open wounds first
if (({_x select 2 > 0} count _openWounds) > 0) then {
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