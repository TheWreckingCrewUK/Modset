params["_thisList"];

{
	if(side _x == east)then{
		[_x] join grpNull;
		_pos = _x getRelPos [300,(random 360)];
		_wp = _x addWaypoint [_pos,0];
		_wp setWaypointType "MOVE";
		_wp setWaypointStatements ["True","deleteVehicle this; deleteGroup (group this)"];
		_x addEventHandler ["FiredNear",{
			if((_this select 2) < 2)then{
				[(_this select 0),true] call ACE_captives_fnc_setSurrendered;
			};
		}];
	};
}forEach _thisList;