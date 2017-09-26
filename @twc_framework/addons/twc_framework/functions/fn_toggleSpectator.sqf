/*
* Author: [TWC] Bosenator
* ACRE set spectator is a local only function, this is called via a targetted EH in order to add MP compatability.
*
* Arguments:
* 0: Set Spectator To <BOOLEAN>
*
* Return Value:
* NONE
*
* Public: No
*/
params [["_setSpectator", false]];

[_setSpectator] call acre_api_fnc_setSpectator;