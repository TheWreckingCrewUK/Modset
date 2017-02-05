/*
    GrenadeStop v0.8 for ArmA 3 Alpha by Bake (tweaked slightly by Rarek)
    
    DESCRIPTION:
    Stops players from throwing grenades in safety zones.
    
    CONFIGURATION:
    Edit the #defines below.
*/
params ["_range"];

 if (isDedicated) exitWith {};
if(!hasInterface)exitWith{};

if (_range == 0) exitWith {};

twc_baseSafezoneRange = _range;
if (getMarkerColor "base" == "") exitWith {systemChat "No shooting in base is enabled, but no base marker is defined"};

player addEventHandler ["Fired", {
	if (((_this select 0) distance (getMarkerPos "base")) < twc_baseSafezoneRange) then
	{
		deleteVehicle (_this select 6);
		titleText ["Don't shoot or throw grenades on base!", "PLAIN", 3];
	};
}];