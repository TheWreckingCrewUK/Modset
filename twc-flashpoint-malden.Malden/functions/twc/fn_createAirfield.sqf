/* 
Spawning the new base when you capture the Airfield 1.
*/

// Create Ammobox /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
arsenalAmmoBox_3 = "B_supplyCrate_F" createVehicle (getMarkerPos "arsenal_3");

clearWeaponCargoGlobal arsenalAmmoBox_3;
clearMagazineCargoGlobal arsenalAmmoBox_3;
clearItemCargoGlobal arsenalAmmoBox_3;
clearBackpackCargoGlobal arsenalAmmoBox_3;
publicVariable "arsenalAmmoBox_3";

["AmmoboxInit",[arsenalAmmoBox_3,true]] call BIS_fnc_arsenal;
[arsenalAmmoBox_3,[true],true] call BIS_fnc_removeVirtualWeaponCargo;
[arsenalAmmoBox_3,[true],true] call BIS_fnc_removeVirtualMagazineCargo;
[arsenalAmmoBox_3,[true],true] call BIS_fnc_removeVirtualItemCargo;
[arsenalAmmoBox_3,[true],true] call BIS_fnc_removeVirtualBackpackCargo;

// Move Pilots ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
onPlayerConnected 
{
	if ((player isEqualTo "helo1") || (player isEqualTo "helo2") || (player isEqualTo "helo3") || (player isEqualTo "apache1") || (player isEqualTo "apache2") || (player isEqualTo "jet1")) then
	{
		player setPos (getMarkerPos "base_aircraft")
	};
};

// Broadcast that airfield is captured/////////////////////////////////////////////////////////////////////////////////////////////////////
airfield_is_Captured = 1;
publicVariable "airfield_is_Captured";

// Spawn Planes and Helicopters ///////////////////////////////////////////////////////////////////////////////////////////////////////////
_plane1 = "B_T_VTOL_01_armed_F" createVehicle (getMarkerPos "plane_1");
_plane1 setDir 90;
[_plane1] execVM "server\vehicles\vehicleRespawn.sqf";

_plane2 = "B_T_VTOL_01_infantry_F" createVehicle (getMarkerPos "plane_2");
_plane2 setDir 90;
[_plane2] execVM "server\vehicles\vehicleRespawn.sqf";

_plane3 = "B_T_VTOL_01_vehicle_F" createVehicle (getMarkerPos "plane_3");
_plane3 setDir 90;
[_plane3] execVM "server\vehicles\vehicleRespawn.sqf";

_plane4 = "B_Plane_CAS_01_dynamicLoadout_F" createVehicle (getMarkerPos "plane_4");
_plane4 setDir 0;
[_plane4] execVM "server\vehicles\vehicleRespawn.sqf";

_helicopter1 = "B_Heli_Transport_01_F" createVehicle (getMarkerPos "helicopter_1");
_helicopter1 setDir 270;
[_helicopter1] execVM "server\vehicles\vehicleRespawn.sqf";

_helicopter2 = "B_Heli_Attack_01_dynamicLoadout_F" createVehicle (getMarkerPos "helicopter_2");
_helicopter2 setDir 270;
[_helicopter2] execVM "server\vehicles\vehicleRespawn.sqf";

// Spawn Fuel, Repair, Ammo, //////////////////////////////////////////////////////////////////////////////////////////////////////////////
_truck_fuel = "B_Truck_01_fuel_F" createVehicle (getMarkerPos "truck_fuel");
_truck_fuel setDir 270;
[_truck_fuel] execVM "server\vehicles\vehicleRespawn.sqf";

_truck_ammo = "B_Truck_01_ammo_F" createVehicle (getMarkerPos "truck_ammo");
_truck_ammo setDir 270;
[_truck_ammo] execVM "server\vehicles\vehicleRespawn.sqf";

_truck_repair = "B_Truck_01_Repair_F" createVehicle (getMarkerPos "truck_repair");
_truck_repair setDir 270;
[_truck_repair] execVM "server\vehicles\vehicleRespawn.sqf";

// Spawn Cars, just in case ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
_mrap10 = "B_Truck_01_Repair_F" createVehicle (getMarkerPos "mrap_spawn_10");
_mrap10 setDir 0;
[_mrap10] execVM "server\vehicles\vehicleRespawn.sqf";

_mrap11 = "B_Truck_01_Repair_F" createVehicle (getMarkerPos "mrap_spawn_11");
_mrap11 setDir 0;
[_mrap11] execVM "server\vehicles\vehicleRespawn.sqf";
