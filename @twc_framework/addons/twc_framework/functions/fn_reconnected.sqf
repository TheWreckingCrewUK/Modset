params ["_base"];
	
//Check for Molar. Without molar function ends
if (isNil "molar") exitWith {
	hint "Molar is Missing in Action. Poke management";
};
	
_name = name player;
sleep 3;
if (serverTime > 120) then {
	if (_base == "ForwardBasePos") then {
		while {player distance2D ForwardBasePos < 200 || player distance2D molar < 50} do {
			format ["%1 has Reconnected and is at the Forward Base", _name] remoteExecCall ["hint", "molar"];
			sleep 30;
		};
	} else {
		while {player distance2D (getMarkerPos "base") < 200 || player distance2D molar < 50} do {
			format ["%1 has Reconnected and is at the Base", _name] remoteExecCall ["hint", "molar"];
			sleep 30;
		};
	};
};