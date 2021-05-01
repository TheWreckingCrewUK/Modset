params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

if !(local _target) exitWith {};

_ammo params ["", "", "", "", "_ammoClass"];

// were we stabbed?
if (_ammoClass isNotEqualTo "LIB_B_Bayonet") exitWith {};

_wasStabbed = _target getVariable ["TWC_WW2_Bayonet_wasStabbedPreviously", false];

// don't just start pushing the body all over the place or playing the sound multiple times
if (_wasStabbed) exitWith {};
_target setVariable ["TWC_WW2_Bayonet_wasStabbedPreviously", true];

// TODO: Play Sound!


// Ragdoll with a bit of force, gives more oompf!
_targetSelection = (_selection select 0);
_target addForce [_shooter vectorModelToWorld [0, 100, 0], _target selectionPosition _targetSelection];