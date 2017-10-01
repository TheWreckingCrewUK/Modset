/*
 * Bloodlust Compatability - insta kills a unit, if they meet the threshold
 * If a user has bloodlust, they should see the vaporization - otherwise, they'll just see a ragdoll
 */
// Make sure player is initialized
if (isDedicated) exitWith {};
if (!isDedicated && (player != player)) then { waitUntil {player == player}; waitUntil {time > 10}; };
 
// set default local values
if (isNil "BloodLust_IsServerSettingsBroadcastedMP") then {
	BloodLust_VaporizationDamageThresholdMP = 1;
	//BloodLust_ExplosionDamageThresholdMP = 0.2;
	BloodLust_IsVaporizationEnabledMP = true;
};

// function to call when a unit receives an explosion
TWC_Medical_OnUnitExplosion = {
	_this call {
		_unit = _this select 0;
		_damage = _this select 1;
		
		//if (_unit getVariable ["BloodLust_IsVaporized", false]) exitWith {};
		
		if (BloodLust_IsVaporizationEnabledMP 
			 && _damage >= BloodLust_VaporizationDamageThresholdMP
			 && alive _unit) exitWith {
			_unit setVariable ["ace_medical_inReviveState", nil, true];
			_unit setVariable ["ace_medical_reviveStartTime", nil];
			
			removeAllItems _unit;
			removeAllWeapons _unit;
			
			[_unit, true, true] call ace_medical_fnc_setDead;
		};
	};
};

player addEventHandler ["Explosion", {
	[_this] call TWC_Medical_OnUnitExplosion;
}];