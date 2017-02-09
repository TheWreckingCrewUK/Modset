/* Shooting in base stopper
* Created by [twc] jayman
* adds an event handler that stops the shooting near the base flag
*
* input is the range
*/
params ["_range"];

if(!hasInterface)exitWith{};

if (_range == 0) exitWith {};

//I really wish this wasn't a global variable
twc_baseSafezoneRange = _range;
if (getMarkerColor "base" == "") exitWith {systemChat "No shooting in base is enabled, but no base marker is defined"};

_handle = player addEventHandler ["Fired", {
	if (((_this select 0) distance (getMarkerPos "base")) < twc_baseSafezoneRange) then
	{
		deleteVehicle (_this select 6);
		titleText ["Don't shoot or throw grenades on base!", "PLAIN", 3];
	};
}];

//Deletes the event handler after 5 minutes.
[_handle] spawn {
	sleep 300;
	player removeEventHandler ["Fired",(_this select 0)];
};