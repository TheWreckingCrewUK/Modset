if !(TWC_Debug_Enable) exitWith { false };

private _currentPlayerCount = count (allPlayers - entities "HeadlessClient_F");
if (_currentPlayerCount > TWC_Debug_PlayerLimit) exitWith { false };

true