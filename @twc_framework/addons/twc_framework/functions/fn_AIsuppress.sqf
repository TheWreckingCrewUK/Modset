/*
* Author(s): [TWC] Hobbs
* AI combat code, called by the scramble function

* Arguments:
* <object> Insurgent group leader
*
* Return Value:
* <NONE>
*
* Example:
* [leader _group] spawn TWC_fnc_aisuppress;
*
* Public: No
*/

//Recieved Parameters
params ["_unit"];


_unit setvariable ["twc_aisuppression", 1, true];



_inittime = _unit getvariable ["twc_ai_inittime", -5];
if (_inittime == -5) then {
	_unit setvariable ["twc_ai_inittime", time];
};

while {((getSuppression _unit) < 0.02) && ((getSuppression _unit) > (-0.02)) && (alive _unit)} do {
	
	sleep 1;
};
if (!(alive _unit)) exitwith {};


_enemy = _unit findnearestenemy _unit;
if (_enemy == objnull) then {
	_enemy = allplayers call bis_fnc_selectrandom;
};

if ((_enemy distance _unit) < 80) exitwith {
	[_unit, _enemy] spawn TWC_fnc_aisuppresscqb;
};

_debug = missionnamespace getvariable ["twcdb", 0];

if (_debug == 1) then {
	systemchat ("2logic testmod" + str random 1);
};

_ogroup = group _unit;




_ngroup = creategroup [civilian, true];


_check = 0;
_npos = getpos _enemy;
_radius = 20;
while {(_check == 0) && (_radius < 100)} do {
	_npos = [_unit, 10, _radius, 5, 0, 20, 0] call BIS_fnc_findSafePos;
	_npos2 = AtlToAsl ([_npos select 0,_npos select 1, (7 + (random 3))]);
	_vis = [objNull, "VIEW"] checkVisibility [(GETPosasl _enemy) vectoradd [0,0,(3 + (random 7))], _npos2];
	
	if (_vis == 0) then {
		_check = 1;
	} else {
		_radius = _radius + 2;
	};
};


if ((count units _ogroup) < 3) then {

	[_ogroup] spawn {
		params ["_ogroup"];
		_placeholderunit = objnull;
		_utype = "O_Survivor_F";
		if ((side leader _ogroup) == west) then {
			_utype = "B_Survivor_F";
		};
		if ((side leader _ogroup) == independent) then {
			_utype = "I_Survivor_F";
		};
		_placeholderunit = (_ogroup createUnit [_utype, ((getpos (leader _ogroup)) vectoradd [0,0, 20000]), [], 0, "FORM"]);
		hideobject _placeholderunit;
		_placeholderunit allowdamage false;
		_placeholderunit disableai "all";
		sleep 40;
		deletevehicle _placeholderunit;
	};
};

_unit domove _npos;
[_unit] joinsilent _ngroup;
_unit domove _npos;

_unit disableai "target";
_unit disableai "autotarget";
_unit disableai "checkvisible";

_unit domove _npos;


_unit setspeedmode "full";
(group _unit) setBehaviour "combat";
_time = (_unit distance _npos) min (5 + (random 10));
sleep _time;
[_unit] joinsilent _ogroup;

_unit enableai "target";
_unit enableai "autotarget";
_unit enableai "checkvisible";
_unit setspeedmode "auto";
(group _unit) setBehaviour "combat";


[_unit, _enemy] spawn {
params ["_unit", "_oside", "_enemy"];
sleep 4;
if ((side _unit) == civilian) then {
	_oside = _unit getvariable ["twcscram_oside", 0];
	if (_oside == 0) then {
		_oside = east;
	} else {
		if (_oside == 1) then {
			_oside = west;
		} else {
			if (_oside == 2) then {
				_oside = independent;
			};
		};
	};
	_ogroup = creategroup _oside;
	[_unit] joinsilent _ogroup;
	if (isnil "_enemy") then {
		_enemy = objnull;
	};
	if (_enemy != objnull) then {
		_wp1 = _ogroup addwaypoint [getpos _enemy, 10];
	};
};
};

_inittime = _unit getvariable ["twc_ai_inittime", -5];
if (_inittime < (time - 600)) exitwith {
	_unit setvariable ["twc_aisuppression", 0, true];
	_unit setvariable ["twc_ai_inittime", -5];
};

sleep 5;
[_unit, _inittime] spawn TWC_fnc_aisuppress;
