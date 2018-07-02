/*
* Author: [TWC] jayman
* Gets added to a units init. The action can be seen by all units including JIPs, but the effect is local
*
* Arguments:
* 0: UNIT <OBJECT>
* 1: Name <STRING>
* 2: Message <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [civ1,"Interrogate","The Taliban ran up into the mountains when they spotted you"] call twc_fnc_intelHint;
*
* Public: no
*/
if(!isServer)exitWith{};

params["_unit", "_name", "_string"];

_unit setVariable ["intelHint", _string, true];

[_unit
	[_name,
		{
			_message = ((_this select 0) getVariable "intelHint");
			hint _message;
			player createDiaryRecord ["Convo", ["Conversation", _message]];
		},
		nil,
		6,
		true,
		false,
		"",
		"true",
		7,
		false
	]
] remoteExecCall ["addAction", [0, -2] select isDedicated, true];
