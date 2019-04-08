/* TWC_Core_aceCargoLoadedEHID = ["ace_cargoLoaded", {
	params ["_crateObject", "_formerOwner"];
	
	systemChat str _this;
}] call CBA_fnc_addEventHandler; */

TWC_Core_aceCargoUnloadedEHID = ["ace_cargoUnloaded", {
	params ["_crateObject", "_formerOwner"];

	_position = [-1, -1, -1];

	// apparently sometimes classnames are provided, instead of objects REE
	if (_crateObject isEqualType "") then {
		_position = (getPos _formerOwner);
		_position set [2, 0]; // set the height to 0, not perfect
	} else {
		_position = getPos _crateObject;
	};

	["TWC_Item_Delivered", [_position, _crateObject, _formerOwner, "cargo"]] call CBA_fnc_globalEvent;
}] call CBA_fnc_addEventHandler;