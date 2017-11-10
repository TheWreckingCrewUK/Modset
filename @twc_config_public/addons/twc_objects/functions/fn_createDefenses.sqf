/*
* Author: [TWC] jayman
* Creates the defenses
*
* Arguments:
* 0: radio Table <Object>
*
* Return Value:
* <STRING>
*
* Example:
* _return = [radioTable] call twc_fnc_createDefenses;
*
* Public: No
*/

params["_crate","_item","_cost"];
_return = "";

if(getMarkerColor "respawn_forwardBase" == "")exitWith{_return = "You must create the forward base before you can spawn the defenses."; _return};

_supplies = ({_x == "TWC_ForwardBase_Supplies"}count (itemCargo _crate));
if(_supplies < _cost)exitWith{_return = "There is not enough supplies to create that item"; _return};

_item createVehicle (position _crate);
clearItemCargoGlobal _crate;
_crate addItemCargoGlobal ["TWC_ForwardBase_Supplies", (_supplies - _cost)];

_return = format["%1 spawned successfully",getText(configFile >> "CfgVehicles" >> _item >> "displayName")];
_return