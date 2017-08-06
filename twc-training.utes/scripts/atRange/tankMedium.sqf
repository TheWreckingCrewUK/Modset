//if (hasInterface) exitWith {};

_spawnTank = [(getMarkerPos "atFiringLine") select 0, ((getMarkerPos "atFiringLine") select 1)+300, 0];
_spawnAgent = [((getMarkerPos "atFiringLine") select 0)+3, ((getMarkerPos "atFiringLine") select 1)+300, 0];

if(isNil "tank2") then {
	tank2 = "CUP_O_T72_RU" createVehicle _spawnTank;
	tank2 addEventHandler ["Hit", {deleteVehicle agent2; deleteVehicle (_this select 0); tank2 = nil; agent2 = nil;}];
}else{
	deleteVehicle tank2;
	tank2 = "CUP_O_T72_RU" createVehicle _spawnTank;
	tank2 addEventHandler ["Hit", {deleteVehicle agent2; deleteVehicle (_this select 0); tank2 = nil; agent2 = nil;}];
};