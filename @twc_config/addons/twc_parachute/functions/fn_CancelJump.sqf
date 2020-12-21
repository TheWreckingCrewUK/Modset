params ["_vehicle"];

// cancel jump, reset ramp
_vehicle animate ["ramp_top", 0];
_vehicle animate ["ramp_bottom", 0];
_vehicle lock 0;

_vehicle setVariable ["TWC_JumpPrepped", false, true];