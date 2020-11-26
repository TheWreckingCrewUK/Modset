params ["_triggerName", "_units", "_radius"];
// trigger, random radius, and the units to suppress with

if !(isServer) exitWith {};

// find the trigger, and adapt it!
_trigger = objNull;

{
	if (missionNamespace getVariable _x isEqualTo _triggerName) then {
		_trigger = _x;
	};
} forEach allVariables missionNamespace;

if (_trigger isEqualTo objNull) exitWith {
	systemChat format ["Suppress Module: Unable to find trigger %1", _triggerName];
};

// make a new local trigger, copying the size of the original trigger
_playersTrigger = createTrigger ["EmptyDetector", getPosWorld (_trigger), false];
_playersTrigger setVariable ["units", _units];
_playersTrigger setVariable ["radius", _radius];
_playersTrigger setTriggerActivation (triggerActivation _trigger);
_playersTrigger setTriggerArea (triggerArea _trigger);
_playersTrigger setTriggerStatements [
	"this",
	"[thisList, (thisTrigger getVariable ""units""), (thisTrigger getVariable ""radius"")] call TWC_Suppress_fnc_suppressPlayers;",
	""
];
