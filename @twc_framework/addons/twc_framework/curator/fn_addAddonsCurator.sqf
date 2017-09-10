/*
* Author: [TWC] Bosenator
* Adds all existing addons to the curator
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

if (!isServer) exitWith { false; }
if (isNil TWC_Addons_List) exitWith { false; }

removeAllCuratorAddons _curator;
_curator addCuratorAddons TWC_Addons_List;

true;