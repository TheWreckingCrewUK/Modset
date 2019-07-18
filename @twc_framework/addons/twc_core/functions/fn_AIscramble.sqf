/*
* Author(s): [TWC] Hobbs
* AI combat movement code

* Arguments:
* <object> group leader
*
* Return Value:
* <NONE>
*
* Example:
* [leader _group] spawn TWC_Core_fnc_aiscramble;
*
* Public: No
*/

//Recieved Parameters
params ["_leader", ["_key", 100]];

//making sure only one instance is run on a group at a time
_group = group _leader;

_keycheck = _group getvariable ["twc_aikey", 101];

if (_keycheck == 101) then {
	_key = random 50;
	_group setvariable ["twc_aikey", _key];
} else {
	if (!(_keycheck == _key)) exitwith {systemchat "bad key";};
};

while {!((behaviour _leader) == "combat")} do {
	sleep (10 + (random 10));
};

_leader = leader _leader;

_group setSpeedMode "full";
_enemy = _leader findnearestenemy _leader;

{
	if ((_x getvariable ["twc_aisuppression", 0]) == 0) then {
		[_x] spawn TWC_Core_fnc_aisuppress;
	};
} foreach units _group;

[(units _group)] call ace_ai_fnc_unGarrison;
{
	[_enemy, _x] spawn {
		params ["_enemy", "_unit"];
		_check = 0;
		_pos = getpos _enemy;
		_radius = 20;
		while {(_check == 0) && (_radius < 250)} do {
			_pos = [_unit, 1, _radius, 10, 0, 20, 0] call BIS_fnc_findSafePos;
			_pos2 = AtlToAsl ([_pos select 0,_pos select 1, (1 + (random 3))]);
			_vis = [objNull, "VIEW"] checkVisibility [(GETPosasl _enemy) vectoradd [0,0,(1 + (random 7))], _pos2];
			//_vis = lineIntersects [(GETPos _enemy) vectoradd [0,0,(1 + (random 3))], (_pos2), _enemy, _unit];
			if (_vis == 0) then {
				_check = 1;
			} else {
				_radius = _radius + 5;
			};
		};
		if (_check == 1) then {
			sleep (random 30);
			_unit enableai "path";
			_unit domove _pos;
			
			[_unit, _pos] spawn {
				params ["_unit", "_pos"];
				[[_unit]] call ace_ai_fnc_unGarrison;
				sleep 3;
				[[_unit]] call ace_ai_fnc_unGarrison;
				if ((random 1) > 0.3) then {
					sleep 10;
					[[_pos select 0,_pos select 1, 1], nil, [_unit], 10, 1, true, false] call ace_ai_fnc_garrison;
				};
			};
			
			
		} else {
			if ((leader group _unit) == _unit) then {
			};
		};
	};
} foreach units _group;

sleep 40;

if ((count units _group)> 0) then {
	[leader _group, _key] spawn TWC_Core_fnc_aiscramble;
};