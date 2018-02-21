params ["_tank"];

[[_tank], "TWC_knocking_fnc_TankKnockedOn"] call BIS_fnc_MP;
[_tank, "TWC_sound_knockMetal"] call CBA_fnc_globalSay3d;