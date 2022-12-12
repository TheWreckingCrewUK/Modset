params ["_logic", "_units", "_activated"];

if !(_activated) exitWith {};
if !(isServer) exitWith{};

missionNameSpace setVariable ["TWC_enablePublicCPRChance", (_logic getVariable ["enablePublicCPRChance", false]), true];