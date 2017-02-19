params ["_message"];


waitUntil {player == player};
_rankArray = [];
{
	_rankArray pushback (rank _x);
}forEach allUnits;

_rank = "";
_rank = call{
	_rank = if ("COLONEL" in _rankArray)exitWith{"COLONEL"};
	_rank = if ("MAJOR" in _rankArray)exitWith{"MAJOR"};
	_rank = if ("CAPTAIN" in _rankArray)exitWith{"CAPTAIN"};
	_rank = if ("LIETENANT" in _rankArray)exitWith{"LIETENANT"};
	_rank = if ("SERGEANT" in _rankArray)exitWith{"SERGEANT"};
	_rank = if ("CORPORAL" in _rankArray)exitWith{"CORPORAL"};
	_rank = if ("PRIVATE" in _rankArray)exitWith{"PRIVATE"};
	_rank
};
{
	if(rank _x == _rank)then{
		_message remoteExecCall ["hint",_x];
	};
}forEach allUnits;

systemChat format["%1 %2",_message,_rank];