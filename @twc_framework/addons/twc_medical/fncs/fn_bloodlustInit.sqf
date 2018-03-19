/*
 * Bloodlust Compatability - insta kills a unit, if they meet the threshold
 * If a user has bloodlust, they should see the vaporization - otherwise, they'll just see a ragdoll
 */

if (!isServer) exitWith {};

["TWC_UnitVaporized", {
	params ["_unit"];

	if (alive _unit) then {
		// might be needed in the future
		//if (!(_unit getVariable ["BloodLust_IsVaporized", false])) exitWith {};
		[_unit, true, true] call ace_medical_fnc_setDead;

		removeAllItems _unit;
		removeAllWeapons _unit;
		removeAllAssignedItems _unit;
		_unit removeWeaponGlobal "Binocular";
		_unit removeItems "ItemMap";

		_weapon = nearestObject [(getPos _unit), "GroundWeaponHolder"];
		deleteVehicle _weapon;
	};
}] call CBA_fnc_addEventHandler;