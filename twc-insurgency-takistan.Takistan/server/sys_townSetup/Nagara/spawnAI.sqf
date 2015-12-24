//Written by [TWC]jayman
//Grabs the marker "Nagara" and spawns 5 patrols
//Commands patrols to attack the town


if (isServer) then {
{
_pos = [getMarkerPos "Nagara",[600,700]] call SHK_pos;
_groupSpawn = [_pos, East, (configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")] call BIS_fnc_spawnGroup;
[_groupSpawn, ("Nagara"), 40] call CBA_fnc_taskAttack;
}forEach [1, 2, 3, 4, 5];
 };
