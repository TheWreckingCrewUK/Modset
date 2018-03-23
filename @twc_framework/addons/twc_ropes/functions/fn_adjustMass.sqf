params ["_obj", "_heli", ["_ropes", []]];

_lift = [_heli] call twc_ropes_fnc_getLiftCapability;
_originalMass = _obj getVariable ["twc_rope_original_mass", getMass _obj];

// Is mass adjustment needed?
if( _originalMass >= ((_lift select 0)*0.8) && _originalMass <= _lift select 1 ) then {
	private ["_originalMassSet","_ends","_endDistance","_ropeLength"];
	
	_originalMassSet = (getMass _obj) == _originalMass;
	while { _obj in (ropeAttachedObjects _heli) && _originalMassSet } do {
		{
			_ends = ropeEndPosition _x;
			_endDistance = (_ends select 0) distance (_ends select 1);
			_ropeLength = ropeLength _x;
			if((_ropeLength - 2) <= _endDistance && ((position _heli) select 2) > 0 ) then {
				[[_obj, ((_lift select 0) * 0.8)],"twc_ropes_fnc_ropeSetMass", _obj, false, true] spawn BIS_fnc_MP;
				_originalMassSet = false;
			};
		} forEach _ropes;
		
		sleep 0.1;
	};

	while { _obj in (ropeAttachedObjects _heli) } do {
		sleep 0.5;
	};

	[[_obj, _originalMass],"twc_ropes_fnc_ropeSetMass", _obj, false, true] spawn BIS_fnc_MP;
};