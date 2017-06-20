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

// Spawn Planes ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
_plane1 = "B_T_VTOL_01_armed_F" createVehicle (getMarkerPos "plane_1");
_plane1 setDir 270;
[_plane1] execVM "server\vehicles\vehicleRespawn.sqf";

_plane2 = "B_T_VTOL_01_infantry_F" createVehicle (getMarkerPos "plane_2");
_plane2 setDir 270;
[_plane2] execVM "server\vehicles\vehicleRespawn.sqf";

_plane3 = "B_T_VTOL_01_vehicle_F" createVehicle (getMarkerPos "plane_3");
_plane3 setDir 270;
[_plane3] execVM "server\vehicles\vehicleRespawn.sqf";

_plane4 = "B_Plane_CAS_01_dynamicLoadout_F" createVehicle (getMarkerPos "plane_4");
_plane4 setDir 270;
[_plane4] execVM "server\vehicles\vehicleRespawn.sqf";