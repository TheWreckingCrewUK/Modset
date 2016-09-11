/*
* Written by [TWC] jayman
*
* Creates the ammo box with an an event handler. This should decrease lag
* while always keeping the box full. Basically it reloads as soon as you close it
*/
_marker = "crate";  // marker used to spawn.
_boxType = "CUP_BAF_VehicleBox";  // the type of ammobox used.

// create and fill the box.
crateBox = _boxType createVehicleLocal (getMarkerPos _marker);
crateBox setPosATL (getMarkerPos _marker);
crateBox allowDamage false;

[crateBox] execVM "client\boxesModdedWW2\crates\main_ammo.sqf";

player addEventHandler ["InventoryClosed", {
	if((_this select 1) == crateBox)then{
		[_this select 1]execVM "client\boxesModdedWW2\crates\main_ammo.sqf";
	};
}];