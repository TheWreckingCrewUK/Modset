/*
*
* Called after blufor capture
*
* Sends a squads to attack them
*/
params["_marker"];

_dir = [getMarkerPos _marker, getMarkerPos "mainHQ"] call BIS_fnc_dirTo;
_dir = _dir - 40;
_dir = _dir + 2*(random 40);
_pos = [getmarkerpos _marker,[300,400],_dir,0] call SHK_pos;

for "_i" from 0 to 1 do {
	_group = [_pos, EAST, squad] call Bis_fnc_spawnGroup;
	[_group, getMarkerPos _marker,50] call CBA_fnc_taskAttack;
};

_rand = (random 100);
if(_rand < 50) then{
	_group = [_pos, EAST, bmp] call Bis_fnc_spawnGroup;
	[_group, getMarkerPos _marker,50] call CBA_fnc_taskAttack;
};

format["The enemy isn't ready to give up %1 that easily. Dig in and defend for the Counter Attack.",_marker] remoteExec ["hint"]; 