/*
* A Nasty Loop that cleans up dead bodies in base.
* Don't know of a better way do do that making sure no bodies dirty up base
*/

while {true} do{
	_Deadbodies = nearestObjects [getmarkerpos "respawn_west", ["man"], 200];
	{if (not alive _x) then {deleteVehicle _x};} forEach _Deadbodies;
	sleep 5;
};