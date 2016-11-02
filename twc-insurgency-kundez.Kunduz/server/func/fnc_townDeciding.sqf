params["_pos","_thisList"];

if ((west countSide _thisList) == 0) then {
	_bluVictory = 0
}else{
	_bluVictory = 1
};
sleep 5;
if(_bluVictory == 0)then{
	_bluNear = nearestObjects [_pos,["Man","Car"],600];
	_near = 0;
	{
		if(side _x == west)exitWith{
			_near = 1;
			
			_trg = createTrigger ["EmptyDetector", _pos];
			_trg setTriggerArea [200, 200, 0, false];
			_trg setTriggerActivation ["ANY", "PRESENT", False];
			_trg setTriggerTimeout [5,5,5, true];
			_trg setTriggerStatements ["West countSide thisList == 0 || East CountSide thisList < 6","[(getPos thisTrigger), thisList] spawn twc_fnc_townDeciding",""];	
		};
	}forEach _bluNear;
	if(_near == 0)then{
		[_pos,_thisList] call twc_fnc_townReset;
	};
}else{

};