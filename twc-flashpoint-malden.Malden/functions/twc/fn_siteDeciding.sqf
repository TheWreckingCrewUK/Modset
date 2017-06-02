params["_marker","_thisList"];

systemChat _marker;
_bluVictory = 0;
{
	if(isPlayer _x)exitWith{_bluVictory =  1};
}forEach _thisList;
if(_bluVictory == 0)then{
	[_marker] spawn twc_fnc_siteCapturedRedfor;
}else{
	[_marker] spawn twc_fnc_siteCapturedBlufor;
	//[_thisList] call twc_fnc_aiSurrender;
};