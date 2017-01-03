player addEventHandler ["InventoryClosed", {
		if(typeOf vehicle (_this select 1) == "groundWeaponHolder" && (_this select 0) distance2D (getMarkerPos "crate") < 200) then{
		deleteVehicle (_this select 1);
	};
}];