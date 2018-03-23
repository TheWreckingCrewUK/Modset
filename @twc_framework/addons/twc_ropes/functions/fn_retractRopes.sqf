params ["_heli"];

if( _heli isKindOf "Helicopter" ) then {
	_cargoRopesDeployed = _heli getVariable ["twc_rope_cargo_ropes_deployed", false];
	
	if(_cargoRopesDeployed) then {
		{
			[_x,_heli] spawn {
				params ["_rope", "_heli"];
				
				_count = 0;
				ropeUnwind [_rope, 3, 0];

				while {(!ropeUnwound _rope) && _count < 20} do {
					sleep 1;
					_count = _count + 1;
				};

				ropeDestroy _rope;
				_heli setVariable ["twc_rope_cargo_ropes_deployed", false, true];
				_heli setVariable ["twc_rope_cargo_ropes", [], true];
			};
		} forEach (_heli getVariable ["twc_rope_cargo_ropes",[]]);
	};
};