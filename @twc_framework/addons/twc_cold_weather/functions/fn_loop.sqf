params ["_unit"];

if !(_unit in TWC_Cold_Weather_breathingList) exitWith {}; // unit is no longer breathing (oh no)

_duration = 2 + (random 3);
_delay = _duration + (random 2);
_intensity = ((floor random [2, 5, 8]) / 10);

[_unit, _duration, _intensity] call TWC_Cold_Weather_fnc_breathEffect;

[{ _this call TWC_Cold_Weather_fnc_loop; }, _this, _delay] call CBA_fnc_waitAndExecute;