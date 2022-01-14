/*
	File: fn_forceCreateFactionCrew.sqf
	Author: Dom
	Description: Used for when a vehicles config crew is not the correct faction
*/
params [
	["_vehGroup",grpNull,[grpNull]],
	["_emptyVehicle",objNull,[objNull]]
];

private _squadComposition = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforBasicSquad");
private _driver = [_vehGroup,east,selectRandom _squadComposition,_emptyVehicle] call AW_fnc_createUnit;
_driver moveInDriver _emptyVehicle;
if (fullCrew [_emptyVehicle,"gunner",true] isNotEqualTo []) then {
	private _gunner = [_vehGroup,east,selectRandom _squadComposition,_emptyVehicle] call AW_fnc_createUnit;
	_gunner moveInGunner _emptyVehicle;
};
if (fullCrew [_emptyVehicle,"commander",true] isNotEqualTo []) then {
	private _commander = [_vehGroup,east,selectRandom _squadComposition,_emptyVehicle] call AW_fnc_createUnit;
	_commander moveInCommander _emptyVehicle;
};