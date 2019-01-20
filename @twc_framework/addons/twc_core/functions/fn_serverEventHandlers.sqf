/* TWC_Core_aceCargoLoadedEHID = ["ace_cargoLoaded", {
	params ["_crateObject", "_formerOwner"];
	
	systemChat str _this;
}] call CBA_fnc_addEventHandler; */

TWC_Core_aceCargoUnloadedEHID = ["ace_cargoUnloaded", {
	params ["_crateObject", "_formerOwner"];

	["TWC_Item_Delivered", 
		[(getPos _crateObject), _crateObject, _formerOwner, "cargo"]
	] call CBA_fnc_globalEvent;
}] call CBA_fnc_addEventHandler;