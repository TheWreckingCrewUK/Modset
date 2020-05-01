/*
 * Runs once per mission.
 */

["skipVote", {
	params ["_player"];
	
	_votesCasted = (missionNamespace getVariable ["twc_skip_votes", []]);
	
	// new vote started, check after 5 minutes
	if (_votesCasted isEqualTo []) then {
		["systemChatClient", "A skip vote has started. Type #skip if you'd like to flee. You have five minutes."] call CBA_fnc_globalEvent;
		[twc_skip_fnc_checkResults, "", 300] call CBA_fnc_waitAndExecute;
	};
	
	if !(_player in _votesCasted) then {
		_votesCasted pushBack _player;
		["systemChatClient", "Okay coward, we heard you. Let's see if others agree.", _player] call CBA_fnc_targetEvent;
		missionNamespace setVariable ["twc_skip_votes", _votesCasted];
	} else {
		["systemChatClient", "You've already voted to flee.", _player] call CBA_fnc_targetEvent;
	};
}] call CBA_fnc_addEventHandler;