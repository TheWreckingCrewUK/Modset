if (!isServer) exitWith {};
/*
This was an idea and it was executed imperfectly
Not only has it caused vehicles to delete when running over fences
But not having the building "change" has causes it to instantly Be instead of breaking down
I don't even know why we had been removing the rubble
It could be re-added as long as you check for all types of "not rubble" before deleting

addMissionEventHandler ["BuildingChanged", {
	_this call twc_cleanup_fnc_cleanBuildingUp;
}];
*/

if (TWC_Corpse_Enabled) then {
	TWC_Corpse_Queue = [] call CBA_fnc_hashCreate;
	
	TWC_Corpse_EHID = addMissionEventHandler ["EntityKilled", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];

		if (!(_unit isKindOf "CAManBase")) exitWith {};
		if (isPlayer _unit) exitWith {}; // player bodies are handled elsewhere
		if (_unit getVariable ["TWC_IgnoreCorpse", false]) exitWith {}; // ignore flag for mission makers
		//if (isNull _instigator) then { _instigator = UAVControl vehicle _killer select 0; }; // UAV kills
		//if (isNull _instigator) then { _instigator = _killer; }; // vehicle kills
		if (!(isNull objectParent _unit)) exitWith {}; // ignore vehicle crew for now (statics etc.)

		[TWC_Corpse_Queue, time, _unit] call CBA_fnc_hashSet;
	}];

	// Start monitoring for AI corpses after 5 minutes
	[TWC_cleanup_fnc_corpseManager, [], 300] call CBA_fnc_waitAndExecute;
};