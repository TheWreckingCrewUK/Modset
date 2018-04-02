params ["_heli"];

if( _heli isKindOf "Helicopter" ) then {
	{
		_attachedObj = _x;
		{
			_attachedObj ropeDetach _x;
		} forEach (_heli getVariable ["twc_rope_cargo_ropes",[]]);
	} forEach ropeAttachedObjects _heli;
	
	[_heli] call TWC_Ropes_fnc_retractRopes;
};