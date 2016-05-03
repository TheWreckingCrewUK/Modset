TWC_fnc_createBaseBoat = {
	if (isNil "baseLifeBoat") then{
		if ((player distance2D (getMarkerPos "crateBoat") < 200) || (player distance2D (getMarkerPos "commanderBase") < 200)) then{
			baseLifeBoat = "B_Lifeboat" createVehicle (position player);
			baseLifeBoat disableCollisionWith commander1;
			publicVariable "baseLifeBoat";
			baseLifeBoat setPos (getPos player);
			_dir = getDir player;
			baseLifeBoat setDir _dir;
		}else{
			hint "You need to be on the LHD or near Commander Base to spawn the Commander Boat";
		};
	}else{
		if (player distance2D baseLifeBoat < 200 || player distance2D (getMarkerPos "crateBoat") < 200)then{
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
	if (player distance2D baseLifeBoat < 200) then{
		deleteVehicle jetSpawnPad;
		deleteVehicle jetSpawner;
		jetSpawnPad = "Land_HelipadSquare_F" createVehicle Position player;
		publicVariable "jetSpawnPad";
		jetSpawnPad attachTo [player];
		_action = player addAction [ "Place Object", {{detach _x}forEach attachedObjects player; removeAllActions player; } ];
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

TWC_fnc_createArmourSpawnPad = {
	if (player distance2D baseLifeBoat < 200) then{
		deleteVehicle armourSpawnPad;
		deleteVehicle armourSpawner;
		armourSpawnPad = "Land_HelipadSquare_F" createVehicle Position player;
		publicVariable "armourSpawnPad";
		armourSpawnPad attachTo [player];
		_action = player addAction [ "Place Object", {{detach _x}forEach attachedObjects player; removeAllActions player; } ];
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

TWC_fnc_moveAmmoBox = {
	if (player distance2D baseLifeBoat < 200) then{
		"crate" setMarkerpos (getPos player);
		[{mainAmmoBox setPos (getPos player);},"BIS_fnc_spawn",true,false] call BIS_fnc_MP;
		if(!isNil "radioSign")then{
			deleteVehicle radioSign;
			publicVariable "radioSign";
			deleteVehicle radioPicture;
			publicVariable "radioPicture";
		};
		radioSign = "sign_F" createVehicle (position player vectorAdd[0,5,0]);
		radioSign setDir (getDir player);
		publicVariable "radioSign";
		radioPicture = "userTexture1M_F" createVehicle (position player);
		radioPicture attachTo [radioSign, [0,-.1,0.5]];
		radioPicture setObjectTexture [0, "server\pics\radio.jpg"];
		publicVariable "radioPicture";
	}else{
		hint "You are not close enough to the boat to make a base";
	};
};

TWC_fnc_setSpawn = {
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
	
};

TWC_fnc_createHBarrier_5 = {
	if(player distance2D baseLifeBoat < 200) then {
		_obj = "Land_HBarrier_5_F" createvehicle position player;
		_obj attachTo [player];
		_action = player addAction [ "Place Object", {{detach _x}forEach attachedObjects player; removeAllActions player; } ];		
	}else{
		hint "You are not close enough to the boat to make a base";
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