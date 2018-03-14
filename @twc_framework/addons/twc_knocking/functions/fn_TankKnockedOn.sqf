params ["_tank"];

if (vehicle player == _tank) then {
	playSound "TWC_sound_knockMetalInside";
};