	params ["_Milan"];
	_nObject = nearestObject [player, "TWC_Milan"];
	_allmags =  magazines _Milan;
	if ((count _allmags) > 0) then{
		if (player canadd "TWC_MilanMissileItem") then{
			
			player additem "TWC_MilanMissileItem";
			
			deleteVehicle _Milan;

			_Object = createVehicle ["WeaponHolderSimulated", getpos player, [], 0, "CAN_COLLIDE"];
			_Object addWeaponCargoGlobal ["TWC_Milan_Tripod_Disassemabled",1];
			_Object addWeaponCargoGlobal ["TWC_Milan_Launcher_Disassemabled",1];
		}else{
			systemchat "Can not dismantle Milan as there is no space in your inventory for the Milan Missile";
		};
	}else{
		deleteVehicle _Milan;

		_Object = createVehicle ["WeaponHolderSimulated", getpos player, [], 0, "CAN_COLLIDE"];
		_Object addWeaponCargoGlobal ["TWC_Milan_Tripod_Disassemabled",1];
		_Object addWeaponCargoGlobal ["TWC_Milan_Launcher_Disassemabled",1];
	};