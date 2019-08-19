params ["_base"];

_mgmt = [];

{
	if ([_x] call TWC_Core_fnc_ismanagement) then {
		_mgmt pushback _x;
	};
} foreach allplayers;
	
_name = name player;

//longer sleep since they're blind for a while when spawning
sleep 20;
if (serverTime > 120) then {
	if (_base == "ForwardBasePos") then {
		while {player distance2D ForwardBasePos < 200} do {
			{
				format ["%1 has Reconnected and is at the Forward Base", _name] remoteExecCall ["hint", "molar"];
			} foreach _mgmt;
			sleep 30;
		};
	} else {
		while {player distance2D (getMarkerPos "base") < 200} do {
			{
				format ["%1 has Reconnected and is at the Base", _name] remoteExecCall ["hint", "molar"];
			} foreach _mgmt;
			sleep 30;
		};
	};
};