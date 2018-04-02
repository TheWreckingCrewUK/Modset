params ["_heli", "_player"];

{
	_attachedObj = _x;
	{
		_attachedObj ropeDetach _x;
	} forEach (_heli getVariable ["twc_rope_cargo_ropes", []]);
} forEach ropeAttachedObjects _heli;

_helper = "Land_Can_V2_F" createVehicle position _player;
{
	[_helper, [0, 0, 0], [0,0,-1]] ropeAttachTo _x;
	_helper attachTo [_player, [-0.1, 0.1, 0.15], "Pelvis"];
	hideObjectGlobal _helper;
} forEach (_heli getVariable ["twc_rope_cargo_ropes", []]);

_player setVariable ["twc_Rope_Cargo_Ropes_Picked_Up", _heli, true];
_player setVariable ["twc_Rope_Cargo_Ropes_Picked_Up_Helper", _helper, true];