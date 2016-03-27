//if (hasInterface) exitWith {};

_spawnTank = [(getMarkerPos "atFiringLine") select 0, ((getMarkerPos "atFiringLine") select 1)+200, 0];
_spawnAgent = [((getMarkerPos "atFiringLine") select 0)+3, ((getMarkerPos "atFiringLine") select 1)+200, 0];

tank1 = "rhs_t80" createVehicle _spawnTank;
agent1 = createAgent ["rhs_msv_marksman", _spawnAgent, [], 0,"NONE"];
	agent1 disableAI "FSM";
	agent1	setCombatMode "RED";
	agent1 setSkill 0;
	
	_null = [agent1, tank1, ["atTA1","atTA2","atTA3","atTA4"]] execFSM "scripts\atRange\tankDriver.fsm";