_iedType = "IEDLandBig_F";
_vehicle = "CUP_C_Skoda_Blue_CIV";
_allRoads = [worldSize / 2, worldSize / 2] nearRoads (sqrt 2 *(worldSize / 2));
_amount = 5;
_num = 0;

while {_num < _amount} do {
	_road = _allRoads call BiS_fnc_arsenal;
	if ((getPos _road) distance2D (getMarkerPos "crate") > 200)then{
		_veh = _vehicle createVehicle (getPos _road);
		_ied = _iedType createVehicle (getPos _road);
		_ied attachTo [_veh, [0,0,-1]];
		
		_ied addEventHandler ["Killed", {
			params ["_unit", "_killer"];
			_iedExplosive = createMine [typeOf _unit, getPos _unit, [], 0];
			_iedExplosive setDamage 1;
			deleteVehicle (_unit getVariable ["InsP_trigger", objNull]);
			deleteVehicle _unit;
		}];
		
		_trigger = createTrigger ["EmptyDetector", (getPos _road), true];
		_trigger setTriggerArea [12, 12, 0, false];
		_trigger setTriggerActivation ["WEST", "PRESENT", true];
		_trigger setTriggerStatements [
			"{
				if (abs (speed _x) >= 10 && (getPosATL _x select 2) < 4) exitWith {true};
				false
			} forEach thisList;",
			"[thislist select 0] call TWC_fnc_iedAttack; (thisTrigger getVariable ['InsP_ied', objNull]) setDamage 1;",
			""
];
		_num = _num + 1;
	};
};

// Make trigger and object known to each other
_trigger setVariable ["InsP_ied", _ied, true];
_ied setVariable ["InsP_trigger", _trigger, true];

InsP_iedGroup pushback _ied;
publicVariable "InsP_iedGroup";