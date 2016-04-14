/*
*
* Called after blufor capture
*
* Sends a squads to attack them
*/
params["_marker"];

_squad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySquad");

_dir = [getMarkerPos _marker, getMarkerPos "mainHQ"] call BIS_fnc_dirTo;
_dir = _dir - 30;
_dir = _dir + (random 60);
_pos = [getmarkerpos _marker,[400,500],_dir,0] call SHK_pos;

for "_i" from 0 to 1 do {
	_group = [_pos, Independent, _squad] call Bis_fnc_spawnGroup;
	[_group, getMarkerPos _marker,25] call CBA_fnc_taskAttack;
};

["The enemy isn't willing to give up the area that easily. Dig in and defend it from the counter attack","hint",true,false] call BIS_fnc_MP;