params["_location","_thisList","_dir"];

_bluVictory = 0;
{
	if(side _x == west)exitWith{_bluVictory =  1};
}forEach _thisList;
if(_bluVictory == 0)then{
	[_location,_dir] call twc_fnc_roadBlockCapturedIndependent
}else{
	[_location] call twc_fnc_roadBlockCapturedWest
};