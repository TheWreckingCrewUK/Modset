params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
_args params ["_target", "_destination", "_simEvents"];

_targetDisplayName = getText (configFile >> "CfgVehicles" >> typeOf _target >> "displayName");
_destinationDisplayName = getText (configFile >> "CfgVehicles" >> typeOf (_destination select 2) >> "displayName");

private _structuredOutputText = if (_errorCode == 0) then {
	parsetext (("<t align='center'><t size='1.5'><t color='#ffbf00'>Transfer Complete</t></t></t><br/>Contents transferred from ") + _targetDisplayName + " to " + _destinationDisplayName);
} else {
	parsetext (("<t align='center'><t size='1.5'><t color='#ff0000'>Transfer Interrupted</t></t></t><br/>Transfer halted from ") + _targetDisplayName + " to " + _destinationDisplayName);
};

[_structuredOutputText, false, 2.5] call ace_common_fnc_displayText;