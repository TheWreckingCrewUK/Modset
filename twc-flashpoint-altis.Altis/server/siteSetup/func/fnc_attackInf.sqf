/*
*
* Called after blufor capture
*
* Sends a squads to attack them
*/
params["_marker"];

_dir = [getMarkerPos _marker, getMarkerPos "mainHQ"] call BIS_fnc_dirTo;
_dir = _dir - 30;
_dir = _dir + (random 60);
_pos = [getmarkerpos _marker,[400,500],_dir,0] call SHK_pos;

for "_i" from 0 to 1 do {
	_group = [_pos, EAST, squad] call Bis_fnc_spawnGroup;
	[_group, getMarkerPos _marker,25] call CBA_fnc_taskAttack;
};

"The enemy isn't ready to give up the Site that easily. Dig in and defend for the Counter Attack." remoteExec ["hint"]; 