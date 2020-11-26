#define OH_DIV 25.00
#define IM_DIV 15.00

private _deleted = false;

{
	_x params ["_projectile", "_dDist", "_hit", "_shooter"];
	
	if !(alive _projectile) then {
		TWC_Suppress_Queue set [_forEachIndex, objNull];
		_deleted = true;
	} else {
		if ((player distance _projectile) <= _dDist) then {
			private _divisor = OH_DIV;
			private _pPos = getPosATL _projectile;
			private _lis = lineIntersectsSurfaces [eyePos _shooter, eyePos player, player, _shooter];
		//	systemchat (str _lis);
			if (!(_lis isEqualTo [])) then {
				_dDist = _dDist * 0.7;
				_hit = (_hit * 0.2);
				//systemchat "cover";
			} else {
				if (isWeaponDeployed player) then { _hit = _hit - (_hit * 0.3); };
			};
			_hit = _hit / TWC_Suppress_modifier;
		//	systemchat (str ([(_pPos distance player), _dDist]));
			_hitdistance = (_pPos distance player);
			
			if (_hitdistance <= 10) then {
				_shooterdistance = (_shooter distance player);
				[_hitdistance, _shooterdistance] call TWC_Suppress_fnc_impact;
			};
			if (_hitdistance <= _dDist) then {
				_divisor = IM_DIV;
				TWC_Suppress_lastShotTime = time;
			};
			
			if (_divisor != 0) then {
				if ((vehicle player == player) || (isTurnedOut player) || (TWC_Suppress_inExposedVehicle)) then {
					TWC_Suppress_threshold = (TWC_Suppress_threshold + (_hit/_divisor)) min TWC_Suppress_maxThreshold;
				};
			};
			
			TWC_Suppress_Queue set [_forEachIndex, objNull];
			_deleted = true;
		};
	};
	nil
} forEach TWC_Suppress_Queue;

if (_deleted) then {
	TWC_Suppress_Queue = TWC_Suppress_Queue - [objNull];
	_deleted = false;
};