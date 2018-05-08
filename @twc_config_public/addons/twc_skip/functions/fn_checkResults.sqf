["systemChatClient", "Coward count commenced..."] call CBA_fnc_globalEvent;

_votesCasted = missionNamespace getVariable ["twc_skip_votes", []];
_votesCastedCount = count _votesCasted;
_playerCount = count (allPlayers - entities "HeadlessClient_F");
_neededVotes = floor ((_playerCount / 10) * 7.5);

if (_playerCount <= 4) exitWith {
	["systemChatClient", "There are not enough soldiers deployed to consider retreat."] call CBA_fnc_globalEvent;
	missionNamespace setVariable ["twc_skip_votes", []];
};

if (_votesCastedCount < _neededVotes) exitWith {
	["systemChatClient", "Enough soldiers are loyal to the cause to not consider a retreat."] call CBA_fnc_globalEvent;
	missionNamespace setVariable ["twc_skip_votes", []];
};

["systemChatClient", "Cowards. The lot of you."] call CBA_fnc_globalEvent;
missionNamespace setVariable ["twc_skip_votes", []];

"Skipped" call BIS_fnc_endMissionServer;