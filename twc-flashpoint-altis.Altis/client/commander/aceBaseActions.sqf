TWC_fnc_createBaseBoat = {
	if (isNil "baseLifeBoat") then{
		if ((player distance2D (getMarkerPos "crateBoat") < 200) || (player distance2D (getMarkerPos "commanderBase") < 200)) then{
			baseLifeBoat = "CUP_B_RHIB_USMC" createVehicle (position player);
			baseLifeBoat disableCollisionWith commander1;
			publicVariable "baseLifeBoat";
			baseLifeBoat setPos (getPos player);
			_dir = getDir player;
			baseLifeBoat setDir _dir;
		}else{
			hint "You need to be on the LHD or near Commander Base to spawn the Commander Boat";
		};
	}else{
		if ((player distance2D baseLifeBoat) < 200 || player distance2D (getMarkerPos "crateBoat") < 200 || player distance2D (getMarkerPos "commanderBase")) then{
			deleteVehicle baseLifeBoat;
			publicVariable "baseLifeBoat";
			baseLifeBoat = "B_Lifeboat" createVehicle (position player);
			baseLifeBoat disableCollisionWith commander1;
			publicVariable "baseLifeBoat";
			baseLifeBoat setPos (getPos player);
			_dir = getDir player;
			baseLifeBoat setDir _dir;
		}else{
			hint "You must be within 200 Meters of the current commander base or LHD to spawn the commander boat."
		};
	};
};

TWC_fnc_createLandSpawnPad = {
	if (!isNil "baseLifeBoat") then{
		if (player distance2D baseLifeBoat < 200) then{
			jetSpawnPad = "Land_HelipadSquare_F" createVehicle Position player;
			publicVariable "jetSpawnPad";
			jetSpawnPad attachTo [player];
			_action = player addAction [ "Place Object", {{detach _x}forEach 	attachedObjects player; removeAllActions player; } ];
			jetSpawner = "Land_infoStand_V1_F" createVehicle position player;
			_dir = getDir player;
			_dir = _dir + 180;
			jetSpawner setDir _dir;
			jetSpawner attachTo [jetSpawnPad,[5.5,-5.5,1]];
			publicVariable "jetSpawner";
		}else{
			hint "You need to be withing 200 Meters of the commander boat to make the base"
		};
	}else{
		if (player distance2D baseLifeBoat < 200) then{
			deleteVehicle jetSpawnPad;
			deleteVehicle jetSpawner;
			jetSpawnPad = "Land_HelipadSquare_F" createVehicle Position player;
			publicVariable "jetSpawnPad";
			jetSpawnPad attachTo [player];
			_action = player addAction [ "Place Object", {{detach _x}forEach 	attachedObjects player; removeAllActions player; } ];
			jetSpawner = "Land_infoStand_V1_F" createVehicle position player;
			_dir = getDir player;
			_dir = _dir + 180;
			jetSpawner setDir _dir;
			jetSpawner attachTo [jetSpawnPad,[5.5,-5.5,1]];
			publicVariable "jetSpawner";
		}else{
			hint "You are not close enough to the boat to make a base";
		};
	};
};

TWC_fnc_createArmourSpawnPad = {
	if (!isNil "baseLifeBoat") then{
		if (player distance2D baseLifeBoat < 200) then{
			armourSpawnPad = "Land_HelipadSquare_F" createVehicle Position player;
			publicVariable "armourSpawnPad";
			armourSpawnPad attachTo [player];
			player addAction [ "Place Object", {{detach _x}forEach attachedObjects player; removeAllActions player; } ];
			armourSpawner = "Land_infoStand_V2_F" createVehicle position player;
			_dir = getDir player;
			_dir = _dir + 180;
			armourSpawner setDir _dir;
			armourSpawner attachTo [armourSpawnPad,[5.5,-5.5,1]];
			publicVariable "armourSpawner";
		}else{
			hint "You are not close enough to the boat to make a base";
		};
	}else{
		if (player distance2D baseLifeBoat < 200) then{
			deleteVehicle armourSpawnPad;
			deleteVehicle armourSpawner;
			armourSpawnPad = "Land_HelipadSquare_F" createVehicle Position player;
			publicVariable "armourSpawnPad";
			armourSpawnPad attachTo [player];
			player addAction [ "Place Object", {{detach _x}forEach attachedObjects player; removeAllActions player; } ];
			armourSpawner = "Land_infoStand_V2_F" createVehicle position player;
			_dir = getDir player;
			_dir = _dir + 180;
			armourSpawner setDir _dir;
			armourSpawner attachTo [armourSpawnPad,[5.5,-5.5,1]];
			publicVariable "armourSpawner";
		}else{
			hint "You are not close enough to the boat to make a base";
		};
	};
};

TWC_fnc_moveAmmoBox = {
	if(!isNil "baseLifeBoat") then{
		if (player distance2D baseLifeBoat < 200) then{
			"crate" setMarkerpos (getPos player);
			[{mainAmmoBox setPos (getPos player);},"BIS_fnc_spawn",true,false] call BIS_fnc_MP;
		}else{
			hint "You need to create the commander boat first";
		};
	}else{
		hint "You are not close enough to the boat to make a base";
	};
};

TWC_fnc_setSign = {
	if(!isNil "baseLifeBoat") then{
		if (player distance2D baseLifeBoat < 200) then{
			if(!isNil "radioSign")then{
				deleteVehicle radioSign;
				publicVariable "radioSign";
				deleteVehicle radioPicture;
				publicVariable "radioPicture";
			};
			radioSign = "sign_F" createVehicle (position player vectorAdd[0,5,0]);
			radioSign setDir (getDir player);
			publicVariable "radioSign";
			radioSign attachTo [player];
			player addAction [ "Place Object", {{detach _x}forEach attachedObjects player; removeAllActions player; } ];
			radioPicture = "userTexture1M_F" createVehicle (position player);
			radioPicture attachTo [radioSign, [0,-.1,0.5]];
			radioPicture setObjectTexture [0, "server\pics\radio.jpg"];
			publicVariable "radioPicture";
		}else{
			hint "You need to create the commander boat first";
		};
	}else{
		hint "You are not close enough to the boat to make a base";
	};
};

TWC_fnc_setSpawn = {
	if(!isNil "baseLifeBoat") then{
		if (player distance2D baseLifeBoat < 200) then{
			commanderBaseRespawn call BIS_fnc_removeRespawnPosition;
			publicVariable "commanderBaseRespawn";
			commanderBaseCount = 1;
			publicVariable "commanderBaseCount";
			airbase2Respawn call BIS_fnc_removeRespawnPosition;
			boatRespawn call BIS_fnc_removeRespawnPosition;
			commanderBaseRespawn = [west, position player] call BIS_fnc_addRespawnPosition;
			publicVariable "commanderBaseRespawn";
			"commanderBase" setMarkerPos (getPos player);
			"commanderBase" setMarkerColor "colorWest";
			"commanderBase" setMarkerAlpha 1;
			RussianCheckTrigger setPos (getPos player);
		}else{
			hint "You are not close enough to the boat to make a base";
		};
	}else{
		hint "You need to create a commander boat first.";
	};
	
};

TWC_fnc_createHBarrier_5 = {
	if(!isNil "baseLifeBoat") then{
		if(player distance2D baseLifeBoat < 200) then {
			_obj = "Land_HBarrier_5_F" createvehicle position player;
			_dir = getDir player;
			_pos = [player, 3, _dir] call BIS_fnc_relPos;
			_playerPos = getPos player;
			_offSet = _playerPos vectorDiff _pos;
			_offSet = [(_offSet select 0), (_offSet select 1), .9];
			_obj setPos _offSet;
			_obj attachTo [player, _offset];
			player addAction [ "Place Object", {{detach _x}forEach attachedObjects player; removeAllActions player; } ];		
		}else{
			hint "You are not close enough to the boat to make a base";
		};
	}else{
		hint "You need to Create a commander Boat first";
	};
};

baseCreateAction = ["thisStartsTheBase","Base Creation","", {},{true}] call ace_interact_menu_fnc_createAction;
createBaseBoatAction = ["BaseBoat", "Base Boat","", {call TWC_fnc_createBaseBoat;},{true}] call ace_interact_menu_fnc_createAction;
createLandSpawnPadAction = ["LandPad","Land Spawner","", {call TWC_fnc_createLandSpawnPad;},{true}] call ace_interact_menu_fnc_createAction;
createArmourSpawnPadAction = ["ArmourPad","Helo Spawner","", {call TWC_fnc_createArmourSpawnPad;},{true}] call ace_interact_menu_fnc_createAction;
moveAmmoBoxAction = ["moveAmmoBox","Ammo Box","", {call TWC_fnc_moveAmmoBox;},{true}] call ace_interact_menu_fnc_createAction;
setSpawnAction = ["setSpawn","Set Spawn","", {call TWC_fnc_setSpawn;},{true}] call ace_interact_menu_fnc_createAction;
HBarrier_5Action = ["HBarrier_5","HBarrier 5","", {call TWC_fnc_createHBarrier_5;},{true}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], baseCreateAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheBase"], createBaseBoatAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheBase"], createLandSpawnPadAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheBase"], createArmourSpawnPadAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheBase"], moveAmmoBoxAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheBase"], setSpawnAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheBase"], HBarrier_5Action] call ace_interact_menu_fnc_addActionToObject;






//Non-Self Actions

deleteHBarrier5Action = ["deleteHBarrier5","Delete HBarrier","",{_obj = cursorObject; deleteVehicle _obj;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_HBarrier_5_F", 0, ["ACE_MainActions"], deleteHBarrier5Action] call ace_interact_menu_fnc_addActionToClass;