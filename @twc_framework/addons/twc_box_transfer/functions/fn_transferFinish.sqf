params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
_args params ["_target", "_destination", "_simEvents"];

_targetDisplayName = getText (configFile >> "CfgVehicles" >> typeOf _target >> "displayName");
_destinationDisplayName = getText (configFile >> "CfgVehicles" >> typeOf (_destination select 2) >> "displayName");

private _structuredOutputText = if (_errorCode == 0) then {
	private _transferedText = format ["Contents transferred from %1 to %2", _targetDisplayName, _destinationDisplayName];
	format ["<t align='center'>%1</t><br/>%2", "Transfer Complete", _transferedText];
} else {
	private _transferedText = format ["Transfer halted from %1 to %2", _targetDisplayName, _destinationDisplayName];
	format ["<t align='center'>%1</t><br/>%2", "Transfer Interrupted", _transferedText];
};

private _picture = getText (configFile >> "CfgVehicles" >> typeOf (_destination select 2) >> "picture");
[_structuredOutputText, _picture, nil, nil, 2.5] call ace_common_fnc_displayTextPicture;