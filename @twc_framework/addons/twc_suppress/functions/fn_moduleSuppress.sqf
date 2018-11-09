params ["_logic", "_units", "_activated"];

if (!_activated || !isServer) exitWith {};

_targetType = _logic getVariable ["target", "T_Module"];
_radius = _logic getVariable ["radius", 0];
_triggerName = _logic getVariable ["triggerName", ""];

switch (_targetType) do {
	case "T_PlayersRand": { [_triggerName, _radius, _units] call TWC_Suppress_fnc_suppressRandPlayersInArea; };
	case "T_Module";
	default { [(getPos _logic), _radius, _units] call TWC_Suppress_fnc_suppressPos; };
};