	params ["_WeaponHolder"];

	_items = itemcargo _WeaponHolder;
	_Weapons = weaponcargo _WeaponHolder;
	_Backpacks = backpackcargo _WeaponHolder;
	_magazines = MagazineCargo _WeaponHolder;
	if ("TWC_Milan_Tripod_Disassemabled" in weaponcargo _weaponHolder) then {
	_weapons = _weapons - ["TWC_Milan_Tripod_Disassemabled"];

	clearitemcargoglobal _WeaponHolder;
	Clearweaponcargoglobal _WeaponHolder;
	Clearbackpackcargoglobal _WeaponHolder;
	Clearmagazinecargoglobal _WeaponHolder;

	{
		_WeaponHolder Additemcargoglobal [_x,1];
	}foreach _items;
	{
		_WeaponHolder Addweaponcargoglobal [_x,1];
	}foreach _Weapons;
	{
		_WeaponHolder Addbackpackcargoglobal [_x,1];
	}foreach _Backpacks;
	{
		_WeaponHolder Addmagazinecargoglobal [_x,1];
	}foreach _magazines;

	player removeweapon "TWC_Milan_Launcher_Disassemabled";
	_veh = "TWC_Milan" createVehicle position player;
	_veh removeMagazine "TWC_Milan_Missile_Mag";
	}else{
	systemchat "No Tripods near by.";
	};