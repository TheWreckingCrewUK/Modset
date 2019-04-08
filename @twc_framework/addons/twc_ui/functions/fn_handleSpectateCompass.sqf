#include "\A3\ui_f\hpp\defineDIKCodes.inc"

params ["", "_key", "_shift", "_ctrl", "_alt"];

if (_key == DIK_K) exitWith {
	[true] call TWC_UI_fnc_toggleSpectateCompass;
	true
};