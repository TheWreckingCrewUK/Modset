if(isServer)then{
	["allVehicles","init",{[_this select 0] call twc_fnc_handleSpawn}, nil, nil, true] call CBA_fnc_addClassEventHandler;
};