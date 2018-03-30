params ["_target", "_player"];

_ropes = _heli getVariable ["twc_rope_cargo_ropes", [objNull, objNull, objNull, objNull]];

if (!isNull _target && _target distance _player < 5 && _target != _heli) then {
	_ropeLength = ropeLength (_ropes select 0);
	_objDistance = _target distance _heli;

	if ((_objDistance + 2) > _ropeLength) then {
		[{ hint "The ropes are too short. Extend them." }, "BIS_fnc_spawn", _player] call BIS_fnc_MP;
		// make this a sound for muh 'mersion, like the winch coming to a halt ?
		// i really do dislike this lazy way of informing the user atm
	} else {
		[_heli, _player] call twc_ropes_fnc_dropRopes;

		_bbr = boundingBoxReal _target;
		_p1 = _bbr select 0;
		_p2 = _bbr select 1;
		_x1 = (_p1 select 0);
		_y1 = (_p1 select 1);
		_z1 = (_p1 select 2);
		_x2 = (_p2 select 0);
		_y2 = (_p2 select 1);
		_z2 = (_p2 select 2);
		
		[_target, [_x1/2,_y1/2,0], [0,0,-1]] ropeAttachTo (_ropes select 0);
		[_target, [_x2/2,_y1/2,0], [0,0,-1]] ropeAttachTo (_ropes select 1);
		[_target, [_x2/2,_y2/2,0], [0,0,-1]] ropeAttachTo (_ropes select 2);
		[_target, [_x1/2,_y2/2,0], [0,0,-1]] ropeAttachTo (_ropes select 3);
		[_target, _heli, _ropes] spawn twc_ropes_fnc_adjustMass;
	};
};