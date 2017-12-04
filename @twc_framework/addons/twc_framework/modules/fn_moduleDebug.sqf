params ["_logic", "_units", "_activated"];

if !(isServer) exitWith{};

missionNameSpace setVariable ["twc_debugEnabled", (_logic getVariable "enabled"), true];

if (_logic getVariable ["enabled", false]) then {
	"Debug mode is enabled" remoteExec ["hint", -2, true];
};