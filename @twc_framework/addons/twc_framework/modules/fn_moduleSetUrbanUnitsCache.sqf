/*
 * Author: Bosenator
 * Module function to trigger the uncaching of connected unit(s).
 *
 * Arguments:
 * 0: The Module Logic <OBJECT>
 * 1: Synced Objects <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
params ["_logic", "_units", "_activated"];

if (!_activated || !isServer) exitWith {};

_aiCacheRange = missionNamespace getVarible ["twc_cachingAIRange", 1500];
_urbanCacheRange = (missionNamespace getVarible ["TWC_Cache_UrbanRange", 750]) min _aiCacheRange;

if (_urbanCacheRange > 0) then {
	_group setVariable ["TWC_Cache_Range", _urbanCacheRange];
};

if (!isNull _logic) then {
	deleteVehicle _logic;
};