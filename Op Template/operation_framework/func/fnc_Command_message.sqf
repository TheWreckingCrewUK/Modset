 private ["_message","_marker","_radius"
        ];
    _message = _this select 0;
    if (player == p1) then {
	systemchat format ["%1",_message];
	};