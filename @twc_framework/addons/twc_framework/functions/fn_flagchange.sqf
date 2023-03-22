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

_object addAction ["Raise British Flag", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	_target setFlagTexture "\A3\Data_F\Flags\Flag_uk_CO.paa";
	_caller playAction "TakeFlag";
	["twc_framework_britishFlagRaised", [_target, _caller]] call CBA_fnc_globalEvent;
}];