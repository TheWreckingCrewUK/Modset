/*
* Author: [TWC] Rik
* Adds an action to any flag this is called on to change the flag to a British one.
*
* Arguments:
* 0: Flag <OBJECT>
*
* Return Value:
* NOTHING
*
* Example:
* [this] call twc_fnc_flagchange;
*
* Public: No
*/
params["_object"];

if (!isServer) exitWith {};

_object addAction ["Raise British Flag", {(_this select 0) setFlagTexture "\A3\Data_F\Flags\Flag_uk_CO.paa"; (_this select 1) playAction "TakeFlag";}];