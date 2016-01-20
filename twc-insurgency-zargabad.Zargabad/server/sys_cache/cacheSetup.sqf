/*Written by WiredTiger for use on the TWC Public server.
Not to be used without consent from TWC or WiredTiger
*/

if (isNil "InsP_cacheGroup") then {

	_cacheBoxType = "Box_FIA_Wps_F";

	cacheBoxA = _cacheBoxType createVehicle [3415, 3930, 22];
	_cacheADeath = cacheBoxA addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadCache; ["cacheBoxA"] call InsP_fnc_deleteMarkers}];
	publicVariable "cacheBoxA";

	cacheBoxB = _cacheBoxType createVehicle [3420, 3930, 22];
	_cacheADeath = cacheBoxB addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadCache; ["cacheBoxB"] call InsP_fnc_deleteMarkers}];
	publicVariable "cacheBoxB";

/*	cacheBoxC = _cacheBoxType createVehicle [3420, 3935, 22];
	_cacheADeath = cacheBoxC addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadCache; ["cacheBoxC"] call InsP_fnc_deleteMarkers}];
	publicVariable "cacheBoxC";
*/
	cacheBoxD = _cacheBoxType createVehicle [3425, 3930, 22];
	_cacheADeath = cacheBoxD addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadCache; ["cacheBoxD"] call InsP_fnc_deleteMarkers}];
	publicVariable "cacheBoxD";

	cacheBoxE = _cacheBoxType createVehicle [3415, 3935, 22];
	_cacheADeath = cacheBoxE addMPEventHandler ["MPKilled", {[_this select 0] call InsP_fnc_deadCache; ["cacheBoxE"] call InsP_fnc_deleteMarkers}];
	publicVariable "cacheBoxE";

	InsP_cacheGroup = [cacheBoxA, cacheBoxB/*, cacheBoxC*/, cacheBoxD, cacheBoxE];
	publicVariable "InsP_cacheGroup";
	
	waitUntil {!(isNil "cacheBoxA") && !(isNil "cacheBoxB")/* && !(isNil "cacheBoxC")*/ && !(isNil "cacheBoxD") && !(isNil "cacheBoxE") && !(isNil "InsP_cacheGroup")};

	{
		while {(_x distance (getMarkerPos "cacheSpawn")) < 50} do {
			_cacheMarker = "";
			switch (str _forEachIndex) do {
				case "0": {_cacheMarker = "cacheMarkerA"};
				case "1": {_cacheMarker = "cacheMarkerB"};
				//case "2": {_cacheMarker = "cacheMarkerC"};
				case "2": {_cacheMarker = "cacheMarkerD"};
				case "3": {_cacheMarker = "cacheMarkerE"};
			};
	
			_houseList = (getMarkerPos _cacheMarker) nearObjects ["House",1500];
			sleep .25;
			_c = 0;
			_house = _houseList call BIS_fnc_selectRandom;
			while { format ["%1", _house buildingPos _c] != "[0,0,0]" } do {_c = _c + 1};
			if (_c > 0) then {
				_ranNum = floor(random _c);
				_x setPos (_house buildingPos _ranNum);
				sleep 1;
				_cacheGroup = [[(getPosATL _x select 0)+random 50, (getPosATL _x select 1)+random 50,0], EAST, (configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Rifle_squad")] call BIS_fnc_spawnGroup;
				[_cacheGroup, getPosATL _x, 100, 2, true] call CBA_fnc_taskDefend;
			};
			sleep 0.25;
		};
	} forEach InsP_cacheGroup;
	
	{[_x] execVM "server\sys_cache\cacheLoadout.sqf";}forEach InsP_cacheGroup;
};