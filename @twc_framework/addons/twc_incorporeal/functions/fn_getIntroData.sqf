_returnArray = [];

{
	if (side _x != side player) exitWith {};
	// is a player, not headless client
	_isLeaderPlayer = if (getPlayerUID leader _x != "" || getPlayerUID leader _x != "_SP_AI_") then { true } else { false };

	if (_isLeaderPlayer) then {
		_groupData = [_x] call TWC_Incorporeal_fnc_getGroupData;
		
		if ((count (_groupData select 1)) > 0) then {
			_returnArray pushBack _groupData;
		};
	};
} forEach allGroups;

_returnArray;