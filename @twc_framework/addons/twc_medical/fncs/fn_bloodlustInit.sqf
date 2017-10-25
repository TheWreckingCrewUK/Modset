/*
 * Bloodlust Compatability - insta kills a unit, if they meet the threshold
 * If a user has bloodlust, they should see the vaporization - otherwise, they'll just see a ragdoll
 */
// Make sure player is initialized
if (!isDedicated) exitWith {};

_TWC_VaporizedUnitCompat = {
	params ["_unit"];

	_unit setVariable ["ace_medical_inReviveState", nil, true];
	_unit setVariable ["ace_medical_reviveStartTime", nil];
	
	removeAllItems _unit;
	removeAllWeapons _unit;
	removeAllAssignedItems _unit;
	_unit removeWeaponGlobal "Binocular";
	_unit removeItems "ItemMap";
	
	[_unit, true, true] call ace_medical_fnc_setDead;
};

BloodLust_OnUnitVaporizedEventHandlers pushBack _TWC_VaporizedUnitCompat;