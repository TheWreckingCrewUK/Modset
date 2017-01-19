params ["_message"];


waitUntil {player == player};

_rank = call{
		_rank = {
				if (rank _x == "COLONEL")exitWith{"COLONEL"}
		}forEach allPlayers;
		_rank = {
				if (rank _x == "MAJOR")exitWith{"MAJOR"}
		}forEach allPlayers;
		_rank = {
				if (rank _x == "CAPTAIN")exitWith{"CAPTAIN"}
		}forEach allPlayers;
		_rank = {
				if (rank _x == "LIETENANT")exitWith{"LIETENANT"}
		}forEach allPlayers;
		_rank = {
				if (rank _x == "SERGEANT")exitWith{"SERGEANT"}
		}forEach allPlayers;
		_rank = {
				if (rank _x == "CORPORAL")exitWith{"CORPORAL"}
		}forEach allPlayers;
		_rank = {
			if (rank _x == "PRIVATE")exitWith{"PRIVATE"}
		}forEach allPlayers;
		_rank
};
{
	if(rank _x == _rank)then{
		_message remoteExecCall ["hint",_x];
	};
}forEach allPlayers;