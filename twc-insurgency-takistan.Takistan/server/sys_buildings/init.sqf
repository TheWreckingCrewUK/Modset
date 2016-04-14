{
	_x addMPEventHandler ["MPHit",{
		_near = nearestObjects [(_this select 0), ["Man"], 20];
		hint str _near;
		if(side (_near select 0) != EAST) then{
			InsP_civTrust = InsP_civTrust - 0.05; publicVariable "InsP_civTrust";
		}else{FALSE};
	}];
}forEach nearestObjects [getMarkerPos "AgiaMarina", ["house"], 500];

{
	_x addMPEventHandler ["MPHit",{
		_near = nearestObjects [(_this select 0), ["Man"], 20];
		hint str _near;
		if(side (_near select 0) != EAST) then{
			InsP_civTrust = InsP_civTrust - 0.05; publicVariable "InsP_civTrust";
		}else{FALSE};
	}];
}forEach nearestObjects [getMarkerPos "Girna", ["house"], 300];

{
	_x addMPEventHandler ["MPHit",{
		_near = nearestObjects [(_this select 0), ["Man"], 20];
		hint str _near;
		if(side (_near select 0) != EAST) then{
			InsP_civTrust = InsP_civTrust - 0.05; publicVariable "InsP_civTrust";
		}else{FALSE};
	}];
}forEach nearestObjects [getMarkerPos "AgiosCephas", ["house"], 100];