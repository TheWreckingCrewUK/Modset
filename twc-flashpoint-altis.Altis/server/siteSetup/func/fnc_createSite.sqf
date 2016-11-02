params["_marker"];

_type = call{
	_type = if(getMarkerType _marker == "o_inf")exitWith{"inf"};
	_type = if(getMarkerType _marker == "b_plane")exitWith{"town"};
	_type = if(getMarkerType _marker == "o_motor_inf")exitWith{"village"};
	_type = if(getMarkerType _marker == "o_mortar")exitWith{"inf"};
	_type = if(getMarkerType _marker == "o_mech_inf")exitWith{"mech"};
	_type = if(getMarkerType _marker == "o_recon")exitWith{"hamlet"};
	_type = if(getMarkerType _marker == "o_installation")exitWith{"radar"};
	_type = if(getMarkerType _marker == "o_support")exitWith{"aa"};
	_type = if(getMarkerType _marker == "o_maint")exitWith{"hq"};
	_type = if(getMarkerType _marker == "o_hq")exitWith{"mainHQ"};
	_type = if(true)exitWith{"inf"};
	_type
};

_trg = createTrigger ["EmptyDetector", getMarkerPos _marker];
_trg setTriggerArea [1000, 1000, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", format["['%2'] spawn twc_%1; ['%2',true] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle thisTrigger",_type,_marker], ""];