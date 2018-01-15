/*
 * Bloodlust Compatability - insta kills a unit, if they meet the threshold
 * If a user has bloodlust, they should see the vaporization - otherwise, they'll just see a ragdoll
 */

_debugMode = missionNameSpace getVariable ["twc_debugEnabled", false];

if (_debugMode) then {
	"bloodlustInit called" remoteExec ["hint", -2, true];
};

// defaults just incase server hasn't broadcasted values
if (isNil "BloodLust_IsServerSettingsBroadcastedMP") then {
	BloodLust_VaporizationDamageThresholdMP = 1;
	BloodLust_ExplosionDamageThresholdMP = 0.2;
	BloodLust_IsVaporizationEnabledMP = true;
	BloodLust_IsVaporizationGibsEnabledMP = false;
};

if (isServer) then {
	addMissionEventHandler ["EntityRespawned", {
		_player = (_this select 1);
		
		if (isPlayer _player) then {
			_player hideObjectGlobal false; // force visibility on spawn
		};
	}];
};

// explosion is a local event only, so rebroadcast to the server to handle
if (hasInterface) then {
	player addEventHandler ["Explosion", {
		_this remoteExec ["_TWC_VaporizedUnitCompat"];
		
		if (_debugMode) then {
			player globalChat "Explosion event fired";
		};
	}];
};

_TWC_VaporizedUnitCompat = {
	params ["_unit", "_damage"];
	
	if (!isServer) exitWith {}; // catch-case
	
	if (BloodLust_IsVaporizationEnabledMP && _damage >= BloodLust_VaporizationDamageThresholdMP) then {
		[_TWC_VaporizeKillUnit, [_unit], 1] call CBA_fnc_waitAndExecute; // wait for all other events to fire first

		if (_debugMode) then {
			"_TWC_VaporizedUnitCompat called" remoteExec ["hint", -2, true];
		};
	} else {
		[{ if (alive _unit) then { _unit hideObjectGlobal false; }; }, [_unit], 1] call CBA_fnc_waitAndExecute; // double check (will blink 1 sec, if they were invisible)
	};
};

_TWC_VaporizeKillUnit = {
	params ["_unit"];

	// as it's been a second, should fire just fine (tm)
	_isUnitVaporized = _unit getVariable ["BloodLust_IsVaporized", false];

	if (_debugMode) then {
		"_TWC_VaporizeKillUnit called" remoteExec ["hint", -2, true];
	};

	if (_isUnitVaporized) then {
		removeAllItems _unit;
		removeAllWeapons _unit;
		removeAllAssignedItems _unit;
		_unit removeWeaponGlobal "Binocular";
		_unit removeItems "ItemMap";
		
		_weapon nearestObject [getPos (_unit), ["weaponholder"]];
		deleteVehicle _weapon;
		
		[_unit, true, true] call ace_medical_fnc_setDead;

		if (_debugMode) then {
			"setDead called" remoteExec ["hint", -2, true];
		};
	};
};