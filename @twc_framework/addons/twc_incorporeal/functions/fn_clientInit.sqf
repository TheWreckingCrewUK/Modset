if (isDedicated || !hasInterface) exitWith {};

// Wait until mission module has been initalized.
["twc_framework_initComplete", {
	_operationEra = missionNameSpace getVariable ["era", "modern"];
	_isNightOp = missionNameSpace getVariable ["nightGear", false];
	_groupName = "Section"; // default
	
	{
		_roleDesc = (roleDescription _x) splitString "@" param [1, ""];
		if (_roleDesc != "") exitWith { _groupName = _roleDesc; };
	} forEach units group player;

	[_operationEra, _isNightOp, _groupName] call TWC_Incorporeal_fnc_startIntro;
}] call CBA_fnc_addEventHandler;