params ["_logic", "_units", "_activated"];

//Only runs when enabled and on the server
if !(_activated) exitWith {};
if !(isServer) exitWith {};
_enabled = _logic getVariable "enabled";
if !(_enabled) exitWith {systemChat "TWC Cache Module is disabled. You will need to add groups manually to dynamic simulation"};

//overWrites base arma values with module
_aiRange = _logic getVariable "characters";
"Group" setDynamicSimulationDistance _aiRange;
_vehicleRange = _logic getVariable "vehicles";
"Vehicle" setDynamicSimulationDistance _vehicleRange;
_emptyVehicle = _logic getVariable "emptyVehicles";
"EmptyVehicle" setDynamicSimulationDistance _emptyVehicle;
_isMoving = _logic getVariable "isMoving";
"IsMoving" setDynamicSimulationDistanceCoef _isMoving;

//By default dynamic simulation is on, but we want to make sure
enableDynamicSimulationSystem true;

//This shouldn't matter, but it makes sure players always uncache enemies and cannot be cached themselves
{
	if (((units _x) select 0) in (switchableUnits + playableUnits)) then {
		{
			_x triggerDynamicSimulation true;
		}foreach (units _x);
		_x enableDynamicSimulation false;
	};
} forEach allGroups;

// Happens at mission init (map screen ops, spawn on public). Delayed to allow for custom cache ranges to be applied.
[{
	["CAManBase", "init", {
		if (leader (_this select 0) == (_this select 0) && {isPlayer _x} count Units (group (_this select 0)) == 0) then {
			//We have to spawn this because it needs a 1 second delay or else BI setting overwrite ours
			[false, (group (_this select 0))] spawn twc_fnc_initAICache
		};
	}, true, [], true] call CBA_fnc_addClassEventHandler;

	["AllVehicles","init",{
		[false, (_this select 0)] spawn twc_fnc_initVehicleCache
	}, true, ["Man", "Static"], true] call CBA_fnc_addClassEventHandler;
}, [], 0.5] call CBA_fnc_waitAndExecute;