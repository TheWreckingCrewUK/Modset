params["_marker", "_cancounter","_thislist","_isCounterAttack"];

if ((west countSide _thisList) == 0) then {	
	[_marker] call twc_siteCapturedRedfor;
}else{
	[_marker, _canCounter, _isCounterAttack] call twc_siteCapturedBlufor;
};