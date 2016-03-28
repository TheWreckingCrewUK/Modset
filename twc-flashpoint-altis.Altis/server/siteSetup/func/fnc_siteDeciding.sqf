params["_marker"];

_men = nearestObjects [getMarkerPos _marker, ["Man"], 500];
{_men = _men - [_x];
}foreach allDead;
hint str _men;
if(str _men == "[]")exitWith{
	hint "All Units Killed. Reverting to Redfor Controll";
	[_marker] call twc_siteCapturedRedfor
};
if(side (_men select 0) == WEST) exitWith{
	[_marker] call twc_siteCapturedBlufor;
};
if(side (_men select 0) == EAST) exitWith{
	[_marker] call twc_siteCapturedRedfor;
};
if(side (_men select 0) != EAST && side (_men select 0) != WEST) then {
	hint "Neither Blu nor Red were closest. Defaulting back to Red";
	[_marker] call twc_siteCapturedRedfor;
}else{
	hint "Site Deciding Function has failed";
};
