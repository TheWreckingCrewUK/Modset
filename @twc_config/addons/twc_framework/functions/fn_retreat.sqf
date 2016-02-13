/*
*  Trigger ACT: (count thislist) < 4
*
*
*  _TWC = [thislist,"moveaway"] spawn TWC_fnc_Retreat
*
*
*
*/

params ["_thislist","_markerMoveTo"];
{	
	if (side _x == East) then{
		//_x join Grpnull;
		[ _x, getmarkerpos _markerMoveTo, 10, "MOVE", "RELAXED", "BLUE", "FULL", "COLUMN"] call CBA_fnc_addWaypoint;
	};
}foreach _thislist; 