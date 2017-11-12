this addEventHandler ["Local", {
	params ["_object", "_local"];
	
	_isStaticGroup = (group _object) getVariable ["twc_statioGroup", false];
	
	if (_local && _isStaticGroup) then {
		_object disableAI "PATH";
		_object forceSpeed 0; // legacy, but keep it - harmless
		_object setVariable ["acex_headless_blacklist", true, true];
	};
}];