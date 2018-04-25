params ["_heli", "_player"];

if (local _heli) then {
	_helper = (_player getVariable ["twc_Rope_Cargo_Ropes_Picked_Up_Helper", objNull]);

	if(!isNull _heli) then {
		{
			_helper ropeDetach _x;
		} forEach (_heli getVariable ["twc_rope_cargo_ropes",[]]);
		
		detach _helper;
		deleteVehicle _helper;
	};

	_player setVariable ["twc_Rope_Cargo_Ropes_Picked_Up", nil, true];
	_player setVariable ["twc_Rope_Cargo_Ropes_Picked_Up_Helper", nil, true];
} else {
	_this call remoteExecCall [TWC_Ropes_fnc_dropRopes, _heli];
};