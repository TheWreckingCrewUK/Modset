params ["_heli", "_player"];

// check config entry first and foremost
private _vehicleCfg = configFile >> "CfgVehicles" >> typeOf (_heli);
private _isCfgBanned = isNumber (_vehicleCfg >> "TWC_CantDeployRopes") && {(getNumber (_vehicleCfg >> "TWC_CantDeployRopes")) == 1};

if (_isCfgBanned) then {
	false;
} else {
	// isn't config banned, perhaps we're on public though, return obj variable status
	_heli getVariable ["TWC_CantDeployRopes", false];
}