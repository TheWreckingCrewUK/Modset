params["_marker", "_cancounter","_thislist","_isCounterAttack"];

if((west countSide _thisList) == 0)then{
	_bluNear = nearestObjects [getMarkerPos _marker,["Man","Car"],1000];
	if(west countSide _bluNear > 0)then{
		[_marker,true] call twc_siteContested
	}else{
		[_marker, _thisList] call twc_siteCapturedRedfor;
	};
}else{
	[_marker, _thisList, _canCounter, _isCounterAttack] call twc_siteCapturedBlufor;
};