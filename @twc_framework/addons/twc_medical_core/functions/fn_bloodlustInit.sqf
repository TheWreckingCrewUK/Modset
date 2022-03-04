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
		[_unit, "instant_death"] call TWC_Medical_Core_fnc_setDead;

		// delay call by a frame, to allow code to execute etc. a lot happens on death
		[{ [(_this select 0)] call TWC_Medical_Core_fnc_cleanCorpse; }, _unit] call CBA_fnc_execNextFrame;
	};
}] call CBA_fnc_addEventHandler;