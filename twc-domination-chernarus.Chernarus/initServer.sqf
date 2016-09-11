private _channelName = "Q-dance Radio";
private _channelID = radioChannelCreate [[0.96, 0.34, 0.13, 0.8], _channelName, "TWCServer", []];
if (_channelID == 0) exitWith {diag_log format ["Custom channel '%1' creation failed!", _channelName]};
[_channelID, {_this radioChannelAdd [player]}] remoteExec ["call", [0, -2] select isDedicated, _channelName];

joinCustomChat = _channelID;
publicVariable "joinCustomChat";