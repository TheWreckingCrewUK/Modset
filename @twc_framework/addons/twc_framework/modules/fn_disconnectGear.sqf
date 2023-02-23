/*
* Author: [TWC] jayman
* Deletes bodies of re-connects and handles gear
*
* Arguments:
* 0: ERA <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [true] call disconnectGear;
*
* Public: No
*/
params["_bool"];
if (!_bool) exitWith {};
if (!hasInterface) exitWith {};

//check for previous body and delete it
_previousBody = player getVariable ["twc_framework_previousBody",false];
if(str _previousBody == "false")then{
	
}else{
	{
		if(player == _x getVariable ["twc_framework_previousBody",false])exitWith{
			deleteVehicle _x;
		};
	}forEach alldead;
};
player setVariable ["twc_framework_previousBody",player,true];

_loadout = missionProfileNamespace getVariable ["twc_framework_disconnectGear",false];
if(str _loadout == "false")then{
	_loadout = getUnitLoadout player;
	missionProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
	saveMissionProfileNamespace;
}else{
	player setUnitLoadout _loadout;
	missionProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
	saveMissionProfileNamespace;
};

//adding multiple event handlers to update it should cause no lag and be almost 100% accurate. I don't want to use Fired
player addEventHandler ["InventoryClosed", {
	params ["_unit", "_container"];
	
	_loadout = getUnitLoadout _unit;
	missionProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
	saveMissionProfileNamespace;
}];

player addEventHandler ["Reloaded", {
	params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];
	
	_loadout = getUnitLoadout _unit;
	missionProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
	saveMissionProfileNamespace;
}];

player addEventHandler ["OpticsSwitch", {
	params ["_unit", "_isADS"];
	
	_loadout = getUnitLoadout _unit;
	missionProfileNamespace setVariable ["twc_framework_disconnectGear", _loadout];
	saveMissionProfileNamespace;
}];