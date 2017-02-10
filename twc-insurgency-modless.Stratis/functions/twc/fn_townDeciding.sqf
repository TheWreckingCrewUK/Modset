params["_pos","_thisList","_marker"];

_bluVictory = if ((west countSide _thisList) == 0) then {"0";}else{"1";};
if(_bluVictory == "0")then{
	_bluNear = nearestObjects [_pos,["Man","Car","Air"],600];
	_near = 0;
	{
		if(side _x == west)exitWith{
			_near = 1;
			
			_trg = createTrigger ["EmptyDetector", _pos];
			_trg setTriggerArea [200, 200, 0, false];
			_trg setTriggerActivation ["ANY", "PRESENT", False];
			_trg setTriggerTimeout [5,5,5, true];
			_trg setTriggerStatements ["West countSide thisList == 0 || East CountSide thisList < 6",format["[%1, thisList,'%2'] spawn twc_fnc_townDeciding",_pos,_marker],""];	
		};
	}forEach _bluNear;
	if(_near == 0)then{
		[_pos,_thisList,_marker] call twc_fnc_townReset;
	};
}else{
	_marker setMarkerColor "colorWEST";
	_marker setMarkerText "Area Cleared";
};