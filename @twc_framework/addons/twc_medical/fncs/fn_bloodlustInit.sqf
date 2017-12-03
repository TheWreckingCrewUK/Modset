/*
 * Bloodlust Compatability - insta kills a unit, if they meet the threshold
 * If a user has bloodlust, they should see the vaporization - otherwise, they'll just see a ragdoll
 */

// defaults just incase server hasn't broadcasted values
if (isNil "BloodLust_IsServerSettingsBroadcastedMP") then {
	BloodLust_VaporizationDamageThresholdMP = 1;
	BloodLust_ExplosionDamageThresholdMP = 0.2;
	BloodLust_IsVaporizationEnabledMP = true;
	BloodLust_IsVaporizationGibsEnabledMP = false;
};

_unit addEventHandler ["Explosion", {
	// explosion is a local event only, so rebroadcast to the server to handle
	_this remoteExec ["_TWC_VaporizedUnitCompat"];
};

_TWC_VaporizedUnitCompat = {
	params ["_unit", "_damage"];
	
	if (!isServer) exitWith {}; // catch-case
	
	if (BloodLust_IsVaporizationEnabledMP && _damage >= BloodLust_VaporizationDamageThresholdMP) then {
		[_TWC_VaporizeKillUnit, [_unit], 1] call CBA_fnc_waitAndExecute; // wait for all other events to fire first
	};
};

_TWC_VaporizeKillUnit = {
	params ["_unit"];

	// as it's been a second, should fire just fine (tm)
	_isUnitVaporized = _unit getVariable ["BloodLust_IsVaporized", false];

	if (_isUnitVaporized) then {
		removeAllItems _unit;
		removeAllWeapons _unit;
		removeAllAssignedItems _unit;
		_unit removeWeaponGlobal "Binocular";
		_unit removeItems "ItemMap";
		
		[_unit, true, true] call ace_medical_fnc_setDead;
	};
};