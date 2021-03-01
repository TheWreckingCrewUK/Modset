private _deleted = false;

{
	_x params ["_projectile", "_dDist", "_hit"];
	
	if !(alive _projectile) then {
		TWC_Suppress_Queue set [_forEachIndex, objNull];
		_deleted = true;
	} else {
		if ((player distance _projectile) <= _dDist) then {
			private _divisor = OH_DIV;
			private _pPos = getPosATL _projectile;
			private _lis = lineIntersectsSurfaces [ATLToASL _pPos, eyePos player, player];
			if (_lis isEqualTo []) then { _dDist = _dDist * 0.55; };
			if (isWeaponDeployed player) then { _hit = _hit - (_hit / 2.5); };
			
			if ((_pPos distance player) <= _dDist) then {
				_divisor = IM_DIV;
				TWC_Suppress_lastShotTime = time;
				
				if ((_pPos distance player) <= 3.2) then {
					[] call TWC_Suppress_fnc_impact;
				};
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