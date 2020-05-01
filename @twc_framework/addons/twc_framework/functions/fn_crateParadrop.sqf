params ["_pos","_dir","_type","_cargo"];

if (!isServer) exitwith {};

if (typeName _pos == "STRING") then {_pos = getMarkerPos _pos};

_spawnPos = _pos getPos [4000, _dir - 180];
_spawnPos set [2, 300];
_deletePos = _pos getPos [4000, _dir];
_deletePos set [2, 300];

_side = switch _type do {
	case "CUP_B_C130J_GB": {west};
	case "LIB_C47_RAF": {resistance};
};

_vehicleArray = [_spawnPos, _dir, _type, _side] call BIS_fnc_spawnVehicle;
_vehicleArray params ["_plane", "_crew", "_group"];

if ("TWC_AmmoBox_Other_Pallet" in _cargo) then {
	_pallet = "TWC_AmmoBox_Other_Pallet" createVehicle _spawnPos;
	_palletCargo = _cargo - ["TWC_AmmoBox_Other_Pallet"];
	{
		[_x, _pallet, true] call ace_cargo_fnc_loadItem;
	} forEach _palletCargo;
	
	_cargo = [_pallet];
};
{
	[_x, _plane, true] call ace_cargo_fnc_loadItem;
} forEach _cargo;

_plane setVelocityModelSpace [0, 200, 0];
_plane limitSpeed 250;
_plane flyInHeight 300;

_wp1 = _group addWaypoint [_pos, 0];
_wp2 = _group addWaypoint [_deletePos, 0];

_wp1 setWaypointType "MOVE";
_wp2 setWaypointType "MOVE";

_wp1 setWaypointStatements ["true", "if (!isServer) exitwith {}; {[_x, (vehicle this), false] call ace_cargo_fnc_paradropItem} forEach ((vehicle this) getVariable ['ace_cargo_loaded', []])"];
_wp2 setWaypointStatements ["true", "deleteVehicle (vehicle this); {deleteVehicle _x} forEach (units this);"];