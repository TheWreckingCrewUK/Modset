params ["_ao"];

if (RadioTowerCheck == 0) then {
	if ((random 100) < 90) then {
		["functions", _ao, 500] call TWC_fnc_AirAssault
	} else {
		["functions", _ao, _ao] call TWC_fnc_AttackHelicopter
	};
};
