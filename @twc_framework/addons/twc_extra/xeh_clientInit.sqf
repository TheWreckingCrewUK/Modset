//Adds twc "stuff" to players

//Allows players to drag any crate. Will be replaced with by a buddy drag
ACE_maxWeightDrag = 100000;

//storing an extra weapon on the back.  will soon put weapon animation on it as well
//made mostly for coin rifleman and csms.
//fuck ace for not adding it themselves
twc_weaponOnBack = [];

player addEventHandler ["InventoryOpened",{
	_handle = []spawn{
		disableSerialization;
		waituntil {!(isnull (findDisplay 602))};
		 
		_ctrl3 = findDisplay 602 ctrlCreate ["RscBackground", -1]; 
		_ctrl3 ctrlSetPosition [1.075,0.25,0.3,0.4]; 
		_ctrl3 ctrlSetBackgroundColor [0.2,0.2,0.2, 0.9];
		_ctrl3 ctrlCommit 0; 
		 
		_ctrl = findDisplay 602 ctrlCreate ["RscButton", -1]; 
		_ctrl ctrlSetPosition [1.075,0.25,0.3,0.1]; 
		_ctrl ctrlCommit 0; 
		_ctrl ctrlSetText "Weapon to Back"; 
		_ctrl ctrlAddEventHandler ["ButtonClick", {[] call twc_fnc_putWeaponOnBack}];
		
		_ctrl2 = findDisplay 602 ctrlCreate ["RscPicture", -1]; 
		_ctrl2 ctrlSetPosition [1.070,0.40,0.3,0.2];
		_ctrl2 ctrlCommit 0;
		if(str twc_weaponOnBack != "[]")then{
			_ctrl2 ctrlSetText (getText (configFile >> "CfgWeapons" >> (uiNamespace getVariable "twc_uiGun") >> "picture"));
		}else{
			_ctrl2 ctrlSetText "a3\ui_f\data\GUI\Rsc\RscDisplayGear\ui_gear_primary_gs.paa";
		};		
		
		uiNamespace setVariable ["twc_uiGun",(twc_weaponOnBack select 0)];		
		uiNamespace setVariable ["twc_uiGun_old",_ctrl2];
	
	};
}];

player addEventHandler ["Killed",{
	if(str twc_weaponOnBack == "[]")exitWith{};
	if(vehicle (_this select 0) != (_this select 0))then{
		(vehicle (_this select 0)) addWeaponCargoGlobal [(twc_weaponOnBack select 0),1];
		(vehicle (_this select 0)) addMagazineCargoGlobal [(((twc_weaponOnBack select 1) select 0) select 0),1];		
		if(count ((twc_weaponOnBack select 1) select 0) == 2)then{
			(vehicle (_this select 0)) addMagazine (((twc_weaponOnBack select 1) select 0) select 1);
		};
	}else{
		_ground = "groundweaponHolder" createVehicle (getPos (_this select 0));
		_ground setPos (getPos (_this select 0));
		_ground addWeaponCargoGlobal [(twc_weaponOnBack select 0),1];
		_ground addMagazineCargoGlobal [(((twc_weaponOnBack select 1) select 0) select 0),1];		
		if(count ((twc_weaponOnBack select 1) select 0) == 2)then{
			_ground addMagazineCargoGlobal [(((twc_weaponOnBack select 1) select 0) select 1),1];
		};
	};
}];
