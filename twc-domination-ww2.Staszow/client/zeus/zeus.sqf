
_curator = Zeus;
_addCivilians = True;

//adds objects placed in editor:
_curator addCuratorEditableObjects [vehicles,true];
_curator addCuratorEditableObjects [(allMissionObjects "Man"),false];
_curator addCuratorEditableObjects [(allMissionObjects "Air"),true];
_curator addCuratorEditableObjects [(allMissionObjects "Ammo"),false];
	
//makes all units continuously available to Zeus (for respawning players and AI that's being spawned by a script.)
while {true} do {
	_toAdd = if (!_addCivilians && {(side _x) == civilian}) then {false} else {true};
	{
		if (_toAdd) then {_curator addCuratorEditableObjects [[_x], true]};
	} forEach allUnits;
	_curator addCuratorEditableObjects [vehicles, true];
	sleep 10;
};

if (true) exitWith {};
	
	
