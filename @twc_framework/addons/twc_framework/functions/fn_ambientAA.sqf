params ["_vehicle", "_pos"];

if !(local _vehicle) exitwith {};

_vehicle setVehicleAmmo 1;
_randomPos = [_pos, 0, 50] call BIS_fnc_findSafePos;
_randomPos set [2, random [100, 150, 200]];

switch (typeOf _vehicle) do {
	case "LIB_FlaK_36_AA": {throw "Invalid AA"};
	case "LIB_FlaK_36_ARTY";
	case "LIB_FlaK_36": {
		(gunner _vehicle) doWatch _randomPos;
		[{_this fireAtTarget [objNull]}, _vehicle, 5] call CBA_fnc_waitAndExecute;
		[{[_this select 0, _this select 1] call twc_fnc_ambientAA}, [_vehicle, _pos], 15] call CBA_fnc_waitAndExecute;
	};
	default {
		(gunner _vehicle) doSuppressiveFire _randomPos;
		[{[_this select 0, _this select 1] call twc_fnc_ambientAA}, [_vehicle, _pos], 8] call CBA_fnc_waitAndExecute;
	};
};