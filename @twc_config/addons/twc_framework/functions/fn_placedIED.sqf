/*
* function for making an object an IED
*
* 0 - (object) object which is the IED.
*/

//Keeps players from running code in case mission maker forgets.
if(!isServer)exitWith{};

params["_unit",["_spotter",objNull],["_deadSwitch",false],["_radius", 12],["_side", "WEST"]];

//Hint blocks to assist mission makers:
if(isNil "_unit" || typeName _unit != "OBJECT")exitWith{hint "You failed with TWC_fnc_placedIED\n\n Check the Website for or Management for Help"};
if(isNil "_spotter" || typeName _spotter != "OBJECT")exitWith{hint "You failed with TWC_fnc_placedIED\n\n Check the Website for or Management for Help"};
if(isNil "_deadSwitch" || typeName _deadSwitch != "BOOL")exitWith{hint "You failed with TWC_fnc_placedIED\n\n Check the Website for or Management for Help"};
if(isNil "_radius" || typeName _radius != "SCALAR")exitWith{hint "You failed with TWC_fnc_placedIED\n\n Check the Website for or Management for Help"};
if(isNil "_side" || typeName _side != "STRING")exitWith{hint "You failed with TWC_fnc_placedIED\n\n Check the Website for or Management for Help"};
hint "passed isNil";

//Checks if a spotter is added:
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
//Creates variables to link spotter to trigger + event handlers depending on if it is a deadswitch
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
	//Spotter is false
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