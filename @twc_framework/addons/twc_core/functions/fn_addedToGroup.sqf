params ["_caller", "_target"];

if (_target == ACE_player) then {
	_message = parseText format ["%1 has added you to their group <br />", name _caller];
	[_message] call ace_common_fnc_displayTextStructured;
};