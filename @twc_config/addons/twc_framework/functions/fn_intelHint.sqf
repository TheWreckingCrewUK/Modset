/*
* TWC intel hint Function
*
* Gets added to a units init. The action can be seen by all units including JIPs, but the effect is local

* Required Parameters:
* 0- (object)- Unit to add action to
* 1 - (string) Name of the action
* 2 - (String) - Hint to be displayed:
*/
//Keeps players from running code in case mission maker forgets.
if(!isServer)exitWith{};

params["_unit","_name","_string"];
//Hint blocks to assist mission makers:
if(isNil "_unit" || typeName _unit != "OBJECT")exitWith{hint "You failed with TWC_fnc_intelHint\n\n Check the Website for or Management for Help"};
if(isNil "_name" || typeName _name != "STRING")exitWith{hint "You failed with TWC_fnc_intelHint\n\n Check the Website for or Management for Help"};
if(isNil "_string" || typeName _string != "STRING")exitWith{hint "You failed with TWC_fnc_intelHint\n\n Check the Website for or Management for Help"};

//creates a missionNamespace variable using the unit:
_variable = (str _unit + "V");
missionNamespace setVariable [_variable,_string,true];

//Creates the action:
_unit addAction [_name, {
	_var = missionNamespace getVariable (str (_this select 0) + "V");
	hint _var;

},nil,6,true,true,"","true",5,false];
