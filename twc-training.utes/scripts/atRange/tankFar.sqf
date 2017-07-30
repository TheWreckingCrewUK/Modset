//if (hasInterface) exitWith {};

_spawnTank = [(getMarkerPos "atFiringLine") select 0, ((getMarkerPos "atFiringLine") select 1)+400, 0];
_spawnAgent = [((getMarkerPos "atFiringLine") select 0)+3, ((getMarkerPos "atFiringLine") select 1)+400, 0];

if(isNil "tank3") then {
	tank3 = "CUP_O_T72_RU" createVehicle _spawnTank;
	tank3 addEventHandler ["Hit", {deleteVehicle agent3; deleteVehicle (_this select 0); tank3 = nil; agent3 = nil;}];
}else{
	deleteVehicle tank3;
	tank3 = "CUP_O_T72_RU" createVehicle _spawnTank;
	tank3 addEventHandler ["Hit", {deleteVehicle agent3; deleteVehicle (_this select 0); tank3 = nil; agent3 = nil;}];
};