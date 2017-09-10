/*
* Author: [TWC] Bosenator
* Adds all existing objects to the curator
*
* Arguments:
* 0: CURATOR <LOGIC UNIT>
*
* Return Value:
* Success <BOOL>
*
* Public: No
*/
params ["_curator"];

_objects = allMissionObjects "";
_curator addCuratorEditableObjects [_objects, true];