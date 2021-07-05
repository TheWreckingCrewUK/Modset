params ["_target"];

_resupplyAvailability = [_target] call TWC_Box_Replenish_fnc_getReplenishCounts;
_resupplyString = "";

{
	_count = (_x select 1);
	if (_count == 0) then { _count = "unavailable"; };
	if (_count < 0) then { _count = "infinite"; };
	
	_resupplyString = _resupplyString + "<br/> " + format ["%1: %2", toUpperANSI (_x select 0), _count];
} forEach _resupplyAvailability;

_structuredOutputText = parsetext (("<t align='center'><t size='1.5'><t color='#008080'>Replenish Available:</t></t></t><br/>") + _resupplyString);
[_structuredOutputText, false, 3] call ace_common_fnc_displayText;