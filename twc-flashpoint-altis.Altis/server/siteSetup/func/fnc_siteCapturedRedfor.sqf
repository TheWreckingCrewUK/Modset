params["_marker"];

hint format["Redfor has captued %1", _marker];
_marker setMarkerColor "colorEAST";

if(_marker != "airbase2" && _marker != "commanderBase")then{
	[_marker, "CREATED", true] spawn BIS_fnc_taskSetState;	
	execVM format["server\siteSetup\%1\init.sqf", _marker];
	[_marker] call twc_basicLogistics;
};

if (_marker == "airbase2")then {
	[_marker, "CREATED", true] spawn BIS_fnc_taskSetState;
	execVM format["server\siteSetup\%1\init.sqf", _marker];
	[_marker] call twc_basicLogistics;
	
	if(getMarkerColor "commanderBase" == "colorEast") then{
		RussianCheckTrigger setPos (getMarkerPos "crateBoat");
		airbase2Respawn call BIS_fnc_removeRespawnPosition;
		boatRespawn = [west, "boatSpawn"] call BIS_fnc_addRespawnPosition;
		publicVariable "boatRespawn";
	
		deleteVehicle jetSpawnPad;
		deleteVehicle jetSpawner;
		deleteVehicle armourSpawnPad;
		deleteVehicle armourSpawner;
	
		deleteVehicle radioSign;
		deleteVehicle radioPicture;
		"crate" setMarkerpos (getMarkerPos "crateBoat");
		[{mainAmmoBox setPos (getPos player);},"BIS_fnc_spawn",true,false] call BIS_fnc_MP;
		mainAmmoBox setPos (getPos mainAmmoBox vectorAdd [0,0,180]);
	}else{
	
	};
};



if(_marker == "commanderBase") then{
	"commanderBase" setMarkerAlpha 0;
	
	if(getMarkerColor "airbase2" == "colorWest") then{
	RussianCheckTrigger setPos (getMarkerPos "airbase2");
		airbase2Respawn = [west, "airbase"] call BIS_fnc_addRespawnPosition;
		publicVariable "airbase2Respawn";
		
		"crate" setMarkerpos (getMarkerPos "crateDefault");
		[{mainAmmoBox setPos (getPos player);},"BIS_fnc_spawn",true,false] call BIS_fnc_MP;
		
		deleteVehicle jetSpawnPad;
		deleteVehicle jetSpawner;	
		jetSpawnPad = "Land_HelipadSquare_F" createVehicle (getMarkerPos "jetPadDefault");
		jetSpawnPad setDir 307;
		publicVariable "jetSpawnPad";
		jetSpawner = "Land_infoStand_V1_F" createVehicle (getMarkerPos "jetPadDefault");
		jetSpawner setDir 307;
		jetSpawner attachTo [jetSpawnPad,[5.5,-5.5,.5]];
		publicVariable "jetSpawner";
	
		deleteVehicle armourSpawnPad;
		deleteVehicle armourSpawner;	
		armourSpawnPad = "Land_HelipadSquare_F" createVehicle (getMarkerPos "heloPadDefault");
		armourSpawnPad setDir 307;
		publicVariable "armourSpawnPad";
		armourSpawner = "Land_infoStand_V2_F" createVehicle (getMarkerPos "heloPadDefault");
		armourSpawner setDir 307;
		armourSpawner attachTo [armourSpawnPad,[5.5,-5.5,.6]];
		publicVariable "jetSpawner";
		
	}else{
		RussianCheckTrigger setPos (getMarkerPos "crateBoat");
		boatRespawn = [west, "boatSpawn"] call BIS_fnc_addRespawnPosition;
		publicVariable "boatRespawn";
		
		deleteVehicle jetSpawnPad;
		deleteVehicle jetSpawner;		
		deleteVehicle armourSpawnPad;
		deleteVehicle armourSpawner;
		
		"crate" setMarkerpos (getMarkerPos "crateBoat");
		[{mainAmmoBox setPos (getPos player);},"BIS_fnc_spawn",true,false] call BIS_fnc_MP;
		mainAmmoBox setPos (getPos mainAmmoBox vectorAdd [0,0,182]);
	};
	
};

if(_marker == "radar1" || _marker == "radar2")then{
	_markerRadius = format["%1Radius", _marker];
	_markerRadius setMarkerAlpha 1;
};

{
	deleteVehicle _x
} forEach allDead;

_enemy = nearestObjects [getMarkerPos _marker, ["LandVehicle"], 800];
{
	deleteVehicle _x
}forEach _enemy;

_enemy = nearestObjects [getMarkerPos _marker, ["Man","WeaponHolder","GroundWeaponHolder"], 800];
{
	deleteVehicle _x
}forEach _enemy;

{
	deleteGroup _x
}forEach allGroups;

capturedArray = capturedArray - [_marker];
publicVariable "capturedArray";

if ((_marker) in remainingArray) exitWith{};

remainingArray = remainingArray + [_marker];
publicVariable "remainingArray";