/* Created by [TWC] jayman
*
* Moves a weapon to the back and/or grabs the one from the back
*
* Is a cool dialog and has cool pictures
*
*/
if(str twc_weaponOnBack == "[]")then{
	if(primaryWeapon player == "")then{
		hint "You have no Weapon to move to your back";
	}else{
		twc_weaponOnBack = [(primaryWeapon player),[(primaryWeaponMagazine player),(player ammo (primaryWeapon player))],(primaryWeaponItems player)];
		player removeWeapon (primaryWeapon player);
			
		ctrlDelete (uiNamespace getVariable "twc_uiGun_old");
		uiNamespace setVariable ["twc_uiGun",(twc_weaponOnBack select 0)];
			
		disableSerialization;
		_ctrl2 = findDisplay 602 ctrlCreate ["RscPicture", -1]; 
		_ctrl2 ctrlSetPosition [1.070,0.40,0.3,0.2]; 
		_ctrl2 ctrlCommit 0;
		_ctrl2 ctrlSetText (getText (configFile >> "CfgWeapons" >> (uiNamespace getVariable "twc_uiGun") >> "picture"));
		uiNamespace setVariable ["twc_uiGun_old",_ctrl2];
	};
}else{
	_backWeapon = twc_weaponOnBack;
	
	if(primaryWeapon player == "")then{
		twc_weaponOnBack = [];
	}else{
		twc_weaponOnBack = [(primaryWeapon player),[(primaryWeaponMagazine player),(player ammo (primaryWeapon player))],(primaryWeaponItems player)];
		player removeWeapon (primaryWeapon player);
	};
	
	player addWeapon (_backWeapon select 0);
	player addMagazine (((_backWeapon select 1) select 0) select 0);
	player setAmmo [primaryWeapon player, (_backWeapon select 1) select 1];
	
	if(count ((_backWeapon select 1) select 0) == 2)then{
		player addMagazine (((_backWeapon select 1) select 0) select 1);
	};
	ctrlDelete (uiNamespace getVariable "twc_uiGun_old");
	uiNamespace setVariable ["twc_uiGun",(twc_weaponOnBack select 0)];
	
	disableSerialization;
	_ctrl2 = findDisplay 602 ctrlCreate ["RscPicture", -1]; 
	_ctrl2 ctrlSetPosition [1.070,0.40,0.3,0.2]; 
	_ctrl2 ctrlCommit 0;
	if(str twc_weaponOnBack != "[]")then{
		_ctrl2 ctrlSetText (getText (configFile >> "CfgWeapons" >> (uiNamespace getVariable "twc_uiGun") >> "picture"));
	}else{
		_ctrl2 ctrlSetText "a3\ui_f\data\GUI\Rsc\RscDisplayGear\ui_gear_primary_gs.paa";
	};
	uiNamespace setVariable ["twc_uiGun_old",_ctrl2];
};
