/*
* Author: [TWC] jayman
* Makes any object an IED
*
* Arguments:
* 0: Unit <OBJECT>
*
* Optional Parameters:
* 1: Sptter <OBJECT>
* 2: Dead Mans Switch <BOOL>
* 3: Radius <NUMBER>
* 4: Side <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [ied1,bomber1,false,12,"west"] call twc_fnc_placedIED
*
* Public: no
*/
if(!isServer)exitWith{};

params["_unit",["_spotter",objNull],["_deadSwitch",false],["_radius", 12],["_side", "WEST"]];

if(_spotter != objNull)then{	
	_trigger = createTrigger ["EmptyDetector", (getPos _unit), true];
	_trigger setTriggerArea [_radius, _radius, 0, false];
	_trigger setTriggerActivation [_side, "PRESENT", false];
	_trigger setTriggerStatements [
		"{
			if (abs (speed _x) >= 10 && (getPosATL _x select 2) < 4) exitWith {true};
			false
		} forEach thisList",
		"'R_80mm_HE' createVehicle (getPos thisTrigger)",
		""
	];
	_variable = (str _spotter + "T");
	missionNamespace setVariable [_variable,_trigger,true];	
	_spotter addEventHandler ["HIT", {
		_rand = (random 100);
		if(_rand < 50)then{
			_trig = missionNamespace getVariable (str (_this select 0) + "T");
			"R_80mm_HE" createVehicle (getPos _trig);
			deleteVehicle _trig;
		};		
	}];
	if(_deadSwitch)then{
		_spotter addEventHandler ["KILLED", {
			_trig = missionNamespace getVariable (str (_this select 0) + "T");
			"R_80mm_HE" createVehicle (getPos _trig);
			deleteVehicle _trig;		
		}];
	};
}else{
	_trigger = createTrigger ["EmptyDetector", (getPos _unit), true];
	_trigger setTriggerArea [_radius, _radius, 0, false];
	_trigger setTriggerActivation [_side, "PRESENT", false];
	_trigger setTriggerStatements [
		"{
			if (abs (speed _x) >= 10 && (getPosATL _x select 2) < 4) exitWith {true};
			false
		} forEach thisList;",
		"'R_80mm_HE' createVehicle (getPos thisTrigger)",
		""
	];
};