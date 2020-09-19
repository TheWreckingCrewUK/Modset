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

_unit = leader _group;

_noscram = missionnamespace getvariable ["twc_noscram", false];

if (_noscram) exitwith {};


_simplemode = missionnamespace getvariable ["twc_simplescramble", true];


if (_simplemode) exitwith {
	{
		_x addEventHandler ["AnimChanged", {
			params ["_unit"];
			
			if ((getSuppression _unit) > 0.02) then {
				_canmove = _unit getvariable ["twc_scramble_canmove", false];
				if (!_canmove) exitwith {};
				
				_unit setvariable ["twc_scramble_canmove", true];
				
				_enemy = _enemy findnearestenemy (getpos _enemy);
				if (isnil "_enemy") then {
					_enemy = selectrandom allplayers;
				};
				
				_npos = [leader _unit, 5, ((count (units _group)) * 7), 5, 0, 20, 0] call BIS_fnc_findSafePos;
				
				_check = lineIntersectsSurfaces [(eyepos _enemy), [_npos select 0, _npos select 1, 2], _enemy, (vehicle _enemy)];
				
				_attempts = 0;
				
				while {(_attempts < 5) && ((count _check) == 0)} do {
					_npos = [_unit, 10, 100, 5, 0, 20, 0] call BIS_fnc_findSafePos;
					
					_check = lineIntersectsSurfaces [(eyepos _enemy), [_npos select 0, _npos select 1, 2], _enemy, (vehicle _enemy)];
					_attempts = _attempts + 1;
				};
				if ((count _check) == 0) exitwith {};
				[[_unit]] call ace_ai_fnc_unGarrison;
				
				if ((_unit distance _enemy) > 100) then {
					[_unit, _npos] spawn {
						params ["_unit", "_npos"];
						_oldgroup = (group _unit);
						_placeholder = _oldgroup createunit ["B_UAV_AI", [0,0,1000]];
						_newgroup = creategroup civilian;
						[_unit] joinsilent _newgroup;
						_unit domove _npos;
				//		systemchat ("joined " + (str _newgroup));
						
						_timeout = time + ((((_unit distance _npos) * 0.05) min 30) + (random 8));
						while {((_unit distance _npos) > 3) && (time < _timeout)} do {
							sleep 2;
						};
				//		systemchat ("returned to " + (str _oldgroup));
						[_unit] joinsilent _oldgroup;
						deletevehicle _placeholder;
					};
				} else {
					_timeout = time + ((((_unit distance _npos) * 0.05) min 30) + (random 8));
					while {((_unit distance _npos) > 3) && (time < _timeout)} do {
						sleep 2;
					};
					_unit setvariable ["twc_scramble_canmove", true];
				};
				
				
				_unit domove _npos;
			};
		}];
		_x addEventHandler ["FiredNear", {
			params ["_unit"];
			
			if ((getSuppression _unit) > 0.02) then {
				_canmove = _unit getvariable ["twc_scramble_canmove", false];
				if (!_canmove) exitwith {};
				
				_unit setvariable ["twc_scramble_canmove", true];
				
				_enemy = _enemy findnearestenemy (getpos _enemy);
				if (isnil "_enemy") then {
					_enemy = selectrandom allplayers;
				};
				
				_npos = [leader _unit, 5, ((count (units _group)) * 7), 5, 0, 20, 0] call BIS_fnc_findSafePos;
				
				_check = lineIntersectsSurfaces [(eyepos _enemy), [_npos select 0, _npos select 1, 2], _enemy, (vehicle _enemy)];
				
				_attempts = 0;
				
				while {(_attempts < 5) && ((count _check) == 0)} do {
					_npos = [_unit, 10, 100, 5, 0, 20, 0] call BIS_fnc_findSafePos;
					
					_check = lineIntersectsSurfaces [(eyepos _enemy), [_npos select 0, _npos select 1, 2], _enemy, (vehicle _enemy)];
					_attempts = _attempts + 1;
				};
				if ((count _check) == 0) exitwith {};
				[[_unit]] call ace_ai_fnc_unGarrison;
				_unit domove _npos;
				
				_timeout = time + ((((_unit distance _npos) * 0.05) min 30) + (random 8));
				while {((_unit distance _npos) > 3) && (time < _timeout)} do {
					sleep 2;
				};
				_unit setvariable ["twc_scramble_canmove", true];
			};
		}];
	} foreach (units _group);

};


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

_ind = (_unit) addEventHandler ["FiredNear", {
	params ["_unito"];
	_unit = leader (gunner _unito);
	if (((group _unit) getvariable ["twc_aiscramkey", 0]) == 0) then {
		_supponly = _unit getvariable ["twc_scram_supponly", 0];
		[_unit, _supponly] spawn TWC_fnc_aiscramblenew;
	};
	_ind = (_unito) getvariable ["twc_aiehindex", 0];
	(_unito) removeEventHandler ["FiredNear", _ind];
}];

(_unit) setvariable ["twc_aiehindex", _ind];


_ind = (_unit) addEventHandler ["hit", {
	params ["_unito"];
	_unit = leader (gunner _unito);
	if (((group _unit) getvariable ["twc_aiscramkey", 0]) == 0) then {
		_supponly = _unit getvariable ["twc_scram_supponly", 0];
		[_unit, _supponly] spawn TWC_fnc_aiscramblenew;
	};
	_ind = (_unito) getvariable ["twc_aiehitindex", 0];
	(_unito) removeEventHandler ["hit", _ind];
	
}];

(_unit) setvariable ["twc_aiehitindex", _ind];



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
