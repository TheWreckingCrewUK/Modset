
params ["_location",["_spawnAmount",1],["_sqaudspawns",(configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")]];
if (IsServer) then{
	for "_i" from 1 to _spawnAmount do {
		_spawnPos = [_location,[600,700]] call SHK_pos;
		_movepos = [_location,30] call SHK_pos;
		_attackSquad = [_spawnPos, EAST, _sqaudspawns] call BIS_fnc_spawnGroup;
		[_attackSquad,_movepos] call CBA_fnc_taskAttack
	};
};