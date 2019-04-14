if !(hasInterface) exitWith {};

["twc_medical_evh_gurneyUsed", {
	params ["_message"];

	player createDiaryRecord ["Medical", ["Surgery", _message]];
}] call CBA_fnc_addEventHandler;

["twc_medical_evh_surgery", {
	_this call twc_medical_surgery_fnc_surgeryLocal;
}] call CBA_fnc_addEventHandler;

["twc_medical_evh_fieldSurgery", { 
	_this call twc_medical_surgery_fnc_fieldSurgeryLocal;
}] call CBA_fnc_addEventHandler;