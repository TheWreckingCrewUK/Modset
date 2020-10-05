if (!(hasInterface) || isDedicated) exitWith {};
if !(alive player) exitWith {};
params [["_proximity", 10], ["_shootdistance", 300]];

// Should it run?
if (((vehicle player) == player) || (isTurnedOut player) || TWC_Suppress_inExposedVehicle) then {
	
	_danger = (((((_proximity * -1) + 10) * (1/10)) - ((_shootdistance * 0.0005) min 1)) max 0);
	//tolerance system for heavy fire
	_tolerance = missionnamespace getvariable ["twc_suppressiontolerance", 0];
	_lastflinch = missionnamespace getvariable ["twc_suppressionlastflinch", 0];
	_fear = missionnamespace getvariable ["twc_suppressionfear", 5];
	
	//if the last flinch wasn't long ago, increase the tolerance
	if (_lastflinch > (time - 120)) then {
		_tolerance = (_tolerance + (_danger * 0.1)) min 5;
		twc_suppressiontolerance = _tolerance;
	} else {
		//if not, reset it and add some long term inoculation so it doesn't affect the player as badly next time
		_fear = (_fear * 0.9);
		twc_suppressionfear = _fear;
		
		twc_suppressiontolerance = (5 - _fear);
		_tolerance = 0;
	};
	
	
	_shake = ((6 * _danger) - _tolerance);
	if (_shake <= 0) exitwith {};
	
	// Flinch at first shot, if it's been 2 minutes since last being shot at
//	if ((time - TWC_Suppress_lastShotTime) >= 0.5) then {
		addCamShake [_shake, 0.3, 80];
		//systemchat ("flinch with " + (str ([_tolerance, _danger, _proximity])));
//	};

	if (_lastflinch < (time - 4)) then {
		if (isWeaponDeployed player) then {
			TWC_Suppress_impactBlur ppEffectAdjust [0.02, 0.15, 0.15, 0.15];
			TWC_Suppress_impactBlur ppEffectCommit 0;
		} else {
			TWC_Suppress_impactBlur ppEffectAdjust [0.02, 0.2, 0.2, 0.2];
			TWC_Suppress_impactBlur ppEffectCommit 0;
		};

		TWC_Suppress_impactCC ppEffectAdjust [1, (((1 + (0.3 * _danger)) - (_tolerance * 0.03)) max 1), (((-0.3 * _danger) + (_tolerance * 0.03)) min 0), [0, 0, 0, 0.0], [1, 1, 1, 1], [1, 1, 1, 0]];
		TWC_Suppress_impactCC ppEffectCommit 0;

		[true] call TWC_Suppress_fnc_clearImpactEffect;
	};
	
	twc_suppressionlastflinch = time;
};