//Adds twc "stuff" to players

//Allows players to drag any crate. Will be replaced with by a buddy drag
ACE_maxWeightDrag = 100000;

//storing an extra weapon on the back.  will soon put weapon animation on it as well
//made mostly for coin rifleman and csms.
//fuck ace for not adding it themselves
//also will add a cool dialoge so it looks nice. instead of action. but it needs testing.
twc_storedWeapon = [];
player addAction ["Weapon to Back",{
	if(twc_storedWeapon == [])then{
		if(primaryWeapon player == "")then{
			hint "You have no Weapon to move to your back";
		}else{
			twc_storedWeapon = [(primaryWeapon player),(player ammo (primaryWeapon player)),(primaryWeaponItems player)];
			player removeWeapon (primaryWeapon player);
		};
	}else{
		_backWeapon = twc_storedWeapon;
		
		if(primaryWeapon player == "")then{
			twc_storedWeapon = [];
		}else{
			twc_storedWeapon = [(primaryWeapon player),[(currentMagazine player),(player ammo (primaryWeapon player))],(primaryWeaponItems player)];
			player removeWeapon (primaryWeapon player);
		};
		
		player addWeapon _backWeapon select 0;
		player addMagazine (_backWeapon select 1) select 0;
		player setAmmo (primaryWeapon player (_backWeapon select 1) select 2);
	};
}];