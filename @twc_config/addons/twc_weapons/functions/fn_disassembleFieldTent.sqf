/*
* Author: [TWC] jayman
* Turns the forward base tent back into the backpack
*
* Arguments:
* 0: Player <Unit>
*
* Return Value:
* NOTHING
*
* Example:
* [player] call twc_weapons_fnc_disassembleFieldTent;
*
* Public: No
*/

params["_unit"];

deleteVehicle ForwardBaseFlag;
deleteVehicle ForwardBaseTent;
ForwardBasePos = nil;

_ground = "groundWeaponHolder" createVehicle (position _unit);
_ground addWeaponCargoGlobal ["twc_fieldTent",1];