
player addEventHandler ["InventoryClosed", {

	if((primaryWeapon player) in twc_restrictedWeapons) then{
		hint "You may not use enemy rifles. Only Launchers";
		player removeWeapon (primaryWeapon player);
	};
	
}];