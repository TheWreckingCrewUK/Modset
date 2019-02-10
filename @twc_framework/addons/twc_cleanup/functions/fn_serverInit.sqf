if (!isServer) exitWith {};

TWC_Corpse_Queue = [] call CBA_fnc_hashCreate;
TWC_Corpse_Queue_Max = 40; // How many is too many corpses for performance?
TWC_Corpse_Queue_MinTime = 300; // How long should the corpse be around for, before we consider deleting it?
// can potentially add a maxtime in the future

addMissionEventHandler ["BuildingChanged", {
	_this call twc_cleanup_fnc_cleanBuildingUp;
}];

TWC_Corpse_EHID = addMissionEventHandler ["EntityKilled", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];

	if (isPlayer _unit) exitWith {}; // player bodies are handled elsewhere
	if (_unit getVariable ["TWC_IgnoreCorpse", false]) exitWith {}; // ignore flag for mission makers
	//if (isNull _instigator) then { _instigator = UAVControl vehicle _killer select 0; }; // UAV kills
	//if (isNull _instigator) then { _instigator = _killer; }; // vehicle kills
	if (!(isNull objectParent _unit)) exitWith {}; // ignore vehicle crew for now (statics etc.)

	[TWC_Corpse_Queue, time, _unit] call CBA_fnc_hashSet;
}];

// Start monitoring for AI corpses after 5 minutes
[TWC_cleanup_fnc_corpseManager, [], 300] call CBA_fnc_waitAndExecute;