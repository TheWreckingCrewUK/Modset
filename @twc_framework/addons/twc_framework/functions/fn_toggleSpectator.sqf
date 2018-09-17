/*
* Author: [TWC] Bosenator
* ACRE toggle spectator is a local only function, this is called via a targetted EH in order to add MP compatability.
*
* Arguments:
* 0: false <BOOLEAN> (legacy paramater)
*
* Return Value:
* NONE
*
* Public: No
*/
params [["_setSpectator", false]];

_isSpec = [player] call acre_api_fnc_isSpectator;
[!(_isSpec)] call acre_api_fnc_setSpectator;