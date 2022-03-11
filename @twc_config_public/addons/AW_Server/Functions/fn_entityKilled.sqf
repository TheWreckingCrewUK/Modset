/*
	File: fn_entityKilled.sqf
	Author: Dom
	Description: Called when any entity is killed
*/
params ["_unit","_killer","_instigator"];
if (isNull _unit) exitWith {};

if (_unit isKindOf "CAManBase") then {
	private _side = side (group _unit);
	if (_side isEqualTo west) exitWith {AW_bluforDeaths = AW_bluforDeaths + 1};
	if (_side isEqualTo east) exitWith {
		AW_opforDeaths = AW_opforDeaths + 1;
		if (AW_opforDeaths % 20 isEqualTo 0) then {
			[1] call AW_fnc_adjustThreat;
		};
	};
	if (_side isEqualTo resistance) exitWith {
		AW_guerillaDeaths = AW_guerillaDeaths + 1;
		if (side _killer isEqualTo west) then {
			AW_guerillaCooldown = (AW_guerillaCooldown max CBA_missionTime) + 300;
			publicVariable "AW_guerillaCooldown";
		};
	};
	if (_side isEqualTo civilian) exitWith {
		AW_civilianDeaths = AW_civilianDeaths + 1;
		if (side _killer isEqualTo west) then {
			[_killer] call AW_fnc_civilianKilled;
		};
	};
} else {
	if (_unit isKindOf "LandVehicle" || {_unit isKindOf "Ship" || {_unit isKindOf "Air"}}) then {
		private _class = typeOf _unit;
		private _bluforVehicles = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforLightVehicles");
		_bluforVehicles append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforHeavyVehicles"));
		_bluforVehicles append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforAirVehicles"));
		_bluforVehicles append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforNavalVehicles"));
		_bluforVehicles append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforLogistics"));
		_bluforVehicles = _bluforVehicles apply {if (_x select 0 isEqualType []) then {(_x select 0) select 0} else {_x select 0}};
		if (_class in _bluforVehicles) exitWith {
			call {
				if (_unit isKindOf "Air") exitWith {AW_bluforAirDestroyed = AW_bluforAirDestroyed + 1};
				if (_unit isKindOf "Ship") exitWith {AW_bluforNavalDestroyed = AW_bluforNavalDestroyed + 1};
				if (_unit isKindOf "Tank") exitWith {AW_bluforArmourDestroyed = AW_bluforArmourDestroyed + 1};
				AW_bluforVehiclesDestroyed = AW_bluforVehiclesDestroyed + 1
			};

			private _mobileRespawnIndex = AW_mobileRespawns find _unit;
			if (_mobileRespawnIndex isNotEqualTo -1) then {
				AW_mobileRespawns deleteAt _mobileRespawnIndex;
				publicVariable "AW_mobileRespawns";
			};

			if (_unit isKindOf "Air") then {
				private _heliIndex = AW_currentHelicopters find _unit;
				if (_heliIndex isNotEqualTo -1) then {
					AW_currentHelicopters deleteAt _heliIndex;
					publicVariable "AW_currentHelicopters";
				} else {
					private _planeIndex = AW_currentPlanes find _unit;
					if (_planeIndex isNotEqualTo -1) then {
						AW_currentPlanes deleteAt _planeIndex;
						publicVariable "AW_currentPlanes";
					};
				};
			};
		};

		private _opforVehicles = getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforLightVehicles");
		_opforVehicles append (getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforHeavyVehicles"));
		_opforVehicles append (getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforRotaryVehicles"));
		_opforVehicles append (getArray(missionConfigFile >> "Opfor_Setup" >> "AW_opforFixedWingVehicles"));
		if (_class in _opforVehicles) exitWith {
			call {
				if (_unit isKindOf "Air") exitWith {AW_opforAirDestroyed = AW_opforAirDestroyed + 1};
				if (_unit isKindOf "Ship") exitWith {AW_opforNavalDestroyed = AW_opforNavalDestroyed + 1};
				if (_unit isKindOf "Tank") exitWith {AW_opforArmourDestroyed = AW_opforArmourDestroyed + 1};
				AW_opforVehiclesDestroyed = AW_opforVehiclesDestroyed + 1
			};
		};

		private _guerVehicles = getArray(missionConfigFile >> "Guerilla_Setup" >> "AW_guerillaVehicles");
		if (_class in _guerVehicles) exitWith {AW_guerillaVehiclesDestroyed = AW_guerillaVehiclesDestroyed + 1};

		private _civVehicles = getArray(missionConfigFile >> "Civilian_Setup" >> "AW_civilianVehicleTypes");
		_civVehicles append (getArray(missionConfigFile >> "Civilian_Setup" >> "AW_civilianAircraftTypes"));
		if (_class in _civVehicles) exitWith {
			AW_civilianVehiclesDestroyed = AW_civilianVehiclesDestroyed + 1;
			if (side _killer isEqualTo west && !(_unit getVariable ["AW_playerUsed",false])) then {
				["A civilian vehicle has been destroyed."] remoteExecCall ["AW_fnc_notify",-2];
				private _repLoss = getNumber(missionConfigFile >> "Core_Settings" >> "AW_seizedCivVehicleRepLoss");
				[_repLoss] call AW_fnc_adjustCivRep;
			};
		};
	};
};