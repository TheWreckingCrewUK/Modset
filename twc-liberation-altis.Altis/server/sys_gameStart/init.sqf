_commander = if(!isNil "commander1")then{if(!isPlayer commander1)then{"";}else{(name commander1);};}else{"";};
_time = 10;
while{_commander == ""}do{
	format["Game cannot procceed until the commander joins\n time Remaining: %1 Minutes", (_time / 2)] remoteExecCall ["hint",0];
	_commander = if(!isNil "commander1")then{if(!isPlayer commander1)then{"";}else{(name commander1);};}else{"";};
	sleep 30;
	_time = _time - 1;
	if (_time < 1)exitWith{
		["End3", false, 0] call BIS_fnc_endMission;
	};
};
format["%1 has started the mission as commander",_commander] remoteExecCall ["hint",0];
commanderPresent = 1;
publicVariable "commanderPresent";