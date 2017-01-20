/*Written by WiredTiger for use on the TWC Public server.
Not to be used without consent from TWC or WiredTiger
Thanks for the consent -[TWC] jayman
*/

if (isNil "InsP_cacheGroup") then {

	cacheBoxA = cacheBoxType createVehicle (getMarkerPos "cacheSpawn" vectorAdd[5,0,0]);
	_cacheADeath = cacheBoxA addMPEventHandler ["MPKilled", {[_this select 0, _this select 1] call twc_fnc_deadCache; ["cacheBoxA", "SUCCEEDED",true] spawn BIS_fnc_taskSetState; ["cacheBoxA"] call twc_fnc_deleteMarkers}];
	publicVariable "cacheBoxA";
	[West,["cacheBoxA"],["Destroying the insurgent ammo cache will limit their abilities in the region","Destroy Insurgent Cache",""],objNull,False,1,True,"",False] call BIS_fnc_taskCreate;

	cacheBoxB = cacheBoxType createVehicle (getMarkerPos "cacheSpawn" vectorAdd[10,0,0]);;
	_cacheADeath = cacheBoxB addMPEventHandler ["MPKilled", {[_this select 0, _this select 1] call twc_fnc_deadCache; ["cacheBoxB", "SUCCEEDED",true] spawn BIS_fnc_taskSetState; ["cacheBoxB"] call twc_fnc_deleteMarkers}];
	publicVariable "cacheBoxB";
	[West,["cacheBoxB"],["Destroying the insurgent ammo cache will limit their abilities in the region","Destroy Insurgent Cache",""],objNull,False,1,True,"",False] call BIS_fnc_taskCreate;

	cacheBoxC = cacheBoxType createVehicle (getMarkerPos "cacheSpawn" vectorAdd[15,0,0]);;
	_cacheADeath = cacheBoxC addMPEventHandler ["MPKilled", {[_this select 0, _this select 1] call twc_fnc_deadCache; ["cacheBoxC", "SUCCEEDED",true] spawn BIS_fnc_taskSetState; ["cacheBoxC"] call twc_fnc_deleteMarkers}];
	publicVariable "cacheBoxC";
	[West,["cacheBoxC"],["Destroying the insurgent ammo cache will limit their abilities in the region","Destroy Insurgent Cache",""],objNull,False,1,True,"",False] call BIS_fnc_taskCreate;

	InsP_cacheGroup = [cacheBoxA, cacheBoxB, cacheBoxC];
	publicVariable "InsP_cacheGroup";
	
	waitUntil {!(isNil "cacheBoxA") && !(isNil "cacheBoxB") &&!(isNil "cacheBoxC") && !(isNil "InsP_cacheGroup")};

	{
		while {(_x distance (getMarkerPos "cacheSpawn")) < 50 || _x distance (getMarkerPos "arsenal") < 1000 || (_x distance cacheBoxA < 1000 && _x != cacheBoxA) || (_x distance cacheBoxB < 1000 && _x != cacheBoxB) || (_x distance cacheBoxC < 1000 && _x != cacheBoxC)} do {
	
			_houseList = [(worldSize / 2),(worldSize / 2)] nearObjects ["House",(sqrt 2 *(worldSize / 2))];
			sleep .25;
			_c = 0;
			_house = _houseList call BIS_fnc_selectRandom;
			while { format ["%1", _house buildingPos _c] != "[0,0,0]" } do {_c = _c + 1};
			if (_c > 0) then {
				_ranNum = floor(random _c);
				_x setPos (_house buildingPos _ranNum);
				sleep 1;
			};
			sleep 0.25;
		};
		clearItemCargoGlobal _x;
		clearWeaponcargoGlobal _x;
		clearMagazineCargoGlobal _x;
		clearBackpackCargoGlobal _x;
	} forEach InsP_cacheGroup;
	
	{
		[getPos _x, "null", [6,[100,200]],[5,100]] call twc_fnc_spawnTownTrigger;
	}forEach InsP_cacheGroup;
};