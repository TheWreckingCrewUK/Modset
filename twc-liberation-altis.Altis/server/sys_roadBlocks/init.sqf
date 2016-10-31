twc_fnc_createRoadBlock = compile preprocessfilelinenumbers "server\sys_roadBlocks\fnc_createRoadBlock.sqf";
twc_fnc_spawnRoadBlock = compile preprocessfilelinenumbers "server\sys_roadBlocks\fnc_spawnRoadBlock.sqf";
twc_fnc_spawnRoadBlockDeciding= compile preprocessfilelinenumbers "server\sys_roadBlocks\fnc_spawnRoadBlockDeciding.sqf";
twc_fnc_roadBlockCapturedIndependent = compile preprocessfilelinenumbers "server\sys_roadBlocks\fnc_roadBlockCapturedIndependent.sqf";
twc_fnc_roadBlockCapturedWest = compile preprocessfilelinenumbers "server\sys_roadBlocks\fnc_roadBlockCapturedWest.sqf";

_numRoadBlocks = 50;
_allRoads = [worldSize / 2, worldSize / 2] nearRoads (sqrt 2 *(worldSize / 2));
_roadBlockArray = [[0,0,0]];
_num = 0;
while{_num < _numRoadBlocks}do{
	_road = _allRoads call BIS_fnc_selectRandom;
	_dir = getDir _road;
	_pos = getPos _road;
	_near = 0;
	{
		if(_pos distance2D _x < 300)then{
			_near = 1;
		};
	}forEach _roadBlockArray;
	if(_near == 0)then{
		[_pos,_dir] call twc_fnc_createRoadBlock;
		_num = _num + 1;
	};
};