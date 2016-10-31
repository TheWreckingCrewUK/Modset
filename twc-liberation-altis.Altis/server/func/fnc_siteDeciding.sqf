params["_location","_thisList","_type","_markerstr"];

_bluVictory = 0;
{
	if(side _x == west)exitWith{_bluVictory =  1};
}forEach _thisList;
if(_bluVictory == 0)then{
	[_location,_type,_markerstr] call twc_fnc_siteCapturedIndependent
}else{
	[_location,_type,_markerstr] call twc_fnc_siteCapturedBlufor
};