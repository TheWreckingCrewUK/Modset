/*
* Author(s): [TWC] Hobbs
* AI combat movement code

* Arguments:
* <object> group leader
*
* Return Value:
* <NONE>
*
* Example:
* [leader _group] spawn TWC_fnc_aiscramble;
*
* Public: No
*/

params ["_unit"];
sleep 10;
{
	
	_ind = _x addEventHandler ["FiredNear", {
	params ["_unit"];
	if (((group _unit) getvariable ["twc_aiscramkey", 0]) == 0) then {
		[_unit] spawn TWC_fnc_aiscramblenew;
		(group _unit) setvariable ["twc_mango", 1];
	};
	{
		_ind = _x getvariable ["twc_aiehindex", 0];
		_x removeEventHandler ["FiredNear", _ind];
	} foreach (units (group _unit));
}];

_x setvariable ["twc_aiehindex", _ind];
} foreach (units (group _unit));