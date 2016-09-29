params["_marker"];

hint format["Redfor has captued %1", _marker];
_marker setMarkerColor "colorEAST";

if(_marker != "airbase2" && _marker != "commanderBase")then{
	[_marker, "CREATED", true] spawn BIS_fnc_taskSetState;	
	execVM format["server\siteSetup\%1\init.sqf", _marker];
};

if (_marker == "airbase2")then {
	[_marker, "CREATED", true] spawn BIS_fnc_taskSetState;
	execVM format["server\siteSetup\%1\init.sqf", _marker];
	
	if(getMarkerColor "commanderBase" == "colorEast") then{
		RussianCheckTrigger setPos (getMarkerPos "crateBoat");
		["respawn_West", (getMarkerPos "boatSpawn")] remoteExec ["setMarkerPos", 0, "respawnMarker"]; 
	
		deleteVehicle jetSpawnPad;
		deleteVehicle jetSpawner;
		deleteVehicle armourSpawnPad;
		deleteVehicle armourSpawner;
	
		deleteVehicle radioSign;
		
		cratePos = crateBoatPos;
		publicVariable "cratePos";
		{crateBox setPos cratePos} remoteExec ["call", 0];
		
	}else{
	
	};
};



if(_marker == "commanderBase") then{
	"commanderBase" setMarkerAlpha 0;
	
	if(getMarkerColor "airbase2" == "colorWest") then{
		RussianCheckTrigger setPos (getMarkerPos "airbase2");
		["respawn_West", (getMarkerPos "airbase2")] remoteExec ["setMarkerPos", 0, "respawnMarker"]; 
		
		cratePos = getMarkerPos "crateDefault"; 
		publicVariable "cratePos";
		{crateBox setPos cratePos} remoteExec ["call", 0];
		
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
		["respawn_West", (getMarkerPos "boatSpawn")] remoteExec ["setMarkerPos", 0, "respawnMarker"]; 
		
		deleteVehicle jetSpawnPad;
		deleteVehicle jetSpawner;		
		deleteVehicle armourSpawnPad;
		deleteVehicle armourSpawner;
		
		cratePos = crateboatPos;
		publicVariable "cratePos";
		{crateBox setPos cratePos} remoteExec ["call", 0];
	};
	
};

if(_marker == "radar1") then{
	if (!isNil "radarObj1") then{
		if(alive radarObj1) then{
			"radar1Radius" setMarkerAlpha 1;
		};
	};
};
if(_marker == "radar2") then{
	if (!isNil "radarObj2")then{
		if(alive radarObj2) then{
			"radar2Radius" setMarkerAlpha 1;
		};
	};
};

_enemy = nearestObjects [getMarkerPos _marker, ["LandVehicle","Air"], 800];
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