params ["_unit"];

if (!isServer || !alive _unit) exitwith {};

_allUnits = units _unit;
_shouter = selectRandom _allUnits;

_sound = selectRandom [
	"twc_flavour\basilone\sounds\Banzai_1.ogg",
	"twc_flavour\basilone\sounds\Banzai_2.ogg",
	"twc_flavour\basilone\sounds\Banzai_3.ogg",
	"twc_flavour\basilone\sounds\Banzai_4.ogg",
	"twc_flavour\basilone\sounds\Banzai_5.ogg"
];

playSound3D [_sound, _shouter];

[{_this call twc_fnc_banzaiSounds}, [_unit], 8] call CBA_fnc_waitAndExecute;