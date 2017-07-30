//if (hasInterface) exitWith {};

_spawnTank = [(getMarkerPos "atFiringLine") select 0, ((getMarkerPos "atFiringLine") select 1)+200, 0];
_spawnAgent = [((getMarkerPos "atFiringLine") select 0)+3, ((getMarkerPos "atFiringLine") select 1)+200, 0];

if(isNil "tank1") then {
	tank1 = "CUP_O_T72_RU" createVehicle _spawnTank;
	tank1 addEventHandler ["Hit", {deleteVehicle agent1; deleteVehicle (_this select 0); tank1 = nil; agent1 = nil;}];
}else{
	deleteVehicle tank1;
	tank1 = "CUP_O_T72_RU" createVehicle _spawnTank;
	tank1 addEventHandler ["Hit", {deleteVehicle agent1; deleteVehicle (_this select 0); tank1 = nil; agent1 = nil;}];
};
