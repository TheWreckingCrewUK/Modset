TWC_fnc_createLandSpawnPad = {
    deleteVehicle jetSpawnPad;
	deleteVehicle jetSpawner;
	jetSpawnPad = "Land_HelipadSquare_F" createVehicle Position player;
	publicVariable "jetSpawnPad";
	jetSpawnPad setDir (getDir player);
	jetSpawner = "Land_infoStand_V1_F" createVehicle position player;
	_dir = getDir player;
	_dir = _dir + 180;
	jetSpawner setDir _dir;
	jetSpawner attachTo [jetSpawnPad,[5.5,-5.5,.5]];
};

TWC_fnc_createArmourSpawnPad = {
    deleteVehicle armourSpawnPad;
	deleteVehicle armourSpawner;
	armourSpawnPad = "Land_HelipadSquare_F" createVehicle Position player;
	publicVariable "armourSpawnPad";
	armourSpawnPad setDir (getDir player);
	armourSpawner = "Land_infoStand_V2_F" createVehicle position player;
	_dir = getDir player;
	_dir = _dir + 180;
	armourSpawner setDir _dir;
	armourSpawner attachTo [armourSpawnPad,[5.5,-5.5,.6]];
};

TWC_fnc_moveAmmoBox = {
	"crate" setMarkerpos (getPos player);
	[{mainAmmoBox setPos (getPos commander1);},"BIS_fnc_spawn",true,false] call BIS_fnc_MP;
};

TWC_fnc_setSpawn = {
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
	
};

baseCreateAction = ["thisStartsTheBase","Base Creation","", {},{true}] call ace_interact_menu_fnc_createAction;
createLandSpawnPadAction = ["LandPad","Land Spawner","", {call TWC_fnc_createLandSpawnPad;},{true}] call ace_interact_menu_fnc_createAction;
createArmourSpawnPadAction = ["ArmourPad","Helo Spawner","", {call TWC_fnc_createArmourSpawnPad;},{true}] call ace_interact_menu_fnc_createAction;
moveAmmoBoxAction = ["moveAmmoBox","Ammo Box","", {call TWC_fnc_moveAmmoBox;},{true}] call ace_interact_menu_fnc_createAction;
setSpawnAction = ["setSpawn","Set Spawn","", {call TWC_fnc_setSpawn;},{true}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], baseCreateAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheBase"], createLandSpawnPadAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheBase"], createArmourSpawnPadAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheBase"], moveAmmoBoxAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheBase"], setSpawnAction] call ace_interact_menu_fnc_addActionToObject;