params["_marker"];

_men = nearestObjects [getMarkerPos _marker, ["Man"], 500];
{_men = _men - [_x];
}foreach allDead;
hint str _men;

if(side (_men select 0) == WEST) exitWith{
	[_marker] call twc_siteCapturedBlufor;
};
if(side (_men select 0) == EAST) then{
	[_marker] call twc_siteCapturedRedfor;
}else{
	[_marker] call twc_siteCapturedBlufor;
};