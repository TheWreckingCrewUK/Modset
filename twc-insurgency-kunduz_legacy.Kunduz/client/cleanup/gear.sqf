player addEventHandler ["InventoryClosed", {
	if (basemode == 0) then {
		if(typeOf vehicle (_this select 1) == "groundWeaponHolder" && (_this select 0) distance2D (getMarkerPos "respawn_west") < 200) then{
		deleteVehicle (_this select 1);
	};
	};
}];