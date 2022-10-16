#include "script_component.hpp"

params ["_medic", "_patient", "_bodyPart", "_treatmentClassname"];

if !([_patient] call TWC_Medical_Vehicle_fnc_canHookIV) exitWith {}; // no longer can receive IV, end loop

private _bloodVolume = GET_BLOOD_VOLUME(_patient);

// use the custom IV bag to simulate a constant drip - bag is 3 seconds worth of transfer
// so at worse an IV hook can provide an additional 3 seconds of blood after being unhooked
// is done in this way to reduce network traffic, as data is sync'd etc. as scalability is a concern

// if blood is full, dw - just don't fill for the next 3 seconds
// this will allow for the drip to automatically resume if say a wound reopens and it hasn't been unhooked
private _ivDripConfig = configFile >> "TWC_Medical" >> "Treatments" >> _treatmentClassname;
private _duration = [_ivDripConfig, "duration", 3] call BIS_fnc_returnConfigEntry;

if (_bloodVolume < DEFAULT_BLOOD_VOLUME) then {
	private _partIndex = ALL_BODY_PARTS find toLower _bodyPart;
	
	// default iv flow rate is 4.1667
	private _volume = [_ivDripConfig, "volume", (IV_CHANGE_PER_SECOND * 3)] call BIS_fnc_returnConfigEntry;
	private _type = [_ivDripConfig, "type", "Saline"] call BIS_fnc_returnConfigEntry;
	
	private _ivBags = _patient getVariable [ace_medical_ivBags, []];
	_ivBags pushBack [_volume, _type, _partIndex];
	_patient setVariable ["ace_medical_ivBags", _ivBags, true];
};

// call self again in 3 seconds for recursive function (aka loop)
[{_this call TWC_Medical_Vehicle_fnc_IVLocal}, _this, _duration] call CBA_fnc_waitAndExecute;