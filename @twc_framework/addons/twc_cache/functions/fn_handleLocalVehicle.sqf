params ["_man", "_local"];

if (hasInterface) exitWith {};
if !(local _man) exitWith {};
if !(alive _man) exitWith {};
if (isPlayer _man) exitWith {};

_isStaticGroup = (group _object) getVariable ["twc_statioGroup", false];

if (_isStaticGroup) then {
	_object disableAI "PATH";
	_object forceSpeed 0;
};

// potentially may need to start a new loop here for caching, if handed to HC - will test to confirm