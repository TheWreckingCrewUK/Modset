params ["_base"];

private _missionStarted = missionNameSpace getVariable ["TWC_Intro_Started", false];
if (_missionStarted) exitWith {};

private _molarPresent = false;
private _molar = objNull;

{
	private _isMolar = _x getVariable ["TWC_isMolar", false];
	
	if (_isMolar) exitWith {
		_molarPresent = true;
		_molar = _x;
	};
} forEach allPlayers;

_name = name player;

if (_molarPresent) then {
	if (_base == "ForwardBasePos") then {
		format ["%1 is awaiting at the Forward Base", _name] remoteExecCall ["hint", _molar];
	} else {
		format ["%1 is awaiting at the Base", _name] remoteExecCall ["hint", _molar];
	};
};