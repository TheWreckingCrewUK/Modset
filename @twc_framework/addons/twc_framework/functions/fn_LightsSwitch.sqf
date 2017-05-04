/*
* Author: [TWC] jayman
* Disabled all Lights in an area. Simulates power loss
*
* Arguments:
* 0: Damage <NUMBER>
* 1: POSITION <MARKER>
* 2: Radius <NUMBER>
*
* Return Value:
* NOTHING
*
* Example:
* ["0.95","powerMarker",500] call twc_fnc_lightsSwitch
*
* Public: no
*/

params [["_OnOff",0.95],"_marker","_radius"];

if(!isServer)exitwith{};
{
	_x setDamage _OnOff
}forEach (nearestObjects [(getMarkerPos _marker), ["Lamps_Base_F","PowerLines_base_F","PowerLines_Small_base_F"],_radius]);