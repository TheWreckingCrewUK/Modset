if (isDedicated || !hasInterface) exitWith {};

// Wait until mission module has been initalized.
["twc_framework_initComplete", {
	_operationEra = missionNameSpace getVariable ["era", "modern"];
	_isNightOp = missionNameSpace getVariable ["nightGear", false];
	_isDisabled = missionNameSpace getVariable ["TWC_Intro_isDisabled", false];

	if (_isDisabled || (serverTime > 60)) exitWith {
		[_operationEra, _isNightOp] call TWC_Incorporeal_fnc_startLegacyIntro;
	};

	_introData = [] call TWC_Incorporeal_fnc_getIntroData;
	[_operationEra, _isNightOp, _introData] call TWC_Incorporeal_fnc_startIntro;
}] call CBA_fnc_addEventHandler;