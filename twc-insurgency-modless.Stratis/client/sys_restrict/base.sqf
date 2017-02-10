waitUntil {!isNull player};

player addEventHandler ["Fired", {
    if ((_this select 0) distance getMarkerPos "respawn_west" < 300) then
    {
        deleteVehicle (_this select 6);
		hintc "NO FIRING AT BASE";
		hintC_EH = findDisplay 57 displayAddEventHandler ["unload",{
			0 = _this spawn {
				_this select 0 displayRemoveEventHandler ["unload", hintC_EH];
				hintSilent "";
			};
		}];
    };
}];