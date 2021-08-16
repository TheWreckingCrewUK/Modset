params ["_target"];

_resupplyAvailability = [_target] call TWC_Box_Replenish_fnc_getReplenishCounts;
_resupplyString = "";

{
	_displayString = "";
	_count = (_x select 1);
	
	if (_count == 0) then { _displayString = "unavailable"; };
	if (_count < 0) then { _displayString = "no limits"; };
	if (_displayString == "") then { _displayString = _count; };
	
	_resupplyString = _resupplyString + "<br/> " + format ["%1: %2", toUpperANSI (_x select 0), _count];
} forEach _resupplyAvailability;

[parsetext (("<t align='center'><t size='1.5'><t color='#008080'>Replenish Available</t></t></t><br/>") + _resupplyString), false, 3] call ace_common_fnc_displayText;