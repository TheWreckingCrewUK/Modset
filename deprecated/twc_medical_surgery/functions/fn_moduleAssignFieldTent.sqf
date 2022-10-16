params [["_logic", objNull, [objNull]]];

if (!isNull _logic) then {
	private _setting = _logic getVariable ["class", 0];

	private _objects = synchronizedObjects _logic;
	{
		if (local _x) then {
			_x setVariable["TWC_Medical_isFieldTent", true, true];
			_x setVariable["ace_medical_isMedicalFacility", true, true];
		};
	} forEach _objects;
};

true;