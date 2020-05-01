params ["_pos","_dir","_type","_cargo"];

if (!isServer) exitwith {};

if (typeName _pos == "STRING") then {_pos = getMarkerPos _pos};

_spawnPos = _pos getPos [2000, _dir - 180];
_spawnPos set [2, 50];
_deletePos = _pos getPos [2000, _dir];
_deletePos set [2, 50];

_side = getNumber (configFile >> "CfgVehicles" >> _type >> "side");
_side = switch (_side) do {
	case 0: {east};
	case 1: {west};
	case 2: {resistance};
	case 3: {civilian};
};

_vehicleArray = [_spawnPos, _dir, _type, _side] call BIS_fnc_spawnVehicle;
_vehicleArray params ["_heli", "_crew", "_group"];

if ("TWC_AmmoBox_Other_Pallet" in _cargo) then {
	_pallet = "TWC_AmmoBox_Other_Pallet" createVehicle _spawnPos;
	_palletCargo = _cargo - ["TWC_AmmoBox_Other_Pallet"];
	{
		[_x, _pallet, true] call ace_cargo_fnc_loadItem;
	} forEach _palletCargo;
	
	_cargo = _pallet;
} else {
	_cargo = (_cargo select 0) createVehicle _spawnPos;
};

_heli setSlingLoad _cargo;

_heli setVelocityModelSpace [0, 50, 0];
_heli limitSpeed 250;
_heli flyInHeight 50;

_wp1 = _group addWaypoint [_pos, 0];
_wp2 = _group addWaypoint [_deletePos, 0];

_wp1 setWaypointType "UNHOOK";
_wp2 setWaypointType "MOVE";

_wp1 setWaypointBehaviour "CARELESS";
_wp2 setWaypointStatements ["true", "deleteVehicle (vehicle this); {deleteVehicle _x} forEach (units this);"];