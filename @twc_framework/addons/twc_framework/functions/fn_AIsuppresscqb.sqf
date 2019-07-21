/*
* Author(s): [TWC] Hobbs
* AI combat code

* Arguments:
* <object> group leader
*CQB variant, to keep things moving in close quarters
* Return Value:
* <NONE>
*
* Example:
* [leader _group] spawn TWC_Core_fnc_aiscramble;
*
* Public: No
*/

//Recieved Parameters
params ["_unit", ["_inittime", time], "_enemy"];

systemchat "mod cqb";

_ogroup = group _unit;

if (isnil "_enemy") then {
	_enemy = (allplayers call bis_fnc_selectrandom);
};

/* if (isnull "_enemy") then {
	_enemy = (allplayers call bis_fnc_selectrandom);
}; */

_check = 0;
_npos = getpos _enemy;
_radius = 15;
while {(_check == 0) && (_radius < 100)} do {
	_npos = [_unit, 10, _radius, 5, 0, 20, 0] call BIS_fnc_findSafePos;
	_npos2 = AtlToAsl ([_npos select 0,_npos select 1, (7 + (random 3))]);
	_vis = [objNull, "VIEW"] checkVisibility [(GETPosasl _enemy) vectoradd [0,0,(7 + (random 7))], _npos2];
	//_vis = lineIntersects [(GETPos _enemy) vectoradd [0,0,(1 + (random 3))], (_npos2), _enemy, _unit];
	if (_vis == 0) then {
		_check = 1;
	} else {
		_radius = _radius + 2;
	};
};

//if (_check == 0) exitwith {_unit setvariable ["twc_aisuppression", 0];};

_unit domove _npos;
_unit domove _npos;
_unit setspeedmode "full";
sleep (4 + random 10);
_unit setspeedmode "auto";
_unit reveal [_enemy, 1.5];
if ((random 1) > 0.2) then {
	//[[_npos select 0,_npos select 1, 1], nil, [_unit], 3, 1, false, false] call ace_ai_fnc_garrison;
};



sleep 3;

[_unit, _inittime] spawn TWC_fnc_aisuppress;
