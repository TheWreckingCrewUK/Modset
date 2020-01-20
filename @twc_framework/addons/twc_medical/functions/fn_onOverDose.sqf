params ["_target", "_className"];

if !(local _target) exitWith {};
if !(isPlayer _target) exitWith {};

if(_classname == "Painkillers") exitwith {
	_stamina = missionnamespace getvariable ["ace_advanced_fatigue_ae1Reserve", 0];
	ace_advanced_fatigue_ae1Reserve = _stamina * 0.7;
};

[_target] call ace_medical_fnc_setCardiacArrest;