execVM "client\sys_humanCiv\Markers.sqf";
_event = player addEventHandler ["InventoryClosed", {    
	hint "Checking for gear";    
	if(!(primaryweapon (_this select 0) == "") || !(secondaryWeapon (_this select 0) == "") || !(handgunWeapon (_this select 0) == "") || "APERSTripMin_Wire_Mag" in (magazines (_this select 0)) || "IEDLandSmall_Remote_Mag" in (magazines (_this select 0)) || "IEDLandBig_Remote_Mag" in (magazines (_this select 0)) || "IEDUrbanSmall_Remote_Mag" in (magazines (_this select 0)) || "IEDUrbanBig_Remote_Mag" in (magazines (_this select 0)))then{
		hint "bad equipment";
		execVM "client\sys_humanCiv\playerSwitch.sqf";
	};  
}];
execVM "client\sys_humanCiv\weaponRestrictions.sqf";
sleep 5;
execVM "client\sys_humanCiv\fnc_spawnSelect.sqf";