/*
*
* _TWC = ["0.95","Turnoffmarker",500] spawn TWC_fnc_LightsSwitch
*
*
*/

params [["_OnOff",0.95],"_marker","_radius"];

_types = ["Lamps_Base_F", "PowerLines_base_F","PowerLines_Small_base_F"];


for [{_i=0},{_i < (count _types)},{_i=_i+1}] do
{
    // powercoverage is a marker I placed.
	_lamps = getMarkerPos _marker nearObjects [_types select _i, _radius];
	sleep 1;
	{_x setDamage _OnOff} forEach _lamps;
};