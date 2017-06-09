//Adds an event handler to delete any dropped items if the player is near the arsenal box/base
player addEventHandler ["InventoryClosed", {
		if(typeOf vehicle (_this select 1) == "groundWeaponHolder" && (_this select 0) distance2D (getMarkerPos "arsenal") < 200) then{
		deleteVehicle (_this select 1);
	};
}];