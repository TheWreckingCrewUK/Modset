_veh = _this select 0;
if (_veh isKindOf "twc_c5_hercules") then {
	_veh addAction ["<t color='#FF0000'>Jump Out!</t>", {[nearestObject [player, "twc_c5_hercules"],player] call TWC_fnc_jumpout}];
};
