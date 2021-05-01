(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

if !(local _target) exitWith {};
if !(_direct) exitWith {};

_ammo params ["", "", "", "", "_ammoClass"];

if (_ammoClass isNotEqualTo "LIB_B_Bayonet") exitWith {};

_wasStabbed = _target getVariable ["TWC_WW2_Bayonet_wasStabbedPreviously", false];

// don't just start pushing the body all over the place or playing the sound multiple times
if (_wasStabbed) exitWith {};
_target setVariable ["TWC_WW2_Bayonet_wasStabbedPreviously", true];

// TODO: Hook this into medical rewrite, to prevent this being clipped etc. (aka make the unit uncon for the full duration of the sound clip. for now, this will have to do.
_sound = ["twc_b_death_1", "twc_b_death_2", "twc_b_death_3", "twc_b_death_4", "twc_b_death_5"] selectRandomWeighted [0.25, 0.25, 0.5, 1, 1];
_target say3D _sound;

// Ragdoll with a bit of force, gives more oompf!
_targetSelection = (_selection select 0);
_target addForce [_shooter vectorModelToWorld [0, 100, 0], _target selectionPosition _targetSelection];