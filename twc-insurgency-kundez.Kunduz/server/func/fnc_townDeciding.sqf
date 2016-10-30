params["_pos","_thisList"];

_bluVictory = 0;
{
	if(side _x == west)exitWith{_bluVictory =  1};
}forEach _thisList;

if(_bluVictory == 0)then{
	[_pos,_thisList] call twc_fnc_townReset
}else{

};