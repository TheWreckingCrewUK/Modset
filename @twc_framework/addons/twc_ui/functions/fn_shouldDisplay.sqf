/*
 * Scans config entry for te vehicle for "TWC_bearingPositions" array. If defined, will add bearing for the seats defined.
 * e.g. TWC_bearingPositions = {"driver", "commander", "gunner", "turret"};
 *
 * If not defined, falls back to a legacy checking system.
 *
 */
params ["_player"];

if (!local _player) exitWith {};
if (vehicle _player == _player) exitWith { false; };

private _vehicle = vehicle _player;
private _playerRole = toLower (_player call CBA_fnc_vehicleRole); // Turret is capitalised by the engine...

private _vehicleHasSetting = isArray (configFile >> "CfgVehicles" >> typeOf (_vehicle) >> "TWC_bearingPositions");

private _bearingPositions = [
	(configFile >> "CfgVehicles" >> typeOf (_vehicle)),
	"TWC_bearingPositions",
	["driver", "commander", "gunner"]
] call BIS_fnc_returnConfigEntry;

private _return = false;

if (_playerRole in _bearingPositions) then { _return = true; };

if (_return && !(_vehicleHasSetting)) then {
	_return = switch (true) do {
		case (_vehicle isKindOf "ParachuteBase"): { false; };
		case (_vehicle isKindOf "Tank");
		case (_vehicle isKindOf "Helicopter");
		case (_vehicle isKindOf "Plane");
		case (_vehicle isKindOf "burnes_foxhound_d_a");
		case (_vehicle isKindOf "burnes_foxhound_w_a");
		case (_vehicle isKindOf "UK3CB_BAF_Jackal_Base_D");
		case (_vehicle isKindOf "Ship"): { true; };
		default { false; };
	};
};

_return;