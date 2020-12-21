_LandingSounds = [
	"TWC_Parachute_Landing_1",
	"TWC_Parachute_Landing_2",
	"TWC_Parachute_Landing_3",
	"TWC_Parachute_Landing_4",
	"TWC_Parachute_Landing_5",
	"TWC_Parachute_Landing_6",
	"TWC_Parachute_Landing_7",
	"TWC_Parachute_Landing_8"
];

_LandingSound = selectRandom _LandingSounds;
[player, _LandingSound, 50] call CBA_fnc_globalSay3d;