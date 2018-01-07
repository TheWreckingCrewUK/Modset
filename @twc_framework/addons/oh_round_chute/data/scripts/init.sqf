_veh = _this select 0;
if (typeOf _veh == "twc_c5_hercules" || typeOf _veh == "twc_public_c5_hercules" || typeOf _veh == "TWC_Vehicle_Generic_Hercules_RAF") then {
	_veh addAction ["<t color='#FF0000'>Jump Out!</t>",{
		params["_target","_caller","_id","_arguments"];
		[_target, player] call TWC_fnc_jumpout
		},
		nil,
		5,
		false,
		true,
		"",
		"((getPosASL _target) select 2) > 15",
		-1,
		false,
		""
	];
};
