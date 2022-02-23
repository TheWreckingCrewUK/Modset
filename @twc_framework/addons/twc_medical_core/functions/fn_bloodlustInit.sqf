/*
 * Bloodlust Compatability - insta kills a unit, if they meet the threshold
 * If a user has bloodlust, they should see the vaporization - otherwise, they'll just see a ragdoll
 */

if !(isServer) exitWith {};

if (isNil "BloodLust_IsServerSettingsBroadcastedMP") then {
	BloodLust_VaporizationDamageThresholdMP = 1;
	BloodLust_ExplosionDamageThresholdMP = 0.2;
	BloodLust_IsVaporizationEnabledMP = true;
	BloodLust_IsVaporizationGibsEnabledMP = true;
};

["TWC_UnitVaporized", {
	params ["_unit"];

	if (alive _unit) then {
		// might be needed in the future
		//if (!(_unit getVariable ["BloodLust_IsVaporized", false])) exitWith {};
		[_unit] call TWC_Medical_Core_fnc_setDead;

		[{
			params ["_unit"];

			removeAllItems _unit;
			removeAllWeapons _unit;
			removeAllAssignedItems _unit;
			_unit removeWeaponGlobal "Binocular";
			_unit removeItems "ItemMap";

			deleteVehicle (nearestObject [_unit, "WeaponHolderSimulated"]);
		}, _unit] call CBA_fnc_execNextFrame;
	};
}] call CBA_fnc_addEventHandler;