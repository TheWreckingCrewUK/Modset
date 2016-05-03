params["_marker", "_cancounter","_thislist"];

if ((west countSide _thisList) == 0) then {	
	[_marker] call twc_siteCapturedRedfor;
}else{
	[_marker, _canCounter] call twc_siteCapturedBlufor;
};