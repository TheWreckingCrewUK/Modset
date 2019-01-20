/*
* Author: [TWC] Bosenator
* Returns if the target is defined withing CfgManagement or not.
*
* Arguments:
* 0: Target <OBJECT>
*
* Return Value:
* 0: If unit is defined in CfgManagement <BOOLEAN>
*
* Public: No
*/
params ["_target"];

if (!isPlayer _target) exitWith { false };
isClass (configFile >> "cfgManagement" >> (getPlayerUID _target))