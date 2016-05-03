params["_marker","_canCounter"];

hint format["Blufor has captured %1",_marker];
_marker setMarkerColor "colorWEST";

if (_marker == "mainHQ") exitWith {
	[_marker, "SUCCEEDED", true] spawn BIS_fnc_taskSetState;
	["Enemy MainHQ captured. All forces routed. Mission Completed.", "hint", True, True] call BIS_fnc_MP;
	[] spawn {sleep 15; ["end1", false, 0] call BIS_fnc_endMission};
};

if (_marker == "airbase2")then {
	[_marker, "SUCCEEDED", true] spawn BIS_fnc_taskSetState;
	if(getMarkerColor "commanderBase" == "colorEAST") then {
		RussianCheckTrigger setPos (getMarkerPos "airbase2");
		airbase2Respawn = [west, "airbase2"] call BIS_fnc_addRespawnPosition;
		publicVariable "airbase2Respawn";
		boatRespawn call BIS_fnc_removeRespawnPosition;
		
		"crate" setMarkerpos (getMarkerPos "crateDefault");
		[{mainAmmoBox setPos (getMarkerPos "crateDefault");},"BIS_fnc_spawn",true,false] call BIS_fnc_MP;
		deleteVehicle radioSign;
		publicVariable "radioSign";
		deleteVehicle radioPicture;
		publicVariable "radioPicture";
		radioSign = "sign_F" createVehicle (getMarkerPos "crateDefault" vectorAdd[0,5,1]);
		radioSign setDir 300;
		publicVariable "radioSign";
		radioPicture = "userTexture1M_F" createVehicle (getMarkerPos "crateDefault");
		radioPicture attachTo [radioSign, [0,-.1,0.5]];
		radioPicture setObjectTexture [0, "server\pics\radio.jpg"];
		publicVariable "radioPicture";
		
		if(!isNil "jetSpawnPad") then{
			deleteVehicle jetSpawnPad;
			deleteVehicle jetSpawner;
		};
		jetSpawnPad = "Land_HelipadSquare_F" createVehicle (getMarkerPos "jetPadDefault");
		jetSpawnPad setDir 307;
		publicVariable "jetSpawnPad";
		jetSpawner = "Land_infoStand_V1_F" createVehicle (getMarkerPos "jetPadDefault");
		jetSpawner setDir 307;
		jetSpawner attachTo [jetSpawnPad,[5.5,-5.5,.5]];
		publicVariable "jetSpawner";
	
		if(!isNil "armourSpawnPad") then{
			deleteVehicle armourSpawnPad;
			deleteVehicle armourSpawner;
		};
		armourSpawnPad = "Land_HelipadSquare_F" createVehicle (getMarkerPos "heloPadDefault");
		armourSpawnPad setDir 307;
		publicVariable "armourSpawnPad";
		armourSpawner = "Land_infoStand_V2_F" createVehicle (getMarkerPos "heloPadDefault");
		armourSpawner setDir 307;
		armourSpawner attachTo [armourSpawnPad,[5.5,-5.5,.6]];
		publicVariable "jetSpawner";
	}else{
		
	};
};

if(_marker == "commanderBase") then{
	commanderBaseRespawn = [west, position player] call BIS_fnc_addRespawnPosition;
	publicVariable "commanderBaseRespawn";
};

if(_marker == "radar1" || _marker == "radar2")then{
	_markerRadius = format["%1Radius", _marker];
	_markerRadius setMarkerAlpha 0;
};

_rand = (random 100);
if(_rand < 40 && _canCounter && _marker != "commanderBase") exitWith{
	[_marker, _rand] spawn {
		sleep 10; [(_this select 0), (_this select 1)] call twc_attackDeciding
	};
};

[_marker]spawn{
	sleep 300;
	{ deleteVehicle _x } forEach allDead;

	_enemyVehicle = nearestObjects [getMarkerPos (_this select 0), ["LandVehicle"], 800];
	{
		if((typeOf _x) in friendlyVehiclesArray) then{
			_enemyVehicle = _enemyVehicle - [_x];
		};
	}forEach _enemyVehicle;

	{
		deleteVehicle _x
	}forEach _enemyVehicle;

	_enemy = nearestObjects [getMarkerPos (_this select 0), ["Man","WeaponHolder","GroundWeaponHolder"], 800];
	{
		if((side _x) == WEST) then{
			_enemy = _enemy - [_x];
		};
	}forEach _enemy;

	{
		deleteVehicle _x
	}forEach _enemy;

	{
		deleteGroup _x
	}forEach allGroups;
};

remainingArray = remainingArray - [_marker];
publicVariable "capturedArray";

if ((_marker) in capturedArray) exitWith{};

capturedArray = capturedArray + [_marker];
publicVariable "capturedArray";