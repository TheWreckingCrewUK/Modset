/*
* Author(s): [TWC] Hobbs
* AI combat movement code

* Arguments:
* <group> group
*
* Return Value:
* <NONE>
*
* Example:
* [_group] spawn TWC_fnc_aiscramble;
*
* Public: No
*/

params ["_group", "_supponly"];

if (isnil "_supponly") then {
	_supponly = 0;
};

_check = missionnamespace getvariable ["twc_stopscramble", 0];
if (_check == 1) exitwith {};

_check = _group getvariable ["twc_isscrambling", 0];
if (_check == 1) exitwith {};
_group setvariable ["twc_isscrambling", 1];

//leader works from both group and unit, so someone could put a unit into scramble and it would still work
_unit = leader _group;

if ((vehicle _unit) != _unit) then {
_ind = (vehicle _unit) addEventHandler ["FiredNear", {
	params ["_unito"];
	_unit = leader (gunner _unito);
	if (((group _unit) getvariable ["twc_aiscramkey", 0]) == 0) then {
		_supponly = _unit getvariable ["twc_scram_supponly", 0];
		[_unit, _supponly] spawn TWC_fnc_aiscramblenew;
	};
	_ind = (_unito) getvariable ["twc_aiehindex", 0];
	(_unito) removeEventHandler ["FiredNear", _ind];
}];

(vehicle _unit) setvariable ["twc_aiehindex", _ind];


_ind = (vehicle _unit) addEventHandler ["hit", {
	params ["_unito"];
	_unit = leader (gunner _unito);
	if (((group _unit) getvariable ["twc_aiscramkey", 0]) == 0) then {
		_supponly = _unit getvariable ["twc_scram_supponly", 0];
		[_unit, _supponly] spawn TWC_fnc_aiscramblenew;
	};
	_ind = (_unito) getvariable ["twc_aiehitindex", 0];
	(_unito) removeEventHandler ["hit", _ind];
	
}];

(vehicle _unit) setvariable ["twc_aiehitindex", _ind];
};


{
	_x setvariable ["twc_scram_supponly", _supponly];
	_ind = _x addEventHandler ["FiredNear", {
	params ["_unit"];
	if (((group _unit) getvariable ["twc_aiscramkey", 0]) == 0) then {
		_supponly = _unit getvariable ["twc_scram_supponly", 0];
		[_unit, _supponly] spawn TWC_fnc_aiscramblenew;
	};
	{
		_ind = _x getvariable ["twc_aiehindex", 0];
		_x removeEventHandler ["FiredNear", _ind];
	} foreach (units (group _unit));
}];

_x setvariable ["twc_aiehindex", _ind];
} foreach (units (group _unit));