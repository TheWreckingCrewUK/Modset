//if (hasInterface) exitWith {};

_spawnTank = [(getMarkerPos "atFiringLine") select 0, ((getMarkerPos "atFiringLine") select 1)+300, 0];
_spawnAgent = [((getMarkerPos "atFiringLine") select 0)+3, ((getMarkerPos "atFiringLine") select 1)+300, 0];

if(isNil "tank2") then {
	tank2 = "rhs_t80" createVehicle _spawnTank;
	tank2 addEventHandler ["Hit", {deleteVehicle agent2; deleteVehicle (_this select 0); tank2 = nil; agent2 = nil;}];
}else{
	deleteVehicle tank2;
	tank2 = "rhs_t80" createVehicle _spawnTank;
	tank2 addEventHandler ["Hit", {deleteVehicle agent2; deleteVehicle (_this select 0); tank2 = nil; agent2 = nil;}];
};

if(isNil "agent2") then {
	agent2 = createAgent ["rhs_msv_marksman", _spawnAgent, [], 0,"NONE"];
	agent2 disableAI "FSM";
	agent2	setCombatMode "RED";
	agent2 setSkill 0;
	_null = [agent2, tank2, ["atTB1","atTB2","atTB3","atTB4"]] execFSM "scripts\atRange\tankDriver.fsm";
	agent2 addEventHandler ["killed", {deleteVehicle (_this select 0); agent2 = nil;}];
}else{
	deleteVehicle agent2;
	agent2 = createAgent ["rhs_msv_marksman", _spawnAgent, [], 0,"NONE"];
	agent2 disableAI "FSM";
	agent2	setCombatMode "RED";
	agent2 setSkill 0;
	_null = [agent2, tank2, ["atTB1","atTB2","atTB3","atTB4"]] execFSM "scripts\atRange\tankDriver.fsm";
	agent2 addEventHandler ["killed", {deleteVehicle (_this select 0); agent2 = nil;}];
};