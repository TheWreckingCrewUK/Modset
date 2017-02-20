/*
* Author: [TWC] jayman
* Checks if the unit or target has the item. Returns bool
*
* Arguments:
* 0: MEDIC <OBJECT> 
* 1: TARET <OBJECT>
* 2: ITEMNAME <STRING>
*
* Return Value:
* BOOL
*
* Example:
* [player,player,'TWC_Syrette'] call twc_fnc_itemCheck
*
* Public: No
*/
params["_unit","_target","_item"];
_true = if(_item in (items _unit) || _item in (items _target))then{true}else{false};
_true