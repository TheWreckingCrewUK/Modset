params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
_args params ["_target", "_destination", "_simEvents"];

private _structuredOutputText = if (_errorCode == 0) then {
	private _transferedText = format ["Contents transferred from %1 to %2", _target, _destination];
	format ["<t align='center'>%1</t><br/>%2", "Transfer Complete", _transferedText];
} else {
	private _transferedText = format ["Transfer halted from %1 to %2", _target, _destination];
	format ["<t align='center'>%1</t><br/>%2", "Transfer Interrupted", _transferedText];
};

private _picture = getText (configFile >> "CfgVehicles" >> _destination >> "picture");
[_structuredOutputText, _picture, nil, nil, 2.5] call ace_common_fnc_displayTextPicture;