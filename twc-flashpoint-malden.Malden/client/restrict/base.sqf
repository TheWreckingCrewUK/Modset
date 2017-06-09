waitUntil {!isNull player};

player addEventHandler ["Fired", {
    if ((_this select 0) distance getMarkerPos "arsenal" < 300) then
	{
		deleteVehicle (_this select 6);
		hintc "NO FIRING AT BASE";
	};
}];
