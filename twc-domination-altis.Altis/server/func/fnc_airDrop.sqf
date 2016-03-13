params["_marker"];

_planeClass = "CUP_B_C130J_GB";

_sideHQ = createCenter EAST;
_group = createGroup EAST;

_crew = createGroup East;

_plane = [getPos Player, 0, _planeClass,_crew] call BIS_fnc_spawnVehicle;
_planeSelect = _plane select 0;
_planeSelect setPos (getPos _planeSelect vectorAdd [500,-1000,500]);
_planeSelect setVelocity [0,200,0];

_p1 = [position player, East, (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySquad")]call BIS_fnc_spawnGroup;
[_p1, (position player), 40] call CBA_fnc_taskAttack;	

_p2 = [position player, East, (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySquad")]call BIS_fnc_spawnGroup;
[_p2, (position player), 40] call CBA_fnc_taskAttack;

{
	_x assignAsCargo _planeSelect;
	_x moveInCargo _planeSelect;
	_x  addBackpack "B_Parachute";
	_x disableCollisionWith _planeSelect;
	moveOut _x;
} forEach (units _p1);

{
	_x assignAsCargo _planeSelect;
	_x moveInCargo _planeSelect;
	_x  addBackpack "B_Parachute";
	_x disableCollisionWith _planeSelect;
	moveOut _x;
} forEach (units _p2);