//if (hasInterface) exitWith {};

_spawnTank = [(getMarkerPos "atFiringLine") select 0, ((getMarkerPos "atFiringLine") select 1)+400, 0];
_spawnAgent = [((getMarkerPos "atFiringLine") select 0)+3, ((getMarkerPos "atFiringLine") select 1)+400, 0];

if(isNil "tank3") then {
	tank3 = "rhs_t80" createVehicle _spawnTank;
	tank3 addEventHandler ["killed", {deleteVehicle (_this select 0); tank3 = nil;}];
}else{
	deleteVehicle tank3;
	tank3 = "rhs_t80" createVehicle _spawnTank;
	tank3 addEventHandler ["killed", {deleteVehicle (_this select 0); tank3 = nil;}];
};

if(isNil "agent3") then {
	agent3 = createAgent ["rhs_msv_marksman", _spawnAgent, [], 0,"NONE"];
	agent3 disableAI "FSM";
	agent3	setCombatMode "RED";
	agent3 setSkill 0;
	_null = [agent3, tank3, ["atTC1","atTC2","atTC3","atTC4"]] execFSM "scripts\atRange\tankDriver.fsm";
	agent3 addEventHandler ["killed", {deleteVehicle (_this select 0); agent3 = nil;}];
}else{
	deleteVehicle agent3;
	agent3 = createAgent ["rhs_msv_marksman", _spawnAgent, [], 0,"NONE"];
	agent3 disableAI "FSM";
	agent3	setCombatMode "RED";
	agent3 setSkill 0;
	_null = [agent3, tank3, ["atTC1","atTC2","atTC3","atTC4"]] execFSM "scripts\atRange\tankDriver.fsm";
	agent3 addEventHandler ["killed", {deleteVehicle (_this select 0); agent3 = nil;}];
};