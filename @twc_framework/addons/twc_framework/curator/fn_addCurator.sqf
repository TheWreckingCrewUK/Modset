/*
* Author: [TWC] Bosenator
* Function to add a curator on the fly
*
* Arguments:
* 0: UNIT <OBJECT>
*
* Return Value:
* Success <BOOL>
*
* Public: No
*/
params ["_unit"];

if (!isServer) exitWith {}; 

if (isNull _unit) exitWith { false; };

// already curator
if (!(isNull (getAssignedCuratorLogic _unit))) exitWith {
	false;
};

if (isNil "TWC_getSideCenter") then {
	TWC_getSideCenter = createCenter sideLogic;
	publicVariable "TWC_getSideCenter";
};

_newCurator = (createGroup TWC_getSideCenter) createUnit ["ModuleCurator_F", [0, 0, 0], [], 0, ""];
_unit assignCurator _newCurator;
_newCurator setCuratorWaypointCost 0;
{ _newCurator setCuratorCoef [_x, 0]; } forEach ["place", "edit", "delete", "destroy", "group", "synchronize"];

[_newCurator] spawn TWC_fnc_addAddonsCurator;
[_newCurator] spawn TWC_fnc_addObjectsCurator;

true;