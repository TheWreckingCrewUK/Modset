/*
* Author: [TWC] Bosenator
* Gets added to a units init. The action can be seen by all units including JIPs, but the effect is local. This version will set the provided variable to true once it's been used.
* Ideal for say a situation where you want a trigger to activate on that condition.
*
* Arguments:
* 0: UNIT <OBJECT>
* 1: Name <STRING>
* 2: Message <STRING>
* 3: Variable Name <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [civ1, "Interrogate", "The Taliban ran up into the mountains when they spotted you", "TheyHinted"] call twc_fnc_intelHintWithVariable;
*
* Public: no
*/
if(!isServer)exitWith{};

params["_unit", "_name", "_string", "_variableName"];

_intelHintID = (_unit getVariable ["intelHintID", -1]) + 1;
_unit setVariable ["intelHintID", _intelHintID, true];

_previousHints = _unit getVariable ["intelHint", []];
_previousHints set [_intelHintID, _string];
_unit setVariable ["intelHint", _previousHints, true];

missionNamespace setVariable [_variableName, false, true];

[_unit,
	[
		_name,
		{
			_messages = (_this select 0) getVariable ["intelHint", []];
			_message = (_messages select (_this select 3 select 1));
			hint _message;
			player createDiaryRecord ["Convo", ["Conversation", _message]];
			missionNamespace setVariable [(_this select 3 select 0), true, true];
		},
		[_variableName, _intelHintID],
		6,
		true,
		false,
		"",
		"true",
		7,
		false
	]
] remoteExecCall ["addAction", [0,-2] select isDedicated, true];
