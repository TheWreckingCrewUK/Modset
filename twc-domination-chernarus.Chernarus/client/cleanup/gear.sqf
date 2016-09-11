if (isDedicated) exitWith {};
waitUntil {!isNull player};

player addEventHandler ["InventoryClosed", {
		if(typeOf vehicle (_this select 1) == "groundWeaponHolder" && (_this select 0) distance (getMarkerPos "respawn_West") < 200) then{
		deleteVehicle (_this select 1);
	};
}];
/*
player addEventHandler ["InventoryClosed", {
		hint "Checking for gear";
		if(!(primaryweapon (_this select 0) == "") || "APERSTripMin_Wire_Mag" in (magazines (_this select 0)) || "IEDLandSmall_Remote_Mag" in (magazines (_this select 0)) || "IEDLandBig_Remote_Mag" in (magazines (_this select 0)) || "IEDUrbanSmall_Remote_Mag" in (magazines (_this select 0)) || "IEDUrbanBig_Remote_Mag" in (magazines (_this select 0)))then{hint "bad equipment";};
}];