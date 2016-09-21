/*
* Function to delete and reset zones. Massively helps lag
*
*/
params["_thisTrigger","_thisList", "_pos"];

//Check if it was blufor who cleared the zone successfully. yes blufor then successful
if ((west countSide _thisList) < 0)exitWith{};

_units = nearestObjects[getPos _thisTrigger,["Man"], 800];
{
	_var = _x getVariable "location";
	if(isnil "_var")then{
		_units = _units - [_x];
	}else{
		if(_var != _pos)then{
		_units = _units - [_x];
		};
	};
}forEach _units;
//counting number of groups.
_waves = ceil ((EAST countSide _units) / 6);

//Also Doesn't despawn if less than 2 waves surrived.
if(_waves <= 2)exitWith{};

//Deleting the opfor units;
{
	if(side _x == EAST)then{
		deleteVehicle _x
	};
}forEach _units;

//Deleting all empty groups
{deleteGroup _x}forEach allGroups;

//Creating the new trigger to respawn the objective.
_trg = createTrigger ["EmptyDetector", getPos _thisTrigger];
_trg setTriggerArea [400, 400, 0, false];
_trg setTriggerActivation ["West", "PRESENT", False];
_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)",format["[(getPos thisTrigger),%1,[300,400],thisList] call twc_fnc_spawn2",_waves],""];