//adds objects placed in editor:
{
	_x addCuratorEditableObjects [vehicles,true];
	_x addCuratorEditableObjects [(allMissionObjects "Man"),false];
	_x addCuratorEditableObjects [(allMissionObjects "Air"),true];
	_x addCuratorEditableObjects [(allMissionObjects "Ammo"),false];
}foreach allcurators;
	
//makes all units continuously available to Zeus (for respawning players and AI that's being spawned by a script.)
while {true} do {
		{	
			_allcurators = allcurators;
			_count = count _allCurators;
			for "_i" from 0 to _count do {
				_Curator = _allcurators Select _i;
				_Curator addCuratorEditableObjects [[_x], true];
				_Curator addCuratorEditableObjects [vehicles, true];
			};
		}forEach allUnits;
	sleep 10;
};

if (true) exitWith {};
	
	
