params ["_logic","_units","_activated"];

if !(_activated) exitWith {};
if !(isServer)exitWith{};

_enabled = _logic getVariable "enabled";
if !(_enabled) exitWith {};

{
	if(((units _x) select 0) in (switchableUnits + playableUnits)) then{
		_x setVariable ["twc_cacheDisabled",true];
	};
}forEach allGroups;
missionNameSpace setVariable ["twc_cachingAIRange",(_logic getVariable "aiRange")];
missionNameSpace setVariable ["twc_cachingVehicleRange",(_logic getVariable "vehicleRange")];

if(missionNameSpace getVariable "twc_cachingAiRange" > 0)then{
	["CAManBase","init",{
		if(leader (_this select 0) == (_this select 0))then{
			_group = group (_this select 0);
			[false,(group (_this select 0)),(missionNameSpace getVariable "twc_cachingAiRange")] spawn twc_fnc_initAICache
		};
	}, true, nil, true] call CBA_fnc_addClassEventHandler;
};

if(missionNameSpace getVariable "twc_cachingVehicleRange" > 0)then{
	["AllVehicles","init",{
		[false,(_this select 0),(missionNameSpace getVariable "twc_cachingVehicleRange")] spawn twc_fnc_initVehicleCache
	}, true, ["Man","Static"], true] call CBA_fnc_addClassEventHandler;
};