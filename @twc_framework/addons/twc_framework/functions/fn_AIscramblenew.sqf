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
* [leader _group] spawn TWC_fnc_aiscramblenew;
*
* Public: No
*/
CIVILIAN setFriend [EAST, 1];
CIVILIAN setFriend [WEST, 1];
CIVILIAN setFriend [INDEPENDENT, 1];

//Recieved Parameters
params ["_leader", ["_supponly", 0]];
sleep 2;
//making sure only one instance is run on a group at a time
_group = group _leader;

_checker = leader _group;
/*
if ((behaviour (_checker)) != ("COMBAT")) exitwith {
	_group setvariable ["twc_aiscramkey", 0, true];
};	
*/
_keycheck = _group getvariable ["twc_aiscramkey", 0];

//if (_keycheck == 1) exitwith {diag_log "bad key";};
_group setvariable ["twc_aiscramkey", (_keycheck + 1), true];

//diag_log ("mangoinitscramble");

_comcheck = 0;
/*
while {_comcheck == 0} do {

	sleep (10 + (random 10));
	_checker = leader _group;
	if ((behaviour (_checker)) == ("COMBAT")) then {
		_comcheck = 1;
	diag_log ("yuppers" + (behaviour (_checker)));
	} else {
	diag_log ("nuppers" + (behaviour (_checker)));
	};
};
*/

//diag_log ("mangocombatscramble");
_leader = leader _leader;

_group setSpeedMode "full";
_enemy = _leader findnearestenemy _leader;

if (_enemy == objnull) then {
	_enemy = allplayers call bis_fnc_selectrandom;
};

{
	if ((_x getvariable ["twc_aisuppression", 0]) == 0) then {
		[_x] spawn TWC_fnc_aisuppress;
//diag_log ("mangostartsuppressfromscramble");
	};
} foreach units _group;

if (_supponly == 1) exitwith {};

[(units _group)] call ace_ai_fnc_unGarrison;
//{[[_x]] call ace_ai_fnc_unGarrison;} foreach (units _group);
{
	//[_enemy, _x] spawn {
		//params ["_enemy", "_unit"];
		_unit = _x;
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
				//[[_unit]] call ace_ai_fnc_unGarrison;
				sleep 3;
				//[[_unit]] call ace_ai_fnc_unGarrison;
				if ((random 1) > 0.3) then {
					sleep 10;
					//[[_pos select 0,_pos select 1, 1], nil, [_unit], 10, 1, true, false] call ace_ai_fnc_garrison;
				};
			};
			
			
		} else {
			if ((leader group _unit) == _unit) then {
			};
		};
	//};
} foreach units _group;

sleep 30;

_group setvariable ["twc_aiscramkey", 0];
if ((count units _group)> 0) then {
	_group setvariable ["twc_aiscramkey", 0, true];
	[leader _group] spawn TWC_fnc_aiscramble;
};