if(false) exitWith {};

if(true) then {
	_spawnPos = [getMarkerPos "IEDMarker", 225] call SHK_pos;
	_attackSquad = [_spawnPos, EAST, (configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")] call BIS_fnc_spawnGroup;
	[_attackSquad, ("IEDMarker"), 20] call CBA_fnc_taskAttack;
};