/* 
Spawning the new base when you capture Town 1.
*/

// Create Ammobox /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
arsenalAmmoBox_2 = "B_supplyCrate_F" createVehicle (getMarkerPos "arsenal_2");

clearWeaponCargoGlobal arsenalAmmoBox_2;
clearMagazineCargoGlobal arsenalAmmoBox_2;
clearItemCargoGlobal arsenalAmmoBox_2;
clearBackpackCargoGlobal arsenalAmmoBox_2;
publicVariable "arsenalAmmoBox_2";

["AmmoboxInit",[arsenalAmmoBox_2,true]] call BIS_fnc_arsenal;
[arsenalAmmoBox_2,[true],true] call BIS_fnc_removeVirtualWeaponCargo;
[arsenalAmmoBox_2,[true],true] call BIS_fnc_removeVirtualMagazineCargo;
[arsenalAmmoBox_2,[true],true] call BIS_fnc_removeVirtualItemCargo;
[arsenalAmmoBox_2,[true],true] call BIS_fnc_removeVirtualBackpackCargo;

// Create Flag ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
createMarker ["flag_b_2", getMarkerPos "arsenal_2"];
"flag_b_2" setMarkerType "flag_NATO";

// Spawn MRAPs ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
_mrap1 = "B_MRAP_01_F" createVehicle (getMarkerPos "mrap_spawn_1");
_mrap1 setDir 260;
[_mrap1] execVM "server\vehicles\vehicleRespawn.sqf";

_mrap2 = "B_MRAP_01_F" createVehicle (getMarkerPos "mrap_spawn_2");
_mrap2 setDir 260;
[_mrap2] execVM "server\vehicles\vehicleRespawn.sqf";

_mrap3 = "B_MRAP_01_F" createVehicle (getMarkerPos "mrap_spawn_3");
_mrap3 setDir 260;
[_mrap3] execVM "server\vehicles\vehicleRespawn.sqf";

_mrap4 = "B_MRAP_01_hmg_F" createVehicle (getMarkerPos "mrap_spawn_4");
_mrap4 setDir 260;
[_mrap4] execVM "server\vehicles\vehicleRespawn.sqf";

_mrap5 = "B_MRAP_01_hmg_F" createVehicle (getMarkerPos "mrap_spawn_5");
_mrap5 setDir 260;
[_mrap5] execVM "server\vehicles\vehicleRespawn.sqf";

_mrap6 = "B_MRAP_01_hmg_F" createVehicle (getMarkerPos "mrap_spawn_6");
_mrap6 setDir 260;
[_mrap6] execVM "server\vehicles\vehicleRespawn.sqf";

_mrap7 = "B_MRAP_01_gmg_F" createVehicle (getMarkerPos "mrap_spawn_7");
_mrap7 setDir 260;
[_mrap7] execVM "server\vehicles\vehicleRespawn.sqf";

_mrap8 = "B_MRAP_01_gmg_F" createVehicle (getMarkerPos "mrap_spawn_8");
_mrap8 setDir 260;
[_mrap8] execVM "server\vehicles\vehicleRespawn.sqf";

_mrap9 = "B_MRAP_01_gmg_F" createVehicle (getMarkerPos "mrap_spawn_9");
_mrap9 setDir 260;
[_mrap9] execVM "server\vehicles\vehicleRespawn.sqf";

// Spawn Prowlers /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
_prowler1 = "B_LSV_01_armed_F" createVehicle (getMarkerPos "prowler_spawn_1");
_prowler1 setDir 80;
[_prowler1] execVM "server\vehicles\vehicleRespawn.sqf";

_prowler2 = "B_LSV_01_armed_F" createVehicle (getMarkerPos "prowler_spawn_2");
_prowler2 setDir 80;
[_prowler2] execVM "server\vehicles\vehicleRespawn.sqf";

// Spawn Armour ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
_armour = "B_MBT_01_cannon_F" createVehicle (getMarkerPos "tank_spawn");
_armour setDir 160;
[_armour] execVM "server\vehicles\vehicleRespawn.sqf";