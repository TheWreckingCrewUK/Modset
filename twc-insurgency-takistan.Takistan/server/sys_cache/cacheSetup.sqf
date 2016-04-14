/*Written by WiredTiger for use on the TWC Public server.
Not to be used without consent from TWC or WiredTiger
*/

if (isNil "InsP_cacheGroup") then {

	cacheBoxA = cacheBoxType createVehicle (getMarkerPos "cacheSpawn" vectorAdd[5,0,0]);
	_cacheADeath = cacheBoxA addMPEventHandler ["MPKilled", {[_this select 0, _this select 1] call InsP_fnc_deadCache; ["cacheBoxA", "SUCCEEDED",true] spawn BIS_fnc_taskSetState; ["cacheBoxA"] call InsP_fnc_deleteMarkers}];
	publicVariable "cacheBoxA";
	[West,["cacheBoxA"],["Destroying the insurgent ammo cache will limit their abilities in the region","Destroy Insurgent Cache",""],objNull,True,1,True,"",False] call BIS_fnc_taskCreate;

	cacheBoxB = cacheBoxType createVehicle (getMarkerPos "cacheSpawn" vectorAdd[10,0,0]);;
	_cacheADeath = cacheBoxB addMPEventHandler ["MPKilled", {[_this select 0, _this select 1] call InsP_fnc_deadCache; ["cacheBoxB", "SUCCEEDED",true] spawn BIS_fnc_taskSetState; ["cacheBoxB"] call InsP_fnc_deleteMarkers}];
	publicVariable "cacheBoxB";
	[West,["cacheBoxB"],["Destroying the insurgent ammo cache will limit their abilities in the region","Destroy Insurgent Cache",""],objNull,True,1,True,"",False] call BIS_fnc_taskCreate;

	cacheBoxC = cacheBoxType createVehicle (getMarkerPos "cacheSpawn" vectorAdd[15,0,0]);;
	_cacheADeath = cacheBoxC addMPEventHandler ["MPKilled", {[_this select 0, _this select 1] call InsP_fnc_deadCache; ["cacheBoxC", "SUCCEEDED",true] spawn BIS_fnc_taskSetState; ["cacheBoxC"] call InsP_fnc_deleteMarkers}];
	publicVariable "cacheBoxC";
	[West,["cacheBoxC"],["Destroying the insurgent ammo cache will limit their abilities in the region","Destroy Insurgent Cache",""],objNull,True,1,True,"",False] call BIS_fnc_taskCreate;

	InsP_cacheGroup = [cacheBoxA, cacheBoxB, cacheBoxC];
	publicVariable "InsP_cacheGroup";
	
	waitUntil {!(isNil "cacheBoxA") && !(isNil "cacheBoxB") &&!(isNil "cacheBoxC") && !(isNil "InsP_cacheGroup")};

	{
		while {(_x distance (getMarkerPos "cacheSpawn")) < 50} do {
			_cacheMarker = "";
			switch (str _forEachIndex) do {
				case "0": {_cacheMarker = "cacheMarkerA"};
				case "1": {_cacheMarker = "cacheMarkerB"};
				case "2": {_cacheMarker = "cacheMarkerC"};
			};
	
			_houseList = (getMarkerPos _cacheMarker) nearObjects ["House",1250];
			sleep .25;
			_c = 0;
			_house = _houseList call BIS_fnc_selectRandom;
			while { format ["%1", _house buildingPos _c] != "[0,0,0]" } do {_c = _c + 1};
			if (_c > 0) then {
				_ranNum = floor(random _c);
				_x setPos (_house buildingPos _ranNum);
				sleep 1;
				_cacheGroup = [[(getPosATL _x select 0)+random 50, (getPosATL _x select 1)+random 50,0], EAST, (cacheDefenseSquad)] call BIS_fnc_spawnGroup;
				[_cacheGroup, getPosATL _x, 100, 2, true] call CBA_fnc_taskDefend;
			};
			sleep 0.25;
		};
	} forEach InsP_cacheGroup;
	
	{[_x] execVM "server\sys_cache\cacheLoadout.sqf";}forEach InsP_cacheGroup;
};