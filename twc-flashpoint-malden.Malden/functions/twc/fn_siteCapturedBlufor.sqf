params["_marker"];

_marker setMarkerColor "colorWest";

switch (_marker) do
{
	default {};
	case "town_1": {[] spawn twc_fnc_createBase;};
	case "airfield_1": {[] spawn twc_fnc_createAirfield};
	case "port_1": 
	{
		_boat_1 = "B_Boat_Armed_01_minigun_F" createVehicle (getMarkerPos "port_1_ship");
		_boat_1 setDir 220;
		[_boat_1] execVM "server\vehicles\vehicleRespawn.sqf";		
	};
	case "port_2":
	{
		_boat_2 = "B_Boat_Armed_01_minigun_F" createVehicle (getMarkerPos "port_2_ship");
		_boat_2 setDir 340;
		[_boat_2] execVM "server\vehicles\vehicleRespawn.sqf";				
	};
	case "port_3":
	{
		_boat_3 = "B_Boat_Armed_01_minigun_F" createVehicle (getMarkerPos "port_3_ship");
		_boat_3 setDir 330;
		[_boat_4] execVM "server\vehicles\vehicleRespawn.sqf";				
	};
};

waitUntil{(west countSide (nearestObjects [(getMarkerPos _marker),["man","Car","Tank"],2000])) == 0};

{
	deleteVehicle _x;
	sleep 0.1;
	
}forEach (nearestObjects [(getMarkerPos _marker),["man","Car","Tank"],500]);

{
	deleteGroup _x
}forEach allGroups;
/*
if(getMarkerType _marker == "c_unknown")then{
	[_marker] call twc_fnc_createTown;
}else{
	[_marker] call twc_fnc_createBluforSite;
};*/