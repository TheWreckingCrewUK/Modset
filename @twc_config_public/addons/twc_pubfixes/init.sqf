//Calls all the functions on player start.
params["_unit"];

if (!hasInterface || isDedicated) exitWith {};
if (player != _unit) exitWith {};

waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };



openBoltFnc = {
	_openbolt = [(configFile >> "CfgWeapons" >> (primaryweapon player)), "twc_openbolt", 0] call BIS_fnc_returnConfigEntry;

	if (_openbolt > 0) then {
		_openboltcoef = [(configFile >> "CfgWeapons" >> (primaryweapon player)), "twc_openbolt_coef", 1] call BIS_fnc_returnConfigEntry;

		[{
			if (random 1 < 0.5) then {
				[player, primaryweapon player] call ace_overheating_fnc_jamWeapon;
			};
			[] call openBoltFnc;
		}, [], (random (6000 / _openboltcoef)) + 200] call CBA_fnc_waitAndExecute;
	} else {
		[{ [] call openBoltFnc; }, [], 900] call CBA_fnc_waitAndExecute;
	};
};

[] call openBoltFnc;


