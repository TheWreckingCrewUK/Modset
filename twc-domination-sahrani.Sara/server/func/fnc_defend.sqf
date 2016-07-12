/*Function to make a group defend an area
*/
params["_group","_position","_radius","_threshold"];

if(isNil "_position") then {_position = getPos _group};
if(isNil "_radius") then {_radius = 50};
if(isNil "_threshold") then {_threshold = 2};

if!(local _group) exitWith{hint "Somehow Group was not local to this machine"};

_group enableAttack false;

private ["_count", "_list", "_list2", "_units", "_i"];
_statics = nearestObjects [_position, ["staticWeapon"], _radius];
_buildings = _position nearObjects ["building",_radius];
_units = units _group;
_count = count _units;

{
    if (str(_x buildingpos _threshold) == "[0,0,0]") then {_buildings = _buildings - [_x]};
} foreach _buildings;
_i = 0;
{
    _count = (count _statics) - 1;
    if (random 1 < 0.31 && {_count > -1}) then {
        _x assignasgunner (_statics select _count);
        _statics resize _count;
        [_x] ordergetin true;
        _i = _i + 1;
    } else {
        if (random 1 < 0.93 && {count _buildings > 0}) then {
            private ["_building","_p","_array"];
            _building = _buildings call BIS_fnc_selectRandom;
            _array = _building getvariable "CBA_taskDefend_positions";
            if (isnil "_array") then {
                private "_k"; _k = 0;
                _building setvariable ["CBA_taskDefend_positions",[]];
                while {str(_building buildingpos _k) != "[0,0,0]"} do {
                    _building setvariable ["CBA_taskDefend_positions",(_building getvariable "CBA_taskDefend_positions") + [_k]];
                    _k = _k + 1;
                };
                _array = _building getvariable "CBA_taskDefend_positions";
            };
            if (count _array > 0) then {
                _p = (_building getvariable "CBA_taskDefend_positions") call BIS_fnc_selectRandom;
                _array = _array - [_p];
                if (count _array == 0) then {
                    _buildings = _buildings - [_building];
                    _building setvariable ["CBA_taskDefend_positions",nil];
                };
                _building setvariable ["CBA_taskDefend_positions",_array];
                [_x,_building buildingpos _p] spawn {
                    if (surfaceIsWater (_this select 1)) exitwith {};
                    (_this select 0) domove (_this select 1);
                    sleep 5;
                    waituntil {unitready (_this select 0)};
                    (_this select 0) disableai "move";
                    dostop _this;
                    waituntil {not (unitready (_this select 0))};
                    (_this select 0) enableai "move";
                };
                _i = _i + 1;
            };
        };
    };
} foreach _units;