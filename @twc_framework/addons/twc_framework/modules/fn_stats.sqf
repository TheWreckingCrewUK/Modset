/*
* Author: [TWC] jayman
* Adds MissionEventHandler to Save player kills. It then prints it to the rpt
*
* Arguments:
* 0: Enabled <BOOL>
*
* Return Value:
* NOTHING
*
* Example:
* [true] call twc_fnc_stats;
*
* Public: No
*/
params["_enabled"];

if!(_enabled)exitWith{};
if(!isServer)exitWith{};

twc_killList = [];
//Event handler to store the kill list
_handle = addMissionEventHandler ["EntityKilled",{
	_add = format["At %1 %2 Killed %3",time, (_this select 1),(_this select 0)];
	twc_killList pushback _add;
}];
//Event handler to paste the list to the rpt at mission end
_handle = addMissionEventHandler ["Ended",{
	diag_log "** TWC KILL LIST ***";
	{
		diag_log _x;
	}forEach twc_killList;
}];