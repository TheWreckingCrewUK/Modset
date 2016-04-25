params["_marker","_thislist"];

if ((west countSide _thisList) == 0) then {
	if(_marker == "commanderBase") then {		
		"crate" setMarkerpos (getMarkerPos "crateDefault");
		[{mainAmmoBox setPos (getMarkerPos "crateDefault");},"BIS_fnc_spawn",true,false] call BIS_fnc_MP;
		
		deleteVehicle jetSpawnPad;
		deleteVehicle jetSpawner;
		jetSpawnPad = "Land_HelipadSquare_F" createVehicle (getMarkerPos "jetPadDefault");
		jetSpawnPad setDir 300;
		publicVariable "jetSpawnPad";
		jetSpawner = "Land_infoStand_V1_F" createVehicle (getMarkerPos "jetPadDefault");
		jetSpawner attachTo [jetSpawnPad,[5.5,-5.5,.5]];
		
		deleteVehicle armourSpawnPad;
		deleteVehicle armourSpawner;
		armourSpawnPad = "Land_HelipadSquare_F" createVehicle (getMarkerPos "heloPadDefault");
		armourSpawnPad setDir 300;
		publicVariable "armourSpawnPad";
		armourSpawner = "Land_infoStand_V1_F" createVehicle (getMarkerPos "heloPadDefault");
		armourSpawner attachTo [armourSpawnPad,[5.5,-5.5,.6]];
		
		"commanderBase" setMarkerAlpha 0;
		"commanderBase" setMarkerColor "colorEAST";
		commanderBaseCount = 0;
		publicVariable "commanderBaseCount";
		RussianCheckTrigger setPos (getMarkerPos "crateDefault");
		if(getMarkerColor "airbase2" == "colorWEST") then {
			airbase2Respawn = [west, "airbase2"] call BIS_fnc_addRespawnPosition;
			publicVariable "airbase2Respawn";
		}else{
			boatRespawn = [west, "boatSpawn"] call BIS_fnc_addRespawnPosition;
			publicVariable "boatRespawn";
		};
	}else{
	[_marker] call twc_siteCapturedRedfor;
	};
}else{
	[_marker] call twc_siteCapturedBlufor;
	if(_marker == "commanderBase") then{
		commanderBaseRespawn = [west,"commanderBase"] call BIS_fnc_addRespawnPosition;
		publicVariable "commanderBaseRespawn";
	};
};