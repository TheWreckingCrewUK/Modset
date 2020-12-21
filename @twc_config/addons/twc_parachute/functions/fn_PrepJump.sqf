params ["_vehicle"];

_vehicle animate ["ramp_top", 1];
_vehicle animate ["ramp_bottom", 0.7];
_vehicle lock 3;

_vehicle setVariable ["TWC_JumpPrepped", true, true];