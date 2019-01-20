/*
* Author: [TWC] Bosenator
* Returns if the unit is a member of The Wrecking Crew.
*
* Arguments:
* 0: Target <OBJECT>
*
* Return Value:
* 0: If unit is a member or not <BOOLEAN>
*
* Public: No
*/
params ["_target"];

private _squadParams = squadParams _target;

if (_squadParams isEqualTo []) exitWith { false };
if ((_squadParams select 0) isEqualTo []) exitWith { false };
((_squadParams select 0) select 1) == "The Wrecking Crew UK"