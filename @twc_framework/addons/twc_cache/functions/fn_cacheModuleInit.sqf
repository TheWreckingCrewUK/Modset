params ["_logic", "_units", "_activated"];

//Only runs when enabled and on the server
if !(_activated) exitWith {};
if !(isServer) exitWith {};

if !(_logic getVariable ["enabled", false]) exitWith {
	systemChat "TWC Cache Module was placed but not enabled.";
};

//over writes base arma values with module
"Group" setDynamicSimulationDistance (_logic getVariable ["characters", 500]);
"Vehicle" setDynamicSimulationDistance (_logic getVariable ["vehicles", 350]);
"EmptyVehicle" setDynamicSimulationDistance (_logic getVariable ["emptyVehicles", 250]);
"IsMoving" setDynamicSimulationDistanceCoef (_logic getVariable ["isMoving", 2]);

//By default dynamic simulation is on, but we want to make sure
enableDynamicSimulationSystem true;

//This shouldn't matter, but it makes sure players always uncache enemies and cannot be cached themselves
{
	if (((units _x) select 0) in (switchableUnits + playableUnits)) then {
		{
			_x triggerDynamicSimulation true;
		} foreach (units _x);
		
		_x enableDynamicSimulation false;
	};
} forEach allGroups;