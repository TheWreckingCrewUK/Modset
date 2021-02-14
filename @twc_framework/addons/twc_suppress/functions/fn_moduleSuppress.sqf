params ["_logic", "_units", "_activated"];

if (!_activated || !isServer) exitWith {};

_targetType = _logic getVariable ["target", "T_Module"];
_radius = _logic getVariable ["radius", 0];
_triggerName = _logic getVariable ["triggerName", ""];

switch (_targetType) do {
	case "T_PlayersRand": { [_triggerName, _units, _radius] call TWC_Suppress_fnc_suppressTriggerPlayers; };
	case "T_Module";
	default { [(getPos _logic), _units, _radius] call TWC_Suppress_fnc_suppressPos; };
};